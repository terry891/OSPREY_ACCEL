package design.energyCalc

import chisel3._
import chisel3.util._
import chisel3.experimental._
import composer._
import fpnewWrapper._
import chipsalliance.rocketchip.config.{Config, Parameters}


class HalfNonBonded() extends Module {
  val io = IO(new Bundle {
    val useHydrogenEs = Input(Bool())
    val useHydrogenVdw = Input(Bool())
    val distDepDielect = Input(Bool())
    val coulombFactor = Input(UInt(32.W))   //input
    val halfNonBondedTerms = Input(Vec(5, UInt(32.W)))  //Max 50
    val data = Input(Vec(116, SInt(32.W)))               //Max 116
    val res1Start = Input(UInt(32.W))
    val res2Start = Input(UInt(32.W))

    val in_vdwE = Input(UInt(32.W))
    val in_esE = Input(UInt(32.W))
    val out_vdwE = Output(UInt(32.W))
    val out_esE = Output(UInt(32.W))
    val done = Output(Bool())
  })

  def doubleToIEEE(in: Double): UInt = {
    fpnewWrapper.FPNewUtil.floatToUInt(in, FPFloatFormat.Fp64)
  }


  // Configure Done
  val done_esE = Wire(Bool())
  val done_vdwE = Wire(Bool())
  val done_skippped = Wire(Bool())
  io.done := done_skippped || (done_esE && done_vdwE)


  //  val useHydrogenNeither = RegInit(false.B)
  //  val isHydrogen = RegInit(false.B)
  // useHydrogenNeither := !io.useHydrogenEs && !io.useHydrogenVdw
  //  isHydrogen := io.halfNonBondedTerms(2) === 1.U(32.W)

  // First Loop - Do numberHalfNonBonded iterations
  when ( (io.halfNonBondedTerms(2) === 1.U(32.W)) && (!io.useHydrogenEs && !io.useHydrogenVdw) ) {
    // if (useHydrogenNeither && isHydrogen) {continue; }
    done_skippped := true.B
    done_esE := false.B
    done_vdwE := false.B
  }.otherwise {
    done_skippped := false.B

    // Preparation for first loop
    val Aij = RegInit(doubleToIEEE(0.0))
    val Bij = RegInit(doubleToIEEE(0.0))
    val chargei = RegInit(doubleToIEEE(0.0))
    val chargej = RegInit(doubleToIEEE(0.0))
    val rij = RegInit(doubleToIEEE(0.0))
    val rijx = RegInit(doubleToIEEE(0.0))
    val rijy = RegInit(doubleToIEEE(0.0))
    val rijz = RegInit(doubleToIEEE(0.0))
    val isHeavy = RegInit(false.B)

    isHeavy := !(io.halfNonBondedTerms(2) === 1.U(32.W))  // !isHydrogen

    // read table parts
    val index1 = io.res1Start + io.halfNonBondedTerms(0) * 4.U(32.W) //included atomix and atomix4
    val index2 = io.res2Start + io.halfNonBondedTerms(1) * 4.U(32.W) //included atomjx and atomjx4
    Aij := io.halfNonBondedTerms(3)
    Bij := io.halfNonBondedTerms(4)

    // read coords
    rijx := io.data(index1) - io.data(index2)
    rijy := io.data(index1 + 1.U) - io.data(index2 + 1.U)
    rijz := io.data(index1 + 2.U) - io.data(index2 + 2.U)
    chargei := io.data(index1 + 3.U)
    chargej := io.data(index2 + 3.U)


    // FPU calculations
    val constantChoice = Reg(0.U(32.W))
    val numFPU1 = 13
    val numFPU2 = 5
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

    // rij2 := rijx * rijx + rijy * rijy + rijz * rijz
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


    when(isHeavy || io.useHydrogenEs) {
      // rij = Math.sqrt(rij2);
      fpu2(0).io.req.bits.operands(0)(0) := rij2
      fpu2(0).io.req.bits.op := FPOperation.SQRT
      fpu2(0).io.req.bits.operands(1)(0) := 0.U   //No reg needed?
      fpu2(0).io.req.bits.operands(2)(0) := 0.U
      when(fpu2(0).io.resp.fire) {
        rij := fpu2(0).io.resp.bits.result(0)
      }

      // tmpCoulombFact /= rij
      val tmpCoulombFact = Wire(doubleToIEEE(0.0))
      when(io.distDepDielect) {
        fpu2(1).io.req.bits.operands(0)(0) := io.coulombFactor
        fpu2(1).io.req.bits.op := FPOperation.DIV
        fpu2(1).io.req.bits.operands(1)(0) := rij
        fpu2(1).io.req.bits.operands(2)(0) := 0.U
        when(fpu2(1).io.resp.fire) {
          tmpCoulombFact := fpu2(1).io.resp.bits.result(0)
        }
      }

      // esEnergy := esEnergy + (chargei * chargej * tmpCoulFact) / rij
      val chargeij = Wire(doubleToIEEE(0.0))
      fpu1(5).io.req.bits.op := FPOperation.MUL
      fpu1(5).io.req.bits.operands(0)(0) := chargei
      fpu1(5).io.req.bits.operands(1)(0) := chargej
      fpu1(5).io.req.bits.operands(2)(0) := constantChoice
      when(fpu1(5).io.resp.fire) {
        chargeij := fpu1(5).io.resp.bits.result(0)
      }
      val chargeijTemp = Wire(doubleToIEEE(0.0))
      fpu1(6).io.req.bits.op := FPOperation.MUL
      fpu1(6).io.req.bits.operands(0)(0) := chargeij
      fpu1(6).io.req.bits.operands(1)(0) := tmpCoulombFact
      fpu1(6).io.req.bits.operands(2)(0) := constantChoice
      when(fpu1(6).io.resp.fire) {
        chargeijTemp := fpu1(6).io.resp.bits.result(0)
      }
      val energyAdd = Wire(doubleToIEEE(0.0))
      fpu2(2).io.req.bits.operands(0)(0) := chargeijTemp
      fpu2(2).io.req.bits.op := FPOperation.DIV
      fpu2(2).io.req.bits.operands(1)(0) := rij
      fpu2(2).io.req.bits.operands(2)(0) := 0.U
      when(fpu2(2).io.resp.fire) {
        energyAdd := fpu2(2).io.resp.bits.result(0)
      }
      fpu1(7).io.req.bits.op := FPOperation.ADD
      fpu1(7).io.req.bits.operands(0)(0) := 0.U
      fpu1(7).io.req.bits.operands(1)(0) := energyAdd
      fpu1(7).io.req.bits.operands(2)(0) := io.in_esE
      when(fpu1(7).io.resp.fire) {
        io.out_esE := fpu1(7).io.resp.bits.result(0)
        done_esE := true.B
      }
    }

    when(isHeavy || io.useHydrogenVdw) {
      // rij6 = rij2 * rij2 * rij2;
      // rij12 = rij6 * rij6;
      val rij4 = Wire(doubleToIEEE(0.0))
      fpu1(8).io.req.bits.op := FPOperation.MUL
      fpu1(8).io.req.bits.operands(0)(0) := rij2
      fpu1(8).io.req.bits.operands(1)(0) := rij2
      fpu1(8).io.req.bits.operands(2)(0) := constantChoice
      when(fpu1(8).io.resp.fire) {
        rij4 := fpu1(8).io.resp.bits.result(0)
      }
      val rij6 = Wire(doubleToIEEE(0.0))
      fpu1(9).io.req.bits.op := FPOperation.MUL
      fpu1(9).io.req.bits.operands(0)(0) := rij4
      fpu1(9).io.req.bits.operands(1)(0) := rij2
      fpu1(9).io.req.bits.operands(2)(0) := constantChoice
      when(fpu1(9).io.resp.fire) {
        rij6 := fpu1(9).io.resp.bits.result(0)
      }
      val rij12 = Wire(doubleToIEEE(0.0))
      fpu1(10).io.req.bits.op := FPOperation.MUL
      fpu1(10).io.req.bits.operands(0)(0) := rij6
      fpu1(10).io.req.bits.operands(1)(0) := rij6
      fpu1(10).io.req.bits.operands(2)(0) := constantChoice
      when(fpu1(10).io.resp.fire) {
        rij12 := fpu1(10).io.resp.bits.result(0)
      }

      // vdwEnergy := vdwEnergy + Aij / rij12 - Bij / rij6
      val AijRij12 = Wire(doubleToIEEE(0.0))
      fpu2(3).io.req.bits.operands(0)(0) := Aij
      fpu2(3).io.req.bits.op := FPOperation.DIV
      fpu2(3).io.req.bits.operands(1)(0) := rij12
      fpu2(3).io.req.bits.operands(2)(0) := 0.U
      when(fpu2(3).io.resp.fire) {
        AijRij12 := fpu2(3).io.resp.bits.result(0)
      }
      val BijRij6 = Wire(doubleToIEEE(0.0))
      fpu2(4).io.req.bits.operands(0)(0) := Bij
      fpu2(4).io.req.bits.op := FPOperation.DIV
      fpu2(4).io.req.bits.operands(1)(0) := rij6
      fpu2(4).io.req.bits.operands(2)(0) := 0.U
      when(fpu2(4).io.resp.fire) {
        BijRij6 := fpu2(4).io.resp.bits.result(0)
      }
      val partialSum = Wire(doubleToIEEE(0.0))
      fpu1(11).io.req.bits.op := FPOperation.ADD
      fpu1(11).io.req.bits.opModifier := 1.U  //Make it subtract
      fpu1(11).io.req.bits.operands(0)(0) := 0.U
      fpu1(11).io.req.bits.operands(1)(0) := AijRij12
      fpu1(11).io.req.bits.operands(2)(0) := BijRij6
      when(fpu1(11).io.resp.fire) {
        partialSum := fpu1(11).io.resp.bits.result(0)
      }
      fpu1(12).io.req.bits.op := FPOperation.ADD
      fpu1(12).io.req.bits.operands(0)(0) := 0.U
      fpu1(12).io.req.bits.operands(1)(0) := partialSum
      fpu1(12).io.req.bits.operands(2)(0) := io.in_vdwE
      when(fpu1(12).io.resp.fire) {
        io.out_vdwE := fpu1(12).io.resp.bits.result(0)
        done_vdwE := true.B
      }
    }
  }
}