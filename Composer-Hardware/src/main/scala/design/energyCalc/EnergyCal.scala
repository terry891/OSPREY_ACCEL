//package design.energyCalc
//
//import chisel3._
//import chisel3.util._
//import chisel3.experimental._
//import composer._
//import fpnewWrapper._
//import org.chipsalliance.cde.config._
//
//
//class EnergyCal() extends Module {
//  val io = IO(new Bundle {
//    val numberHalfNonBonded = Input(UInt(64.W))
//    val numberNonBonded = Input(UInt(64.W))
//    val numberSolvated = Input(UInt(64.W))
//    val useHydrogenEs = Input(Bool())
//    val isInternal = Input(Bool())
//    val useHydrogenVdw = Input(Bool())
//    val internalSolvEnergy = Input(UInt(32.W))
//    val distDepDielect = Input(Bool())
//    val toDoSalve = Input(Bool())
//    val forceFieldSelect = Input(UInt(64.W))
//    val halfNonBondedTerms = Input(Vec(5, UInt(32.W)))  //Max 50
//    val nonBondedTerms = Input(Vec(5, UInt(32.W)))    //Max 2090
//    val solvationTerms = Input(Vec(5, UInt(32.W)))     //Max 288
//    val data = Input(Vec(5, SInt(32.W)))               //Max 116
//    val res1Start = Input(UInt(32.W))
//    val res2Start = Input(UInt(32.W))
//    val solvCutoff2 = Input(UInt(32.W))
//    val solvScale = Input(UInt(32.W))
//
//
//    val output = Output(UInt(64.W))
//    var done = Output(Bool())
//  })
//
//  def doubleToIEEE(in: Double): UInt = {
//    fpnewWrapper.FPNewUtil.floatToUInt(in, FPFloatFormat.Fp64)
//  }
//
//
//  val coulombFactor = RegInit(doubleToIEEE(332.0636))
//
//  // First loop Columb Factor Scaling
//  when(io.forceFieldSelect === 0.U) {
//    coulombFactor := doubleToIEEE((332.0 / 1.2) / 78.3) //AMBER
//  }.elsewhen(io.forceFieldSelect === 1.U || io.forceFieldSelect === 2.U) {
//    coulombFactor := doubleToIEEE((332.0 * 0.4) / 78.3) //CHARMM19 or CHARMM19NEUTRAL
//  }.otherwise {
//    throw new Exception("Force Field not supported")
//  }
//
//  // Second loop
//  //  coulombFactor = constCoulomb / (params.dielectric);
//
//
//  val solvEnergy = Reg(0.U(32.W))
//  solvEnergy := Mux(io.isInternal, io.internalSolvEnergy, 0.U(32.W))
//
//  // Not doing third loop
//  when (io.solvationForcefield != SolvationForcefield.EEF1) {
//    io.output := HNB_esE + NB_esE + HNB_vdwE + NB_vdwE //add all four energies
//  }
//
//
//
//
//
//
//
//  // Scaling
//  when (io.forceFieldSelect === 0.U) {
//    coulombFactor := doubleToIEEE((332.0 / 1.2) / 78.3)  //AMBER
//  } .elsewhen (io.forceFieldSelect === 1.U || io.forceFieldSelect === 2.U) {
//    coulombFactor := doubleToIEEE((332.0 * 0.4) / 78.3)  //CHARMM19 or CHARMM19NEUTRAL
//  } .otherwise {
//    throw new Exception("Force Field not supported")
//  }
//
//
//  // Preparation for first loop
//  val atomix4 = RegInit(0.U(32.W))
//  val atomjx4 = RegInit(0.U(32.W))
//  val atomi = RegInit(0.U(32.W))
//  val atomj = RegInit(0.U(32.W))
//  val Aij = RegInit(doubleToIEEE(0.0))
//  val Bij = RegInit(doubleToIEEE(0.0))
//  val chargei = RegInit(doubleToIEEE(0.0))
//  val chargej = RegInit(doubleToIEEE(0.0))
//  val rij = RegInit(doubleToIEEE(0.0))
//  val rijx = RegInit(doubleToIEEE(0.0))
//  val rijy = RegInit(doubleToIEEE(0.0))
//  val rijz = RegInit(doubleToIEEE(0.0))
//  val useHydrogenNeither = RegInit(false.B)
//  val isHydrogen = RegInit(false.B)
//  val isHeavy = RegInit(false.B)
//
//  useHydrogenNeither := !io.useHydrogenEs && !io.useHydrogenVdw
//
//  // First Loop - Do numberHalfNonBonded iterations
//  isHydrogen := io.halfNonBondedTerms(2) === 1.U(32.W)
//  when  ( isHydrogen && useHydrogenNeither) {
//    io.done := true.B
//  } .otherwise {
//    isHeavy := !isHydrogen
//
//    // read table parts
//    atomi := io.halfNonBondedTerms(0)
//    atomj := io.halfNonBondedTerms(1)
//    Aij := io.halfNonBondedTerms(3)
//    Bij := io.halfNonBondedTerms(4)
//
//    // read coords
//    atomix4 := atomi * 4.U(32.W)
//    atomjx4 := atomj * 4.U(32.W)
//    val index1 = io.res1Start + atomix4
//    val index2 = io.res2Start + atomjx4
//    rijx := io.data(index1) - io.data(index2)
//    rijy := io.data(index1 + 1.U) - io.data(index2 + 1.U)
//    rijz := io.data(index1 + 2.U) - io.data(index2 + 2.U)
//    chargei := io.data(index1 + 3.U)
//    chargej := io.data(index2 + 3.U)
//
//    // rij2 := rijx * rijx + rijy * rijy + rijz * rijz
//    val rij2 = RegInit(doubleToIEEE(0.0))
//    val constantChoice = Reg(0.U(32.W))
//    val numFPU1 = 15
//    val fpu1 = Seq.fill(numFPU1)(Module(new FPUNew(FPFloatFormat.Fp32, lanes = numLanes, stages = numStages, supportedOps = Seq(FPNewOpClass.ADDMUL), tagWidth = 1)))
//    for (i <- 0 until numFPU1) {
//      fpu1(i).io.req.valid := true.B
//      fpu1(i).io.req.bits := DontCare
//      fpu1(i).io.resp.ready := true.B
//      fpu1(i).io.req.bits.opModifier := 0.U
//      fpu1(i).io.req.bits.roundingMode := FPRoundingMode.RNE
//    }
//    val rijx2 = Wire(doubleToIEEE(0.0))
//    val rijy2 = Wire(doubleToIEEE(0.0))
//    val rijz2 = Wire(doubleToIEEE(0.0))
//    val sum1 = Wire(doubleToIEEE(0.0))
//    fpu1(0).io.req.bits.op := FPOperation.MUL
//    fpu1(0).io.req.bits.operands(0)(0) := rijx
//    fpu1(0).io.req.bits.operands(1)(0) := rijx
//    fpu1(0).io.req.bits.operands(2)(0) := constantChoice
//    when(fpu1(0).io.resp.fire) {
//      rijx2 := fpu1(0).io.resp.bits.result(0)
//    }
//    fpu1(1).io.req.bits.op := FPOperation.MUL
//    fpu1(1).io.req.bits.operands(0)(0) := rijy
//    fpu1(1).io.req.bits.operands(1)(0) := rijy
//    fpu1(1).io.req.bits.operands(2)(0) := constantChoice
//    when(fpu1(1).io.resp.fire) {
//      rijy2 := fpu1(1).io.resp.bits.result(0)
//    }
//    fpu1(2).io.req.bits.op := FPOperation.MUL
//    fpu1(2).io.req.bits.operands(0)(0) := rijz
//    fpu1(2).io.req.bits.operands(1)(0) := rijz
//    fpu1(2).io.req.bits.operands(2)(0) := constantChoice
//    when(fpu1(2).io.resp.fire) {
//      rijz2 := fpu1(2).io.resp.bits.result(0)
//    }
//    fpu1(3).io.req.bits.op := FPOperation.ADD
//    fpu1(3).io.req.bits.operands(2)(0) := rijx2
//    fpu1(3).io.req.bits.operands(1)(0) := rijy2
//    fpu1(3).io.req.bits.operands(0)(0) := constantChoice
//    when(fpu1(3).io.resp.fire) {
//      sum1 := fpu1(3).io.resp.bits.result(0)
//    }
//    fpu1(4).io.req.bits.op := FPOperation.ADD
//    fpu1(4).io.req.bits.operands(2)(0) := sum1
//    fpu1(4).io.req.bits.operands(1)(0) := rijz2
//    fpu1(4).io.req.bits.operands(0)(0) := constantChoice
//    when(fpu1(4).io.resp.fire) {
//      rij2 := fpu1(4).io.resp.bits.result(0)
//    }
//
//    val numFPU2 = 5
//    val fpu2 = Seq.fill(numFPU2)(Module(new FPUNew(FPFloatFormat.Fp32, lanes = numLanes, stages = numStages, supportedOps = Seq(FPNewOpClass.DIVSQRT), tagWidth = 1)))
//
//    when(isHeavy || io.useHydrogenEs) {
//      for (i <- 0 until numFPU2) {
//        fpu2(i).io.req.valid := true.B
//        fpu2(i).io.req.bits := DontCare
//        fpu2(i).io.resp.ready := true.B
//        fpu2(i).io.req.bits.opModifier := 0.U
//        fpu2(i).io.req.bits.roundingMode := FPRoundingMode.RNE
//      }
//      // rij = Math.sqrt(rij2);
//      fpu2(0).io.req.bits.operands(0)(0) := rij2
//      fpu2(0).io.req.bits.op := FPOperation.SQRT
//      fpu2(0).io.req.bits.operands(1)(0) := 0.U   //No reg needed?
//      fpu2(0).io.req.bits.operands(2)(0) := 0.U
//      when(fpu2(0).io.resp.fire) {
//        rij := fpu2(0).io.resp.bits.result(0)
//      }
//
//      // tmpCoulFact /= rij
//      val tmpCoulFact = Wire(doubleToIEEE(0.0))
//      when(io.distDepDielect) {
//        fpu2(1).io.req.bits.operands(0)(0) := coulombFactor
//        fpu2(1).io.req.bits.op := FPOperation.DIV
//        fpu2(1).io.req.bits.operands(1)(0) := rij
//        fpu2(1).io.req.bits.operands(2)(0) := 0.U
//        when(fpu2(1).io.resp.fire) {
//          tmpCoulFact := fpu2(1).io.resp.bits.result(0)
//        }
//      }
//
//      // esEnergy := esEnergy + (chargei * chargej * tmpCoulFact) / rij
//      val chargeij = Wire(doubleToIEEE(0.0))
//      fpu1(5).io.req.bits.op := FPOperation.MUL
//      fpu1(5).io.req.bits.operands(0)(0) := sum1
//      fpu1(5).io.req.bits.operands(1)(0) := rijz2
//      fpu1(5).io.req.bits.operands(2)(0) := constantChoice
//      when(fpu1(5).io.resp.fire) {
//        chargeij := fpu1(5).io.resp.bits.result(0)
//      }
//      val chargeijTemp = Wire(doubleToIEEE(0.0))
//      fpu1(6).io.req.bits.op := FPOperation.MUL
//      fpu1(6).io.req.bits.operands(0)(0) := chargeij
//      fpu1(6).io.req.bits.operands(1)(0) := tmpCoulFact
//      fpu1(6).io.req.bits.operands(2)(0) := constantChoice
//      when(fpu1(6).io.resp.fire) {
//        chargeijTemp := fpu1(6).io.resp.bits.result(0)
//      }
//      val energyAdd = Wire(doubleToIEEE(0.0))
//      fpu2(2).io.req.bits.operands(0)(0) := chargeijTemp
//      fpu2(2).io.req.bits.op := FPOperation.DIV
//      fpu2(2).io.req.bits.operands(1)(0) := rij
//      fpu2(2).io.req.bits.operands(2)(0) := 0.U
//      when(fpu2(2).io.resp.fire) {
//        energyAdd := fpu2(2).io.resp.bits.result(0)
//      }
//      fpu1(7).io.req.bits.op := FPOperation.ADD
//      fpu1(7).io.req.bits.operands(0)(0) := 0.U
//      fpu1(7).io.req.bits.operands(1)(0) := energyAdd
//      fpu1(7).io.req.bits.operands(2)(0) := esEnergy
//      when(fpu1(7).io.resp.fire) {
//        esEnergy := fpu1(7).io.resp.bits.result(0)
//      }
//    }
//
//    when(isHeavy || io.useHydrogenVdw) {
//      // rij6 = rij2 * rij2 * rij2;
//      // rij12 = rij6 * rij6;
//      val rij4 = Wire(doubleToIEEE(0.0))
//      fpu1(8).io.req.bits.op := FPOperation.MUL
//      fpu1(8).io.req.bits.operands(0)(0) := rij2
//      fpu1(8).io.req.bits.operands(1)(0) := rij2
//      fpu1(8).io.req.bits.operands(2)(0) := constantChoice
//      when(fpu1(8).io.resp.fire) {
//        rij4 := fpu1(8).io.resp.bits.result(0)
//      }
//      val rij6 = Wire(doubleToIEEE(0.0))
//      fpu1(9).io.req.bits.op := FPOperation.MUL
//      fpu1(9).io.req.bits.operands(0)(0) := rij4
//      fpu1(9).io.req.bits.operands(1)(0) := rij2
//      fpu1(9).io.req.bits.operands(2)(0) := constantChoice
//      when(fpu1(9).io.resp.fire) {
//        rij6 := fpu1(9).io.resp.bits.result(0)
//      }
//      val rij12 = Wire(doubleToIEEE(0.0))
//      fpu1(10).io.req.bits.op := FPOperation.MUL
//      fpu1(10).io.req.bits.operands(0)(0) := rij6
//      fpu1(10).io.req.bits.operands(1)(0) := rij6
//      fpu1(10).io.req.bits.operands(2)(0) := constantChoice
//      when(fpu1(10).io.resp.fire) {
//        rij12 := fpu1(10).io.resp.bits.result(0)
//      }
//
//      // vdwEnergy := vdwEnergy + Aij / rij12 - Bij / rij6
//      val AijRij12 = Wire(doubleToIEEE(0.0))
//      fpu2(3).io.req.bits.operands(0)(0) := Aij
//      fpu2(3).io.req.bits.op := FPOperation.DIV
//      fpu2(3).io.req.bits.operands(1)(0) := rij12
//      fpu2(3).io.req.bits.operands(2)(0) := 0.U
//      when(fpu2(3).io.resp.fire) {
//        AijRij12 := fpu2(3).io.resp.bits.result(0)
//      }
//      val BijRij6 = Wire(doubleToIEEE(0.0))
//      fpu2(4).io.req.bits.operands(0)(0) := Bij
//      fpu2(4).io.req.bits.op := FPOperation.DIV
//      fpu2(4).io.req.bits.operands(1)(0) := rij6
//      fpu2(4).io.req.bits.operands(2)(0) := 0.U
//      when(fpu2(4).io.resp.fire) {
//        BijRij6 := fpu2(4).io.resp.bits.result(0)
//      }
//      val partialSum = Wire(doubleToIEEE(0.0))
//      fpu1(11).io.req.bits.op := FPOperation.ADD
//      fpu1(11).io.req.bits.opModifier := 1.U  //Make it subtract
//      fpu1(11).io.req.bits.operands(0)(0) := 0.U
//      fpu1(11).io.req.bits.operands(1)(0) := AijRij12
//      fpu1(11).io.req.bits.operands(2)(0) := BijRij6
//      when(fpu1(11).io.resp.fire) {
//        partialSum := fpu1(11).io.resp.bits.result(0)
//      }
//      fpu1(12).io.req.bits.op := FPOperation.ADD
//      fpu1(12).io.req.bits.operands(0)(0) := 0.U
//      fpu1(12).io.req.bits.operands(1)(0) := partialSum
//      fpu1(12).io.req.bits.operands(2)(0) := vdwEnergy
//      when(fpu1(12).io.resp.fire) {
//        vdwEnergy := fpu1(12).io.resp.bits.result(0)
//      }
//    }
//  }
//
//
//
//
//
//  // Preparation for second loop
//  coulombFactor := doubleToIEEE( 332.0636 / 78.3)
//
//  // Second Loop
//  isHydrogen := io.nonBondedTerms(2) === 1.S(32.W)
//  when(isHydrogen && useHydrogenNeither) {
//    io.done = true.B // continue
//  } .otherwise {
//    isHeavy = !isHydrogen
//
//    // read table parts
//    atomi = io.nonBondedTerms(0)
//    atomj = io.nonBondedTerms(1)
//    Aij = io.nonBondedTerms(3)
//    Bij = io.nonBondedTerms(4)
//
//    // read coords
//    atomix4 = atomi * 4.S(32.W)
//    atomjx4 = atomj * 4.S(32.W)
//    rijx = data(res1Start + atomix4) - data(res2Start + atomjx4)
//    rijy = data(res1Start + atomix4 + 1) - data(res2Start + atomjx4 + 1)
//    rijz = data(res1Start + atomix4 + 2) - data(res2Start + atomjx4 + 2)
//    chargei = data(res1Start + atomix4 + 3)
//    chargej = data(res2Start + atomjx4 + 3)
//
//    rij2 = rijx * rijx + rijy * rijy + rijz * rijz
//    when(isHeavy || useHydrogenEs) {
//      rij = sqrt(rij2)
//      val tmpCoulFact = RegInit(Dbl(0.0))
//      when(distDepDielect) {
//        tmpCoulFact := coulombFactor / rij
//      }
//
//      esEnergy = esEnergy + (chargei * chargej * tmpCoulFact) / rij
//    }
//    when(isHeavy || useHydrogenVdw) {
//      rij6 = rij2 * rij2 * rij2
//      rij12 = rij6 * rij6
//      vdwEnergy = vdwEnergy + Aij / rij12 - Bij / rij6
//    }
//  }
//
//
//  // Preparation for Salv
//  when(io.toDoSalve === 1.U) {
//    io.done := 1.U
//    io.output := esEnergy + vdwEnergy
//  }
//  val solvEnergy = RegInit(Dbl(0.0)) //ignoring internal now
//  val lambda_i = RegInit(Dbl(0.0))
//  val lambda_j = RegInit(Dbl(0.0))
//  val vdWr_i = RegInit(Dbl(0.0))
//  val vdWr_j = RegInit(Dbl(0.0))
//  val alpha_i = RegInit(Dbl(0.0))
//  val alpha_j = RegInit(Dbl(0.0))
//  val Xij = RegInit(Dbl(0.0))
//  val Xji = RegInit(Dbl(0.0))
//
//
//  // Third Loop
//  val ix8 = RegInit(-8.S(32.W))
//  for (i <- numberSolvated) {
//    ix8 := ix8 + 8.S(32.W)
//
//    atomi = solvatedTerms(ix8 + 0)
//    atomj = solvatedTerms(ix8 + 4)
//
//    // compute distance
//    atomix4 = atomi * 4.S(32.W)
//    atomjx4 = atomj * 4.S(32.W)
//    rijx = data(res1Start + atomix4) - data(res2Start + atomjx4)
//    rijy = data(res1Start + atomix4 + 1) - data(res2Start + atomjx4 + 1)
//    rijz = data(res1Start + atomix4 + 2) - data(res2Start + atomjx4 + 2)
//    rij2 = rijx * rijx + rijy * rijy + rijz * rijz
//
//    when(rij2 < solvCutoff2) {
//      lambda_i = solvatedTerms(ix8 + 1)
//      vdWr_i = solvatedTerms(ix8 + 2)
//      alpha_i = solvatedTerms(ix8 + 3)
//
//      lambda_j = solvatedTerms(ix8 + 5)
//      vdWr_j = solvatedTerms(ix8 + 6)
//      alpha_j = solvatedTerms(ix8 + 7)
//
//      rij = sqrt(rij2)
//      Xij = (rij - vdWr_i) / lambda_i
//      Xji = (rij - vdWr_j) / lambda_j
//
//      // How to do exponential?
//      solvEnergy = solvEnergy - (alpha_i * exp(-Xij * Xij) + alpha_j * exp(-Xji * Xji)) / rij2
//
//    }
//
//    // solvEnergy = solvEnergy * solvScale   // ignoring scaling for now
//    io.done := 1.U
//    io.output := esEnergy + vdwEnergy + solvEnergy
//
//  }
//}