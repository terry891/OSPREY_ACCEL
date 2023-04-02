package energyCalc

import chisel3._
import chisel3.util._
import chisel3.experimental._

class EnergyCal(val forcefld: String, val length: UInt ) extends Module {
  val io = IO(new Bundle {
    val numberHalfNonBonded = Input(UInt(32.W))
    val numberNonBonded = Input(UInt(32.W))
    val numberSolvated = Input(UInt(32.W))
    val useHydrogenEs = Input(Bool())
    val useHydrogenVdw = Input(Bool())
    val distDepDielect = Input(Bool())
    val isInternal = Input(Bool())
    val halfNonBondedTerms = Input(Vec(length, UInt(64.W)))
    val data = Input(Vec(length, UInt(64.W)))
    val res1Start = Input(UInt(32.W))
    val res2Start = Input(UInt(32.W))

    val state_i = Input (Vec(5*5, Bits(W.W)))
    val state_o = Output(Vec(5*5, Bits(W.W)))
  })

  val integer = 32
  val single = 32
  val MaxListSize = 32




  // Add Berkley Hardfloat Support
	val numberSolvated = RegInit(0.S(single.W))
	val R_D2R = RegInit(Dbl(0.01745329251994329576924))
	val R_R2D = RegInit(Dbl(57.29577951308232090712))
  val R_internalSolvEnergy = RegInit(Dbl(0.0))
  val R_solvationTem = RegInit(List.fill(MaxListSize)(Dbl(0.0)))

  val coulombFactor = RegInit(Dbl(332.0636))
  val dielectric = RegInit(Dbl(78.3)) //To be changed

  val esEnergy = RegInit(Dbl(0.0))
  val vdwEnergy = RegInit(Dbl(0.0))



  // Update Coordinates

 
  // Scaling
  coulombFactor := forcefld match {
    case "AMBER" => (332.0 / 1.2) / dielectric
    case "CHARMM19" => 
    case "CHARMM19NEUTRAL" =>  (332.0 * 0.4) / dielectric
    case _ => throw new Exception("Forcefield not supported")
  }


  // Preparation for first loop
  val atomix4 = RegInit(0.S(integer.W))
  val atomjx4 = RegInit(0.S(integer.W))
  val atomi = RegInit(0.S(integer.W))
  val atomj = RegInit(0.S(integer.W))
  val Aij = RegInit(Dbl(0.0))
  val Bij = RegInit(Dbl(0.0))
  val chargei = RegInit(Dbl(0.0))
  val chargej = RegInit(Dbl(0.0))
  val rij = RegInit(Dbl(0.0))
  val rij2 = RegInit(Dbl(0.0))
  val rij6 = RegInit(Dbl(0.0))
  val rij12 = RegInit(Dbl(0.0))
  val rijx = RegInit(Dbl(0.0))
  val rijy = RegInit(Dbl(0.0))
  val rijz = RegInit(Dbl(0.0))
  val useHydrogenNeither = RegInit(false.B)
  val isHydrogen = RegInit(false.B)
  val isHeavy = RegInit(false.B)
  useHydrogenNeither := ! io.useHydrogenEs && ! io.useHydrogenVdw


  // First Loop
  val ix5 = RegInit(-5.S(integer.W))
  for (i <- numberHalfNonBonded) {
    ix5 := ix5 + 5.S(integer.W)
    isHydrogen = halfNonBondedTerms(ix5 + 2) === 1.S(integer.W)
    when (isHydrogen && useHydrogenNeither) {
      continue
    }
    isHeavy = ! isHydrogen

    // read table parts
    atomi = halfNonBondedTerms(ix5 + 0)
    atomj = halfNonBondedTerms(ix5 + 1)
    Aij = halfNonBondedTerms(ix5 + 3)
    Bij = halfNonBondedTerms(ix5 + 4)

    // read coords
    atomix4 = atomi * 4.S(integer.W)
    atomjx4 = atomj * 4.S(integer.W)
    rijx = data(res1Start + atomix4) - data(res2Start + atomjx4)
    rijy = data(res1Start + atomix4 + 1) - data(res2Start + atomjx4 + 1)
    rijz = data(res1Start + atomix4 + 2) - data(res2Start + atomjx4 + 2)
    chargei = data(res1Start + atomix4 + 3)
    chargej = data(res2Start + atomjx4 + 3)

    rij2 = rijx * rijx + rijy * rijy + rijz * rijz
    when (isHeavy || useHydrogenEs) {
      rij = sqrt(rij2)
      val tmpCoulFact = RegInit(Dbl(0.0))
      when (distDepDielect) {
        tmpCoulFact := coulombFactor / rij
      }

      esEnergy = esEnergy + (chargei * chargej * tmpCoulFact) / Eij
    }
    when (isHeavy || useHydrogenVdw) {
      rij6 = rij2 * rij2 * rij2
      rij12 = rij6 * rij6
      vdwEnergy = vdwEnergy + Aij / rij12 - Bij / rij6
    }
   
  }


  // Preparation for second loop
  coulombFactor := 332.0636 / dielectric
  ix5 := -5.S(integer.W)

  // Second Loop



  // Third Loop
  val ix8 = RegInit(-8.S(integer.W))



  
  io.state_o(0) := io.state_i(0)
}
