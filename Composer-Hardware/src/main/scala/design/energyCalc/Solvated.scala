package design.energyCalc


import chisel3._
import chisel3.util._
import chisel3.experimental._
import composer._
import fpnewWrapper._
import org.chipsalliance.cde.config._


class Solvated() extends Module {
  val io = IO(new Bundle {
    val solvCutoff2 = Input(UInt(32.W))   //float number
    val solvationTerms = Input(Vec(8, UInt(32.W))) //Max 50
    val data = Input(Vec(116, SInt(32.W)))               //Max 116
    val res1Start = Input(UInt(32.W))
    val res2Start = Input(UInt(32.W))

    val in_solvE = Input(UInt(32.W))
    val out_solvE = Output(UInt(32.W))
    val start = Input(Bool())
    val done = Output(Bool())
  })
  def doubleToIEEE(in: Double): UInt = { fpnewWrapper.FPNewUtil.floatToUInt(in, FPFloatFormat.Fp32) }

  val done_skip = RegInit(false.B)
  val done_solv = RegInit(false.B)
  done_solv := Mux(io.start, false.B, done_solv)
  done_skip := Mux(io.start, false.B, done_skip)
  io.done := done_skip || done_solv


  val rijx = RegInit(doubleToIEEE(0.0))
  val rijy = RegInit(doubleToIEEE(0.0))
  val rijz = RegInit(doubleToIEEE(0.0))
  val index1 = io.res1Start + io.solvationTerms(0) * 4.U(32.W)
  val index2 = io.res2Start + io.solvationTerms(4) * 4.U(32.W)
  rijx := io.data(index1) - io.data(index2)
  rijy := io.data(index1 + 1.U(32.W)) - io.data(index2 + 1.U(32.W))
  rijz := io.data(index1 + 2.U(32.W)) - io.data(index2 + 2.U(32.W))



  // FPU calculations
  val constantChoice = Reg(0.U(32.W))
  val numFPU1 = 10
  val numFPU2 = 10
  val fpu1 = Seq.fill(numFPU1)(Module(new FPUNew(FPFloatFormat.Fp32, lanes = 1, stages = 1, supportedOps = Seq(FPNewOpClass.ADDMUL), tagWidth = 1)))
  val fpu2 = Seq.fill(numFPU2)(Module(new FPUNew(FPFloatFormat.Fp32, lanes = 1, stages = 1, supportedOps = Seq(FPNewOpClass.DIVSQRT), tagWidth = 1)))
  for (i <- 0 until numFPU1) {
    fpu1(i).io.req.valid := true.B
    fpu1(i).io.req.bits := DontCare
    fpu1(i).io.resp.ready := true.B
    fpu1(i).io.req.bits.opModifier := 0.U
    fpu1(i).io.req.bits.roundingMode := FPRoundingMode.RNE
  }
  for (i <- 0 until numFPU2) {
    fpu2(i).io.req.valid := true.B
    fpu2(i).io.req.bits := DontCare
    fpu2(i).io.resp.ready := true.B
    fpu2(i).io.req.bits.opModifier := 0.U
    fpu2(i).io.req.bits.roundingMode := FPRoundingMode.RNE
  }


  // rij2 = rijx * rijx + rijy * rijy + rijz * rijz
  val rij2 = RegInit(doubleToIEEE(0.0))
  val rijx2 = Wire(doubleToIEEE(0.0))
  val rijy2 = Wire(doubleToIEEE(0.0))
  val rijz2 = Wire(doubleToIEEE(0.0))
  val sum1 = Wire(doubleToIEEE(0.0))
  fpu1(0).io.req.bits.op := FPOperation.MUL
  fpu1(0).io.req.bits.operands(0)(0) := rijx
  fpu1(0).io.req.bits.operands(1)(0) := rijx
  fpu1(0).io.req.bits.operands(2)(0) := constantChoice
  when(fpu1(0).io.resp.fire) {
    rijx2 := fpu1(0).io.resp.bits.result(0)
  }
  fpu1(1).io.req.bits.op := FPOperation.MUL
  fpu1(1).io.req.bits.operands(0)(0) := rijy
  fpu1(1).io.req.bits.operands(1)(0) := rijy
  fpu1(1).io.req.bits.operands(2)(0) := constantChoice
  when(fpu1(1).io.resp.fire) {
    rijy2 := fpu1(1).io.resp.bits.result(0)
  }
  fpu1(2).io.req.bits.op := FPOperation.MUL
  fpu1(2).io.req.bits.operands(0)(0) := rijz
  fpu1(2).io.req.bits.operands(1)(0) := rijz
  fpu1(2).io.req.bits.operands(2)(0) := constantChoice
  when(fpu1(2).io.resp.fire) {
    rijz2 := fpu1(2).io.resp.bits.result(0)
  }
  fpu1(3).io.req.bits.op := FPOperation.ADD
  fpu1(3).io.req.bits.operands(2)(0) := rijx2
  fpu1(3).io.req.bits.operands(1)(0) := rijy2
  fpu1(3).io.req.bits.operands(0)(0) := constantChoice
  when(fpu1(3).io.resp.fire) {
    sum1 := fpu1(3).io.resp.bits.result(0)
  }
  fpu1(4).io.req.bits.op := FPOperation.ADD
  fpu1(4).io.req.bits.operands(2)(0) := sum1
  fpu1(4).io.req.bits.operands(1)(0) := rijz2
  fpu1(4).io.req.bits.operands(0)(0) := constantChoice
  when(fpu1(4).io.resp.fire) {
    rij2 := fpu1(4).io.resp.bits.result(0)
  }



  // if (rij2 >= solvCutoff2) -> done
  val doSolveEnergy = Wire(Bool())
  val fpuComp = Module(new FPUNew(FPFloatFormat.Fp32, lanes = 1, stages = 1, supportedOps = Seq(FPNewOpClass.NONCOMP), tagWidth = 1))
  fpuComp.io.req.valid := true.B
  fpuComp.io.req.bits := DontCare
  fpuComp.io.resp.ready := true.B
  fpuComp.io.req.bits.opModifier := 0.U
  fpuComp.io.req.bits.roundingMode := FPRoundingMode.RTZ  //(https://github.com/openhwgroup/cvfpu/tree/develop/docs)
  fpuComp.io.req.bits.op := FPOperation.CMP    //Is this right for CONV ?
  fpuComp.io.req.bits.operands(0)(0) := rij2
  fpuComp.io.req.bits.operands(1)(0) := io.solvCutoff2
  fpuComp.io.req.bits.operands(2)(0) := DontCare
  when(fpuComp.io.resp.fire) {
    doSolveEnergy := fpuComp.io.resp.bits.result(0)(0)
  }

  when(!doSolveEnergy) {
    done_skip := true.B
  }.otherwise {

    val lambda_i = Wire(doubleToIEEE(0.0))
    val vdWr_i = Wire(doubleToIEEE(0.0))
    val alpha_i = Wire(doubleToIEEE(0.0))
    val lambda_j = Wire(doubleToIEEE(0.0))
    val vdWr_j = Wire(doubleToIEEE(0.0))
    val alpha_j = Wire(doubleToIEEE(0.0))
    lambda_i := io.solvationTerms(1)
    vdWr_i := io.solvationTerms(2)
    alpha_i := io.solvationTerms(3)
    lambda_j := io.solvationTerms(5)
    vdWr_j := io.solvationTerms(6)
    alpha_j := io.solvationTerms(7)

    // rij = sqrt(rij2)
    val rij = Wire(doubleToIEEE(0.0))
    fpu2(0).io.req.bits.op := FPOperation.DIV
    fpu2(0).io.req.bits.operands(0)(0) := rij2
    fpu2(0).io.req.bits.operands(1)(0) := constantChoice
    fpu2(0).io.req.bits.operands(2)(0) := constantChoice
    when(fpu2(0).io.resp.fire) {
      rij := fpu2(0).io.resp.bits.result(0)
    }

    // Xij = (rij - vdWr_i) / lambda_i;
    // Xji = (rij - vdWr_j) / lambda_j;
    val Xij_diff = Wire(doubleToIEEE(0.0))
    fpu1(5).io.req.bits.op := FPOperation.ADD
    fpu1(5).io.req.bits.opModifier := 1.U  //Subtract
    fpu1(5).io.req.bits.operands(2)(0) := vdWr_i
    fpu1(5).io.req.bits.operands(1)(0) := rij
    fpu1(5).io.req.bits.operands(0)(0) := constantChoice
    when(fpu1(5).io.resp.fire) {
      Xij_diff := fpu1(5).io.resp.bits.result(0)
    }
    val Xji_diff = Wire(doubleToIEEE(0.0))
    fpu1(6).io.req.bits.op := FPOperation.ADD
    fpu1(6).io.req.bits.opModifier := 1.U  //Subtract
    fpu1(6).io.req.bits.operands(2)(0) := vdWr_j
    fpu1(6).io.req.bits.operands(1)(0) := rij
    fpu1(6).io.req.bits.operands(0)(0) := constantChoice
    when(fpu1(6).io.resp.fire) {
      Xji_diff := fpu1(6).io.resp.bits.result(0)
    }
    val Xij = Wire(doubleToIEEE(0.0))
    fpu2(1).io.req.bits.op := FPOperation.DIV
    fpu2(1).io.req.bits.operands(0)(0) := Xij_diff
    fpu2(1).io.req.bits.operands(1)(0) := lambda_i
    fpu2(1).io.req.bits.operands(2)(0) := constantChoice
    when(fpu2(1).io.resp.fire) {
      Xij := fpu2(1).io.resp.bits.result(0)
    }
    val Xji = Wire(doubleToIEEE(0.0))
    fpu2(2).io.req.bits.op := FPOperation.DIV
    fpu2(2).io.req.bits.operands(0)(0) := Xji_diff
    fpu2(2).io.req.bits.operands(1)(0) := lambda_j
    fpu2(2).io.req.bits.operands(2)(0) := constantChoice
    when(fpu2(2).io.resp.fire) {
      Xji := fpu2(2).io.resp.bits.result(0)
    }

    //  solvEnergy -= (alpha_i * Math.exp(-Xij * Xij) + alpha_j * Math.exp(-Xji * Xji)) / rij2
    // Math.exp(-(Xij) * Xij) approximation = {1-1/2Xij} if 0<x<2, else 0
    val Xij2 = Wire(doubleToIEEE(0.0))

    val all_sums = Wire(Vec(8, doubleToIEEE(0.0)))
    fpu2(3).io.req.bits.op := FPOperation.DIV
    fpu2(3).io.req.bits.operands(0)(0) := rij2
    val partialSum = Wire(doubleToIEEE(0.0))
    fpu1(7).io.req.bits.op := FPOperation.ADD
    fpu1(7).io.req.bits.operands(0)(0) := constantChoice
    fpu1(7).io.req.bits.operands(1)(0) := partialSum
    fpu1(7).io.req.bits.operands(2)(0) := io.in_solvE
    when(fpu1(7).io.resp.fire) {
      io.out_solvE := fpu1(7).io.resp.bits.result(0)
      done_solv := true.B
    }
  }
}
