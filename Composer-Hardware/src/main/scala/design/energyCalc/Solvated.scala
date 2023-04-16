package design.energyCalc


import chisel3._
import chisel3.util._
import chisel3.experimental._
import composer.MemoryStreams.CScratchpadAccessBundle
import composer._
import fpnewWrapper._


class Solvated(data: CScratchpadAccessBundle) extends Module {
  val io = IO(new Bundle {
    val solvCutoff2 = Input(UInt(32.W)) //float number
    val solvationTerms = Input(Vec(8, UInt(32.W))) //Max 50
    val res1Start = Input(UInt(32.W))
    val res2Start = Input(UInt(32.W))

    val in_solvE = Input(UInt(32.W))
    val out_solvE = Output(UInt(32.W))
    val start = Input(Bool())
    val done = Output(Bool())
  })

  def doubleToIEEE(in: Double): UInt = {
    fpnewWrapper.FPNewUtil.floatToUInt(in, FPFloatFormat.Fp32)
  }


  // Configure Done
  val done_cal = RegInit(Bool())
  done_cal := Mux(io.start, false.B, done_cal)
  io.done := done_cal

  val wait_for_data = RegInit(true.B)
  val counter = RegInit(0.U(32.W))
  val counter_1H = Wire(Vec(32, Bool()))
  wait_for_data := Mux(io.start, true.B, wait_for_data)
  counter := Mux(io.start, 0.U(32.W), counter + 1.U)
  counter_1H.zipWithIndex.foreach { case (x, i) => x := counter === i.U(32.W) }


  val index1 = io.res1Start + io.solvationTerms(0) * 4.U(32.W) //included atomix and atomix4
  val index2 = io.res2Start + io.solvationTerms(1) * 4.U(32.W) //included atomjx and atomjx4

  val rijx = RegInit(0.U(32.W))
  val rijy = RegInit(0.U(32.W))
  val rijz = RegInit(0.U(32.W))
  val rijx2 = RegInit(0.U(32.W))
  val rijy2 = RegInit(0.U(32.W))
  val rijz2 = RegInit(0.U(32.W))
  val rijx_y = RegInit(0.U(32.W))
  val rij2 = RegInit(0.U(32.W))
  val rij = RegInit(0.U(32.W))
  val rij_vdWri = RegInit(0.U(32.W))
  val rij_vdWrj = RegInit(0.U(32.W))
  val Xij = RegInit(0.U(32.W))
  val Xji = RegInit(0.U(32.W))
  val Xij_2 = RegInit(0.U(32.W))
  val Xji_2 = RegInit(0.U(32.W))
  val Xij_21 = RegInit(0.U(32.W))
  val Xji_21 = RegInit(0.U(32.W))
  val aXij_2 = RegInit(0.U(32.W))
  val aXji_2 = RegInit(0.U(32.W))
  val aXijXji = RegInit(0.U(32.W))
  val partialSumSOLV = RegInit(0.U(32.W))
  val doSolveEnergy = Wire(Bool())

  val lambda_i = Wire(0.U(32.W))
  val vdWr_i = Wire(0.U(32.W))
  val alpha_i = Wire(0.U(32.W))
  val lambda_j = Wire(0.U(32.W))
  val vdWr_j = Wire(0.U(32.W))
  val alpha_j = Wire(0.U(32.W))
  lambda_i := io.solvationTerms(1)
  vdWr_i := io.solvationTerms(2)
  alpha_i := io.solvationTerms(3)
  lambda_j := io.solvationTerms(5)
  vdWr_j := io.solvationTerms(6)
  alpha_j := io.solvationTerms(7)

  val accessState = RegInit(0.U(2.W))
  val data_index1 = VecInit(Seq.fill(4)(0.U(32.W)))
  val data_index2 = VecInit(Seq.fill(4)(0.U(32.W)))
  accessState := Mux(io.start, 0.U, accessState)


  when(accessState === 0.U) {
    //first access, index1
    data.readReq.valid := true.B
    data.readReq.bits := index1
    when(data.readRes.valid) {
      val resp1 = data.readRes.bits
      data_index1(0) := resp1(31, 0)
      data_index1(1) := resp1(63, 32)
      data_index1(2) := resp1(95, 64)
      data_index1(3) := resp1(127, 96)
      accessState := 1.U
    }
  }.elsewhen(accessState === 1.U) {
    //second access, index2
    data.readReq.valid := true.B
    data.readReq.bits := index2
    when(data.readRes.valid) {
      val resp2 = data.readRes.bits
      data_index2(0) := resp2(31, 0)
      data_index2(1) := resp2(63, 32)
      data_index2(2) := resp2(95, 64)
      data_index2(3) := resp2(127, 96)
      accessState := 2.U
    }
  }.elsewhen(accessState === 2.U) {
    data.readReq.valid := false.B
    wait_for_data := false.B
  }


  // FPU ADD calculations
  val fpuAdd = Module(new FPUNew(FPFloatFormat.Fp32, lanes = 3, stages = 1, supportedOps = Seq(FPNewOpClass.ADDMUL), tagWidth = 1))
  fpuAdd.io.req.valid := true.B
  fpuAdd.io.req.bits := DontCare
  fpuAdd.io.resp.ready := true.B
  fpuAdd.io.req.bits.roundingMode := FPRoundingMode.RNE

  val fpuAM_oper = Seq(0.U, 1.U             , 0.U,   0.U,    0.U, 0.U,    1.U, 0.U, 0.U,                   1.U, 0.U, 1.U, 0.U, 1.U)
  val fpuAM_in11 = Seq(0.U, data_index1(0.U), 0.U, rijx2, rijx_y, 0.U,    rij, 0.U, 0.U, doubleToIEEE(1.0), 0.U, aXij_2, 0.U, io.in_solvE)
  val fpuAM_in12 = Seq(0.U, data_index2(0.U), 0.U, rijy2,  rijz2, 0.U, vdWr_i, 0.U, 0.U, Xij_2, 0.U, aXji_2, 0.U, partialSumSOLV)
  val fpuAM_in21 = Seq(0.U, data_index1(1.U), 0.U,   0.U,    0.U, 0.U,    rij, 0.U, 0.U, doubleToIEEE(1.0), 0.U, 0.U, 0.U, 0.U)
  val fpuAM_in22 = Seq(0.U, data_index2(1.U), 0.U,   0.U,    0.U, 0.U, vdWr_j, 0.U, 0.U, Xji_2, 0.U, 0.U, 0.U, 0.U)
  val fpuAM_in31 = Seq(0.U, data_index1(2.U), 0.U,   0.U,    0.U, 0.U,    0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U)
  val fpuAM_in32 = Seq(0.U, data_index2(2.U), 0.U,   0.U,    0.U, 0.U,    0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U)

  fpuAdd.io.req.bits.op := FPOperation.ADD
  fpuAdd.io.req.bits.opModifier := Mux1H(counter_1H, fpuAM_oper) //0 is add, 1 is sub
  fpuAdd.io.req.bits.operands(0)(0) := DontCare
  fpuAdd.io.req.bits.operands(1)(0) := Mux1H(counter_1H, fpuAM_in11)
  fpuAdd.io.req.bits.operands(2)(0) := Mux1H(counter_1H, fpuAM_in12)
  fpuAdd.io.req.bits.operands(0)(1) := DontCare
  fpuAdd.io.req.bits.operands(1)(1) := Mux1H(counter_1H, fpuAM_in21)
  fpuAdd.io.req.bits.operands(2)(1) := Mux1H(counter_1H, fpuAM_in22)
  fpuAdd.io.req.bits.operands(0)(2) := DontCare
  fpuAdd.io.req.bits.operands(1)(2) := Mux1H(counter_1H, fpuAM_in31)
  fpuAdd.io.req.bits.operands(2)(2) := Mux1H(counter_1H, fpuAM_in32)
  when(fpuAdd.io.resp.fire) {
    rijx := Mux(counter_1H(1), fpuAdd.io.resp.bits.result(0), rijx)
    rijy := Mux(counter_1H(1), fpuAdd.io.resp.bits.result(1), rijy)
    rijz := Mux(counter_1H(1), fpuAdd.io.resp.bits.result(2), rijz)
    rijx_y := Mux(counter_1H(3), fpuAdd.io.resp.bits.result(0), rijx_y)
    rij2 := Mux(counter_1H(4), fpuAdd.io.resp.bits.result(0), rij2)
    rij_vdWri := Mux(counter_1H(6), fpuAdd.io.resp.bits.result(0), rij_vdWri)
    rij_vdWrj := Mux(counter_1H(6), fpuAdd.io.resp.bits.result(1), rij_vdWrj)
    Xij_21 := Mux(counter_1H(9), fpuAdd.io.resp.bits.result(0), Xij_21)
    Xji_21 := Mux(counter_1H(9), fpuAdd.io.resp.bits.result(1), Xji_21)
    aXijXji := Mux(counter_1H(11), fpuAdd.io.resp.bits.result(0), aXijXji)
    io.out_solvE := Mux(counter_1H(13) && doSolveEnergy, fpuAdd.io.resp.bits.result(0), io.in_solvE)
    done_cal := Mux(counter_1H(13), true.B, done_cal)
  }

  // FPU Multiplication
  val fpuMul = Module(new FPUNew(FPFloatFormat.Fp32, lanes = 3, stages = 1, supportedOps = Seq(FPNewOpClass.ADDMUL), tagWidth = 1))
  fpuMul.io.req.valid := true.B
  fpuMul.io.req.bits := DontCare
  fpuMul.io.resp.ready := true.B
  fpuMul.io.req.bits.roundingMode := FPRoundingMode.RNE
  fpuMul.io.req.bits.opModifier := 0.U

  val fpuM_in10 = Seq(0.U, 0.U, rijx, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, Xij_21, 0.U, 0.U, 0.U)
  val fpuM_in11 = Seq(0.U, 0.U, rijx, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, alpha_i, 0.U, 0.U, 0.U)
  val fpuM_in20 = Seq(0.U, 0.U, rijy, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, Xji_21, 0.U, 0.U, 0.U)
  val fpuM_in21 = Seq(0.U, 0.U, rijy, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, alpha_j, 0.U, 0.U, 0.U)
  val fpuM_in30 = Seq(0.U, 0.U, rijz, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U)
  val fpuM_in31 = Seq(0.U, 0.U, rijz, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U)

  fpuMul.io.req.bits.op := FPOperation.MUL
  fpuMul.io.req.bits.operands(0)(0) := Mux1H(counter_1H, fpuM_in10)
  fpuMul.io.req.bits.operands(1)(0) := Mux1H(counter_1H, fpuM_in11)
  fpuMul.io.req.bits.operands(2)(0) := DontCare
  fpuMul.io.req.bits.operands(0)(1) := Mux1H(counter_1H, fpuM_in20)
  fpuMul.io.req.bits.operands(1)(1) := Mux1H(counter_1H, fpuM_in21)
  fpuMul.io.req.bits.operands(2)(1) := DontCare
  fpuMul.io.req.bits.operands(0)(2) := Mux1H(counter_1H, fpuM_in30)
  fpuMul.io.req.bits.operands(1)(2) := Mux1H(counter_1H, fpuM_in31)
  fpuMul.io.req.bits.operands(2)(2) := DontCare
  when(fpuMul.io.resp.fire) {
    rijx2 := Mux(counter_1H(2), fpuMul.io.resp.bits.result(0), rijx2)
    rijy2 := Mux(counter_1H(2), fpuMul.io.resp.bits.result(1), rijy2)
    rijz2 := Mux(counter_1H(2), fpuMul.io.resp.bits.result(2), rijz2)
    aXij_2 := Mux(counter_1H(10), fpuMul.io.resp.bits.result(0), aXij_2)
    aXji_2 := Mux(counter_1H(10), fpuMul.io.resp.bits.result(1), aXji_2)
  }

  // FPU Division
  val fpuDiv = Module(new FPUNew(FPFloatFormat.Fp32, lanes = 2, stages = 1, supportedOps = Seq(FPNewOpClass.DIVSQRT), tagWidth = 1))
  fpuDiv.io.req.valid := true.B
  fpuDiv.io.req.bits := DontCare
  fpuDiv.io.resp.ready := true.B
  fpuDiv.io.req.bits.opModifier := 0.U
  fpuDiv.io.req.bits.roundingMode := FPRoundingMode.RNE

  //Math.exp(-Xij *Xij) approximation with 1-x/2 for x < 2, 0 otherwise
  val fpuD_in10 = Seq(0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, rij_vdWri, Xij                  , 0.U, 0.U, 0.U, aXijXji, 0.U)
  val fpuD_in11 = Seq(0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, lambda_i, doubleToIEEE(2.0), 0.U, 0.U, 0.U, rij2, 0.U)
  val fpuD_in20 = Seq(0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, rij_vdWrj, Xji                  , 0.U, 0.U, 0.U, 0.U, 0.U)
  val fpuD_in21 = Seq(0.U, 0.U, 0.U, 0.U, 0.U, 0.U, 0.U, lambda_j, doubleToIEEE(2.0), 0.U, 0.U, 0.U, 0.U, 0.U)
  fpuDiv.io.req.bits.op := FPOperation.DIV
  fpuDiv.io.req.bits.operands(0)(0) := Mux1H(counter_1H, fpuD_in10)
  fpuDiv.io.req.bits.operands(1)(0) := Mux1H(counter_1H, fpuD_in11)
  fpuDiv.io.req.bits.operands(2)(0) := DontCare
  fpuDiv.io.req.bits.operands(0)(1) := Mux1H(counter_1H, fpuD_in20)
  fpuDiv.io.req.bits.operands(1)(1) := Mux1H(counter_1H, fpuD_in21)
  fpuDiv.io.req.bits.operands(2)(1) := DontCare
  when(fpuDiv.io.resp.fire) {
    Xij := Mux(counter_1H(7), fpuMul.io.resp.bits.result(0), Xij)
    Xji := Mux(counter_1H(7), fpuMul.io.resp.bits.result(1), Xji)
    Xij_2 := Mux(counter_1H(8), fpuDiv.io.resp.bits.result(0), Xij_2)
    Xji_2 := Mux(counter_1H(8), fpuDiv.io.resp.bits.result(1), Xji_2)
    partialSumSOLV := Mux(counter_1H(12), fpuDiv.io.resp.bits.result(0), partialSumSOLV)
  }

  // FPU Square Root
  val fpuSqrt = Module(new FPUNew(FPFloatFormat.Fp32, lanes = 1, stages = 1, supportedOps = Seq(FPNewOpClass.DIVSQRT), tagWidth = 1))
  fpuSqrt.io.req.valid := true.B
  fpuSqrt.io.req.bits := DontCare
  fpuSqrt.io.resp.ready := true.B
  fpuSqrt.io.req.bits.opModifier := 0.U
  fpuSqrt.io.req.bits.roundingMode := FPRoundingMode.RNE
  fpuSqrt.io.req.bits.op := FPOperation.SQRT
  fpuSqrt.io.req.bits.operands(0)(0) := rij2
  fpuSqrt.io.req.bits.operands(1)(0) := DontCare
  fpuSqrt.io.req.bits.operands(2)(0) := DontCare
  when(fpuSqrt.io.resp.fire) {
    rij := fpuSqrt.io.resp.bits.result(0)
  }

  // if (rij2 >= solvCutoff2) -> done
  val fpuComp = Module(new FPUNew(FPFloatFormat.Fp32, lanes = 1, stages = 1, supportedOps = Seq(FPNewOpClass.NONCOMP), tagWidth = 1))
  fpuComp.io.req.valid := true.B
  fpuComp.io.req.bits := DontCare
  fpuComp.io.resp.ready := true.B
  fpuComp.io.req.bits.opModifier := 0.U
  fpuComp.io.req.bits.roundingMode := FPRoundingMode.RTZ //(https://github.com/openhwgroup/cvfpu/tree/develop/docs)
  fpuComp.io.req.bits.op := FPOperation.CMP
  fpuComp.io.req.bits.operands(0)(0) := rij2
  fpuComp.io.req.bits.operands(1)(0) := io.solvCutoff2
  fpuComp.io.req.bits.operands(2)(0) := DontCare
  when(fpuComp.io.resp.fire) {
    doSolveEnergy := fpuComp.io.resp.bits.result(0)(0)
  }
}
