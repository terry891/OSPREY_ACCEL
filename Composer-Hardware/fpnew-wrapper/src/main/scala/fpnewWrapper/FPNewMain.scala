package fpnewWrapper

import Chisel.Cat
import chisel3._
import chisel3.experimental.ChiselEnum
import chisel3.util.Decoupled

//noinspection ScalaUnusedSymbol
object FPFloatFormat extends ChiselEnum {
  val Fp32, Fp64, Fp16, Fp8, Fp16Alt = Value
  def toWidth(a: FPFloatFormat.Type): Int = {
    a match {
      case Fp32 => 32
      case Fp64 => 64
      case Fp16 => 16
      case Fp8 => 8
      case Fp16Alt => 16
    }
  }
  def getCommonName(a: FPFloatFormat.Type): String = {
    a match {
      case Fp32 => "float"
      case Fp64 => "double"
      case Fp16 => "half"
      case Fp8 => "8bit"
      case Fp16Alt => "bfloat"
    }
  }
}

//noinspection ScalaUnusedSymbol
object FPIntFormat extends ChiselEnum {
  val Int8, Int16, Int32, Int64 = Value
}

//noinspection ScalaUnusedSymbol
object FPOperation extends ChiselEnum {
  val FMADD, FNMSUB, ADD, MUL, DIV, SQRT, SGNJ, MINMAX, CMP, CLASSIFY, F2F, F2I,
  I2F, CPKAB, CPKCD = Value
}

//noinspection ScalaUnusedSymbol
object FPRoundingMode extends ChiselEnum {
  val RNE, RTZ, RDN, RUP, RMM, DYN = Value
}


class FPRequest(val vectorWidth: Int, val opLen: Int, val tagWidth: Int) extends Bundle {
  val operands = Vec(3, Vec(vectorWidth, UInt(opLen.W)))
  val roundingMode = FPRoundingMode()
  val op = FPOperation()
  val opModifier = Bool()
  val srcFormat = FPFloatFormat()
  val dstFormat = FPFloatFormat()
  val intFormat = FPIntFormat()
  val tag = UInt(tagWidth.W)
}

//noinspection ScalaUnusedSymbol
class FPStatus extends Bundle {
  val NV = Bool() // Invalid
  val DZ = Bool() // Divide by zero
  val OF = Bool() // Overflow
  val UF = Bool() // Underflow
  val NX = Bool() // Inexact
}

class FPResponse(val vecWidth: Int, val opWidth: Int, val tagWidth: Int) extends Bundle {
  val result = Vec(vecWidth, UInt(opWidth.W))
  val tag = UInt(tagWidth.W)
  val status = new FPStatus()
}

class FPIO(val vecWidth: Int, val opWidth: Int, val tagWidth: Int) extends Bundle {
  val req = Flipped(Decoupled(new FPRequest(vecWidth, opWidth, tagWidth)))
  val resp = Decoupled(new FPResponse(vecWidth, opWidth, tagWidth))
  val flush = Input(Bool())
  val busy = Output(Bool())
}


////noinspection ScalaUnusedSymbol
//class FPIO_custom(val fLen_req: Int, val fLen_res: Int, val tagWidth: Int) extends Bundle {
//  val req = Flipped(Decoupled(new FPRequest(fLen_req, tagWidth)))
//  val resp = Decoupled(new FPResponse(fLen_res, tagWidth))
//  val flush = Input(Bool())
//  //val busy_m = Output(Bool())
//  val busy = Output(Bool())
//}

class FPUNew(val floattype: FPFloatFormat.Type,
             val lanes: Int,
             val stages: Int,
             val supportedOps: Seq[FPNewOpClass.FPNewOpClass],
             val tagWidth: Int = 1
            ) extends Module {
  val floatwidth = floattype match {
    case FPFloatFormat.Fp32 => 32
    case FPFloatFormat.Fp16Alt => 16
    case FPFloatFormat.Fp8 => 8
    case FPFloatFormat.Fp64 => 64
    case FPFloatFormat.Fp16 => 16
  }
  val fLen = floatwidth * lanes
  val io = IO(new FPIO(vecWidth = lanes, opWidth = floatwidth, tagWidth = tagWidth))

  val blackbox = Module(
    new FPNewBlackbox(
      floattype,
      floatwidth,
      lanes,
      stages,
      supportedOps,
      tagWidth = tagWidth,
    )
  )

  // clock & reset
  blackbox.io.clk_i := clock
  blackbox.io.rst_ni := ~reset.asBool

  // request
  blackbox.io.operands_i := Cat(io.req.bits.operands.map(a => Cat(a.reverse)).reverse)
  blackbox.io.rnd_mode_i := io.req.bits.roundingMode.asUInt
  blackbox.io.op_i := io.req.bits.op.asUInt
  blackbox.io.op_mod_i := io.req.bits.opModifier
  blackbox.io.src_fmt_i := io.req.bits.srcFormat.asUInt
  blackbox.io.dst_fmt_i := io.req.bits.dstFormat.asUInt
  blackbox.io.int_fmt_i := io.req.bits.intFormat.asUInt
  blackbox.io.vectorial_op_i := 1.B
  blackbox.io.tag_i := 0.B
  blackbox.io.in_valid_i := io.req.valid
  blackbox.io.tag_i := io.req.bits.tag
  io.req.ready := blackbox.io.in_ready_o

  // response
  val resp_split = (0 until lanes) map (i => blackbox.io.result_o((i + 1) * floatwidth - 1, i * floatwidth))
  io.resp.bits.result zip resp_split foreach {case (o1, o2) => o1 := o2}
  io.resp.bits.status := blackbox.io.status_o.asTypeOf(io.resp.bits.status)
  io.resp.valid := blackbox.io.out_valid_o
  io.resp.bits.tag := blackbox.io.tag_o
  blackbox.io.out_ready_i := io.resp.ready

  // flush & flush
  blackbox.io.flush_i := io.flush
  io.busy := blackbox.io.busy_o
}