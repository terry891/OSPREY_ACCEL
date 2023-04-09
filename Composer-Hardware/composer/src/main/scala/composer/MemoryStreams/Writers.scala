package composer.MemoryStreams

import chisel3._
import chisel3.util._
import composer._
import freechips.rocketchip.config.Parameters
import freechips.rocketchip.tilelink._

class WriterDataChannelIO(val dWidth: Int) extends Bundle {
  val data = Flipped(Decoupled(UInt(dWidth.W)))
  val channelIdle = Output(Bool())
}

class SequentialWriteChannelIO(maxBytes: Int)(implicit p: Parameters) extends Bundle {
  val req = Flipped(Decoupled(new ChannelTransactionBundle))
  val channel = new WriterDataChannelIO(maxBytes * 8)
  val busy = Output(Bool())
}

/**
  * Writes out a set number of fixed-size items sequentially to memory.
  *
  * @param nBytes the number of bytes in a single item
  */
class SequentialWriter(nBytes: Int, TLClientNode: TLClientNode)
                      (implicit p: Parameters) extends Module {
  val (tl_outer, edge) = TLClientNode.out(0)
  private val nBits = nBytes * 8
  // get TL parameters from edge
  val beatBytes = edge.manager.beatBytes
  val addressBits = log2Up(edge.manager.maxAddress)
  val addressBitsChop = addressBits - log2Up(beatBytes)
  val io = IO(new SequentialWriteChannelIO(nBytes))
  val tl_out = IO(new TLBundle(tl_outer.params))

  val s_idle :: s_data :: s_allocate :: s_mem :: Nil = Enum(4)
  val state = RegInit(s_idle)

  val tx_inactive :: tx_inProgress :: Nil = Enum(2)
  val nSources = edge.master.endSourceId
//  println(nSources)
  val txIDBits = log2Up(nSources)
  val txStates = RegInit(VecInit(Seq.fill(nSources)(tx_inactive)))
  val txPriority = PriorityEncoderOH(txStates map (_ === tx_inactive))

  val haveTransactionToDo = txStates.map(_ === tx_inProgress).reduce(_ || _)
  val haveAvailableTxSlot = txStates.map(_ === tx_inactive).reduce(_ || _)

//  val isReallyIdle = state === s_idle && !haveTransactionToDo
  io.channel.channelIdle := !haveTransactionToDo

  require(nBytes >= 1)
  require(nBytes <= beatBytes)
  require(isPow2(nBytes))

  val wordsPerBeat = beatBytes / nBytes

  val addr = Reg(UInt(addressBitsChop.W))
  val req_tx_max_length_beats = p(MaximumTransactionLength) / nBytes
  val req_tx_mlb_bits = log2Up(req_tx_max_length_beats)
  val req_len = Reg(UInt(req_tx_mlb_bits.W))

  val nextAddr = addr + 1.U

  val idx = Reg(UInt(log2Ceil(wordsPerBeat).W))

  val dataBuf = Reg(Vec(wordsPerBeat, UInt(nBits.W)))
  val dataValid = Reg(UInt(wordsPerBeat.W))

  val wdata = dataBuf.asUInt
  val wmask = FillInterleaved(nBytes, dataValid)

  val allocatedTransaction = RegInit(0.U(txIDBits.W))
  val earlyFinish = RegInit(false.B)

  tl_out.a.bits := DontCare
  tl_out.a.valid := false.B
  // handle TileLink 'd' interface (response from slave)
  tl_out.d.ready := haveTransactionToDo
  when(tl_out.d.fire) {
    txStates(tl_out.d.bits.source) := tx_inactive
  }

  switch(state) {
    is(s_idle) {
      when(io.req.fire) {
        if (nBytes == beatBytes) {
          idx := 0.U
        } else {
          idx := io.req.bits.addr(log2Ceil(beatBytes), log2Ceil(nBytes))
        }
        req_len := io.req.bits.len >> log2Up(nBytes)
        addr := io.req.bits.addr >> log2Up(beatBytes)
        dataValid := 0.U

        if (nBytes > 1) {
          assert(io.req.bits.addr(log2Ceil(nBytes) - 1, 0) === 0.U,
            "FixedSequentialWriteChannel: Unaligned request")
        }
        // wait for data from the core
        state := s_data
      }
    }
    is(s_data) {
      // when the core data channel fires, put the data in the write
      // buffer and update buffer maintance state
      when(io.channel.data.fire) {
        dataBuf(idx) := io.channel.data.bits
        dataValid := dataValid | UIntToOH(idx)
        idx := idx + 1.U
        req_len := req_len - 1.U
        when(idx === (wordsPerBeat - 1).U || req_len === 1.U) {
          state := s_allocate
        }
      }
    }
    is(s_allocate) {
      when(haveAvailableTxSlot) {
        allocatedTransaction := OHToUInt(txPriority)
        state := s_mem
      }
    }
    is(s_mem) {
      tl_out.a.valid := true.B
      tl_out.a.bits := edge.Put(
        fromSource = allocatedTransaction,
        toAddress = Cat(addr, 0.U(log2Up(beatBytes).W)),
        lgSize = log2Ceil(beatBytes).U,
        data = wdata,
        mask = wmask)._2

      // handle TileLink 'a' interface (request to slave)
      when(tl_out.a.fire) {
        txStates(allocatedTransaction) := tx_inProgress
        addr := nextAddr
        idx := 0.U
        dataValid := 0.U
        when(req_len === 0.U || earlyFinish) {
          state := s_idle
          earlyFinish := false.B
        }.otherwise {
          state := s_data
        }
      }
    }
  }

  io.req.ready := state === s_idle
  io.channel.data.ready := state === s_data
  io.busy := state =/= s_idle
}

