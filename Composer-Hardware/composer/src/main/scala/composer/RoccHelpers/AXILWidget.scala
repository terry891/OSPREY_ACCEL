package composer.RoccHelpers

import chipsalliance.rocketchip.config.Parameters
import chisel3._
import chisel3.util._
import freechips.rocketchip.amba.axi4._
import freechips.rocketchip.diplomacy.LazyModule

class AXILWidget(implicit p: Parameters) extends Widget()(p) {
//  override val crFile = LazyModule(new MCRFileAXI(8)(p))
//  crFile.node := AXI4IdIndexer(1) := node
  override val crFile = LazyModule(new MCRFileTL(8))
  crFile.node := AXI4ToTL() :=  AXI4UserYanker(capMaxFlight = Some(4)) := AXI4Fragmenter() := AXI4IdIndexer(1) :=  node
  override lazy val module = new AXILWidgetModule(this)
}

class AXILWidgetModule(outer: AXILWidget) extends WidgetModule(outer) {

  val io = IO(new Bundle {
    val cmds = Decoupled(UInt(nastiXDataBits.W))
    val resp = Flipped(Decoupled(UInt(nastiXDataBits.W)))
  })

  val roccCmdFifo = Module(new Queue(UInt(nastiXDataBits.W), 16))
  val roccRespFifo = Module(new Queue(UInt(nastiXDataBits.W), 16))

  genROReg(roccRespFifo.io.deq.bits, "resp_bits")
  genROReg(roccRespFifo.io.deq.valid, "resp_valid")
  Pulsify(genWORegInit(roccRespFifo.io.deq.ready, "resp_ready", false.B), pulseLength = 1)

  genWOReg(roccCmdFifo.io.enq.bits, "cmd_bits")
  Pulsify(genWORegInit(roccCmdFifo.io.enq.valid, "cmd_valid", false.B), pulseLength = 1)
  genROReg(roccCmdFifo.io.enq.ready, "cmd_ready")

  genROReg(WireInit(0xDEADCAFEL.U(32.W)), "AXIL_DEBUG")

  genCRFile()

  io.cmds <> roccCmdFifo.io.deq
  roccRespFifo.io.enq <> io.resp
}

