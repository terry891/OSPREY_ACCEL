package design.energyCalc

import chisel3._
import chisel3.util._
import chisel3.experimental._
import composer._
import fpnewWrapper._
import org.chipsalliance.cde.config._
import composer.MemoryStreams._


class NonBonded(data: CScratchpadAccessBundle) extends Module {
  val io = IO(new Bundle {
    val useHydrogenEs = Input(Bool())
    val useHydrogenVdw = Input(Bool())
    val distDepDielect = Input(Bool())
    val coulombFactor = Input(UInt(32.W))   //input
    val res1Start = Input(UInt(32.W))
    val res2Start = Input(UInt(32.W))

    val nonBondedTerms = Input(Vec(5, UInt(32.W))) //Max 50
    val in_vdwE = Input(UInt(32.W))
    val in_esE = Input(UInt(32.W))
    val out_vdwE = Output(UInt(32.W))
    val out_esE = Output(UInt(32.W))
    val start = Input(Bool())
    val done = Output(Bool())
  })


  // Configure Done
  val done_cal = RegInit(Bool())
  val done_skippped = RegInit(Bool())
  done_cal := Mux(io.start, false.B, done_cal)
  done_skippped := Mux(io.start, false.B, done_skippped)
  io.done := done_skippped || done_cal

  val wait_for_data = RegInit(true.B)
  val counter = RegInit(0.U(32.W))
  val counter_1H = Wire(Vec(32, Bool()))
  wait_for_data := Mux(io.start, true.B, wait_for_data)
  counter := Mux(io.start || wait_for_data, 0.U(32.W), counter + 1.U)
  counter_1H.zipWithIndex.foreach { case (x, i) => x := counter === i.U(32.W) }


  // First Loop - Do numbernonBonded iterations
  when ( (io.nonBondedTerms(2) === 1.U(32.W)) && (!io.useHydrogenEs && !io.useHydrogenVdw) ) {  //(useHydrogenNeither && isHydrogen)
    done_skippped := true.B
    done_cal := false.B
  }.otherwise {
    done_skippped := false.B

    val accessState = RegInit(0.U(2.W))
    val data_index1 = VecInit(Seq.fill(4)(0.U(32.W)))
    val data_index2 = VecInit(Seq.fill(4)(0.U(32.W)))
    accessState := Mux(io.start, 0.U, accessState)


    // read table parts
    val Aij = Wire(0.U(32.W))
    val Bij = Wire(0.U(32.W))
    val chargei = Wire(0.U(32.W))
    val chargej = Wire(0.U(32.W))
    val index1 = io.res1Start + io.nonBondedTerms(0) * 4.U(32.W) //included atomix and atomix4
    val index2 = io.res2Start + io.nonBondedTerms(1) * 4.U(32.W) //included atomjx and atomjx4
    Aij := io.nonBondedTerms(3)
    Bij := io.nonBondedTerms(4)
    chargei := Mux(counter === 1.U, data_index1(3), 0.U)
    chargej := Mux(counter === 1.U, data_index2(3), 0.U)



    when(accessState === 0.U) {
      //first access, index1
      data.readReq.valid := true.B
      data.readReq.bits := index1
      when (data.readRes.valid) {
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
      when (data.readRes.valid) {
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


    /*
      cycle 0: get data data[res1Start + atomi*4] and data[res2Start + atomj*4]
      cycle 1: rijx, rijy, rijz calculations -> rijx = data[res1Start + atomix4] - data[res2Start + atomjx4]
      cycle 2: rijx2, rijy2, rijz2 calculations -> rijx2 = rijx * rijx
      cycle 3-4: rij2 = rijx2 + rijy2 + rijz2 && chargeij = chargei * chargej
      cycle 5: rij = sqrt(rij2)               && rij4 = rij2 * rij2            && chargeij * coulombFactor
      cycle 6: rij6 = rij4 * rij2             &&
      cycle 7: rij12 = rij6 * rij6            &&  Bij_rij6 = Bij / rij6
      cycle 8: partialSumES = temchargeij / rij  && Aij_rij12 = Aij / rij12
      cycle 9: partialSumVDW = Bij_rij6 - Aij_rij12
    */

    val rij = RegInit(0.U(32.W))
    val rijx = RegInit(0.U(32.W))
    val rijy = RegInit(0.U(32.W))
    val rijz = RegInit(0.U(32.W))
    val rijx2 = RegInit(0.U(32.W))
    val rijy2 = RegInit(0.U(32.W))
    val rijz2 = RegInit(0.U(32.W))
    val rijx_y = RegInit(0.U(32.W))
    val rij2 = RegInit(0.U(32.W))
    val rij4 = RegInit(0.U(32.W))
    val rij6 = RegInit(0.U(32.W))
    val rij12 = RegInit(0.U(32.W))
    val chargeij = RegInit(0.U(32.W))
    val chargeijC = RegInit(0.U(32.W))
    val partialSumES = RegInit(0.U(32.W))
    val Aij_rij12 = RegInit(0.U(32.W))
    val Bij_rij6 = RegInit(0.U(32.W))
    val partialSumVDW = RegInit(0.U(32.W))


    // FPU ADD calculations
    val fpuAdd = Module(new FPUNew(FPFloatFormat.Fp32, lanes = 3, stages = 1, supportedOps = Seq(FPNewOpClass.ADDMUL), tagWidth = 1))
    fpuAdd.io.req.valid := true.B
    fpuAdd.io.req.bits := DontCare
    fpuAdd.io.resp.ready := true.B
    fpuAdd.io.req.bits.roundingMode := FPRoundingMode.RNE

    val fpuAM_oper = Seq(0.U, 1.U                  , 0.U,   0.U,    0.U, 0.U, 0.U, 0.U, 0.U,       1.U, 0.U)
    val fpuAM_in11 = Seq(0.U, data_index1(0.U)      , 0.U, rijx2, rijx_y, 0.U, 0.U, 0.U, 0.U, Aij_rij12, io.in_esE)
    val fpuAM_in12 = Seq(0.U, data_index2(0.U)      , 0.U, rijy2,  rijz2, 0.U, 0.U, 0.U, 0.U,  Bij_rij6, partialSumES)
    val fpuAM_in21 = Seq(0.U, data_index1(1.U), 0.U,   0.U,    0.U, 0.U, 0.U, 0.U, 0.U,       0.U, io.in_vdwE)
    val fpuAM_in22 = Seq(0.U, data_index2(1.U), 0.U,   0.U,    0.U, 0.U, 0.U, 0.U, 0.U,       0.U, partialSumVDW)
    val fpuAM_in31 = Seq(0.U, data_index1(2.U), 0.U,   0.U,    0.U, 0.U, 0.U, 0.U, 0.U,       0.U, 0.U)
    val fpuAM_in32 = Seq(0.U, data_index2(2.U), 0.U,   0.U,    0.U, 0.U, 0.U, 0.U, 0.U,       0.U, 0.U)

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
      rijx_y := Mux(counter_1H(2), fpuAdd.io.resp.bits.result(0), rijx_y)
      rij2 := Mux(counter_1H(4), fpuAdd.io.resp.bits.result(0), rij2)
      partialSumVDW := Mux(counter_1H(9), fpuAdd.io.resp.bits.result(0), partialSumVDW)
      io.out_esE := Mux(counter_1H(10) && (!(io.nonBondedTerms(2) === 1.U(32.W)) || io.useHydrogenEs), fpuAdd.io.resp.bits.result(0), io.in_esE)
      io.out_vdwE := Mux(counter_1H(10) && (!(io.nonBondedTerms(2) === 1.U(32.W)) || io.useHydrogenVdw), fpuAdd.io.resp.bits.result(1), io.in_vdwE)
      done_cal := Mux(counter_1H(10), true.B, done_cal)
    }


    // FPU Multiplication
    val fpuMul = Module(new FPUNew(FPFloatFormat.Fp32, lanes = 3, stages = 1, supportedOps = Seq(FPNewOpClass.ADDMUL), tagWidth = 1))
    fpuMul.io.req.valid := true.B
    fpuMul.io.req.bits := DontCare
    fpuMul.io.resp.ready := true.B
    fpuMul.io.req.bits.roundingMode := FPRoundingMode.RNE
    fpuMul.io.req.bits.opModifier := 0.U

    val fpuM_in10 = Seq(0.U, 0.U, rijx, chargei, 0.U,     rij2        , rij4, rij6, 0.U, 0.U, 0.U)
    val fpuM_in11 = Seq(0.U, 0.U, rijx, chargej, 0.U,     rij2        , rij2, rij6, 0.U, 0.U, 0.U)
    val fpuM_in20 = Seq(0.U, 0.U, rijy,     0.U, 0.U, chargeij        ,  0.U,  0.U, 0.U, 0.U, 0.U)
    val fpuM_in21 = Seq(0.U, 0.U, rijy,     0.U, 0.U, io.coulombFactor,  0.U,  0.U, 0.U, 0.U, 0.U)
    val fpuM_in30 = Seq(0.U, 0.U, rijz,     0.U, 0.U, 0.U             ,  0.U,  0.U, 0.U, 0.U, 0.U)
    val fpuM_in31 = Seq(0.U, 0.U, rijz,     0.U, 0.U, 0.U             ,  0.U,  0.U, 0.U, 0.U, 0.U)

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
      rijx2     := Mux(counter_1H(2), fpuMul.io.resp.bits.result(0), rijx2)
      rijy2     := Mux(counter_1H(2), fpuMul.io.resp.bits.result(1), rijy2)
      rijz2     := Mux(counter_1H(2), fpuMul.io.resp.bits.result(2), rijz2)
      chargeij  := Mux(counter_1H(3), fpuMul.io.resp.bits.result(0), chargeij)
      rij4      := Mux(counter_1H(5), fpuMul.io.resp.bits.result(0), rij4)
      chargeijC := Mux(counter_1H(5), fpuMul.io.resp.bits.result(1), chargeijC)
      rij6      := Mux(counter_1H(6), fpuMul.io.resp.bits.result(0), rij6)
      rij12     := Mux(counter_1H(7), fpuMul.io.resp.bits.result(0), rij12)
    }

    // FPU Division
    val fpuDiv = Module(new FPUNew(FPFloatFormat.Fp32, lanes = 1, stages = 1, supportedOps = Seq(FPNewOpClass.DIVSQRT), tagWidth = 1))
    fpuDiv.io.req.valid := true.B
    fpuDiv.io.req.bits := DontCare
    fpuDiv.io.resp.ready := true.B
    fpuDiv.io.req.bits.opModifier := 0.U
    fpuDiv.io.req.bits.roundingMode := FPRoundingMode.RNE

    val rijORrij2 = Mux(io.distDepDielect, rij2, rij)
    val fpuD_in0 = Seq(0.U, 0.U, 0.U, 0.U, 0.U, 0.U, chargeijC, Bij ,   Aij, 0.U, 0.U)
    val fpuD_in1 = Seq(0.U, 0.U, 0.U, 0.U, 0.U, 0.U, rijORrij2, rij6, rij12, 0.U, 0.U)
    fpuDiv.io.req.bits.op := FPOperation.DIV
    fpuDiv.io.req.bits.operands(0)(0) := Mux1H(counter_1H, fpuD_in0)
    fpuDiv.io.req.bits.operands(1)(0) := Mux1H(counter_1H, fpuD_in1)
    fpuDiv.io.req.bits.operands(2)(0) := DontCare
    when(fpuDiv.io.resp.fire) {
      partialSumES := Mux(counter_1H(6), fpuMul.io.resp.bits.result(0), partialSumES)
      Bij_rij6     := Mux(counter_1H(7), fpuMul.io.resp.bits.result(0), Bij_rij6)
      Aij_rij12    := Mux(counter_1H(8), fpuMul.io.resp.bits.result(0), Aij_rij12)
    }

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
  }
}