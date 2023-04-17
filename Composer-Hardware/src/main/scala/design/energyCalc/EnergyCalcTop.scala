package design.energyCalc

import org.chipsalliance.cde.config._
import composer._
import chisel3._
import chisel3.util._
import composer.MemoryStreams._
import fpnewWrapper._

case class EnergyCalcTops()

object EnergyCalcCommands extends ChiselEnum {
  val addrs_data_HNBT, addrs_NBT_ST = Value
}

class EnergyCalcTop(composerConstructor: ComposerConstructor)(implicit p: Parameters)
  extends ComposerCore(composerConstructor) {
  CppGeneration.exportChiselEnum(EnergyCalcCommands)

  def doubleToIEEE(in: Double): UInt = {
    val floatBits = java.lang.Float.floatToIntBits(in.toFloat)
//    printf(Integer.toBinaryString(floatBits))
//    val sign = floatBits >> 31
//    val exponent = (floatBits >> 23) & 0xff
//    val significand = floatBits & 0x7fffff
//    Cat(sign.U(1.W), exponent.U(8.W), significand.U(23.W))
//    BigInt(floatBits).U(32.W)
    0.U(32.W)
  }

  // @TIANSHU - FIX THIS THE IEEE CONVERSION ISNT WORKING
  val numberHalfNonBonded : UInt = 10.U
  val numberNonBonded : UInt = 175.U
  val res1start : UInt = doubleToIEEE(0.0)
  val res2start : UInt = doubleToIEEE(76.0)
  val useHydrogenEs : Bool = true.B
  val useHydrogenVdw : Bool = true.B
  val distDepDielect : Bool = true.B
  val isInternal : Bool = false.B
  val solvCutoff : UInt = doubleToIEEE(81.0)
  val numberSolvated : UInt = 32.U
  val forcefield : UInt = 1.U
  val dielectric : UInt = doubleToIEEE(6.0)
  val solvationForcefield : UInt = 1.U
  val solvScale : UInt = doubleToIEEE(0.5)
  val internalSolvEnergy : UInt= doubleToIEEE(0.0)

  val esEnergy = RegInit(0.U(32.W))
  val vdwEnergy = RegInit(0.U(32.W))
  val solvEnergy = RegInit(0.U(32.W))
  esEnergy := doubleToIEEE(0.0003810783273974494)
  vdwEnergy := doubleToIEEE(-0.0008450722111057217)
  solvEnergy := doubleToIEEE(0.0)


  val (_, myWriters) = getWriterModules(
    name = "WriteChannel",
    useSoftwareAddressing = true,
    dataBytes = 4)

  val s_idle :: s_read :: s_calculate :: s_store :: s_commit :: s_finish :: Nil = Enum(6)
  val state = RegInit(s_idle)
  val addr_data, addr_HNBT, addr_NBT, addr_ST = Reg(UInt(addrBits.W))

  // data_req is doing the initial setup from memory
  // use data_acc to access scratchpad memory directly
  val (data_init_req, data_access) = getScratchpad("data")
  data_init_req.request.bits.scAddr := 0.U
  data_init_req.request.bits.len := (4 * 32).U
  data_init_req.request.bits.memAddr := addr_data

  val (halfNonBonded_init_req, halfNonBonded_access) = getScratchpad("halfNonBonded")
  halfNonBonded_init_req.request.bits.scAddr := 0.U
  halfNonBonded_init_req.request.bits.len := (5 * 32).U
  halfNonBonded_init_req.request.bits.memAddr := addr_HNBT

  val (nonBonded_init_req, nonBonded_access) = getScratchpad("nonBonded")
  nonBonded_init_req.request.bits.scAddr := 0.U
  nonBonded_init_req.request.bits.len := (5 * 32).U
  nonBonded_init_req.request.bits.memAddr := addr_NBT

  val (solvated_init_req, solvated_access) = getScratchpad("solvated")
  solvated_init_req.request.bits.scAddr := 0.U
  solvated_init_req.request.bits.len := (8 * 32).U
  solvated_init_req.request.bits.memAddr := addr_ST

  // val my_mod = Module(new asdf)
  // my_mod.sp <> data_access

  val myWriter = myWriters(0)
  val sum = Reg(UInt(32.W))
  val halfNonBonded_a, halfNonBonded_b, halfNonBonded_c, halfNonBonded_d, halfNonBonded_e = Reg(UInt(32.W))
  val nonBonded_a, nonBonded_b, nonBonded_c, nonBonded_d, nonBonded_e = Reg(UInt(32.W))
  val solvated_a, solvated_b, solvated_c, solvated_d, solvated_e, solvated_f, solvated_g, solvated_h = Reg(UInt(32.W))
  myWriter.data.valid := false.B
  myWriter.data.bits := sum
  io.req.ready := state === s_idle
  io.resp.valid := false.B
  io.resp.bits.data := 0.U
  io.resp.bits.rd := 0.U


  // Get FPGA main memory addresses of 4 input arrays
  when (state === s_idle) {
    when(io.req.fire) {
      printf(cf"input fired\n")
      when (io.req.bits.inst.rs1 === EnergyCalcCommands.addrs_data_HNBT.asUInt) {
        addr_data := io.req.bits.payload1(addrBits-1, 0)
        addr_HNBT := io.req.bits.payload2(addrBits-1, 0)

        printf(cf"input 1 data address $addr_data%b\n")
        printf(cf"input 1 HNBT address ${addr_HNBT}\n")
      }.elsewhen(io.req.bits.inst.rs1 === EnergyCalcCommands.addrs_NBT_ST.asUInt) {
        addr_NBT := io.req.bits.payload1
        addr_ST := io.req.bits.payload2
        printf(cf"input 2\n")
        state := s_read
      }

    }
  }
  .elsewhen (state === s_read) {
    printf(cf"read\n")

    // SET readReq.valid = true
    halfNonBonded_access.readReq.valid := state === s_read
    nonBonded_access.readReq.valid := state === s_read
    solvated_access.readReq.valid := state === s_read

    // SET the readReq.bits to the index (it will automatically grab the 5 indexes chunk we need for a loop iteration)
    halfNonBonded_access.readReq.bits := 0.U
    nonBonded_access.readReq.bits := 0.U
    solvated_access.readReq.bits := 0.U

    // CREATE registers to store the array values
    val halfNonBonded_a, halfNonBonded_b, halfNonBonded_c, halfNonBonded_d, halfNonBonded_e = Reg(UInt(32.W))
    val nonBonded_a, nonBonded_b, nonBonded_c, nonBonded_d, nonBonded_e = Reg(UInt(32.W))
    val solvated_a, solvated_b, solvated_c, solvated_d, solvated_e, solvated_f, solvated_g, solvated_h = Reg(UInt(32.W))

    // WHEN THE SCRATCHPAD ACCESS RESPONSE IS RECEIVED
    when (halfNonBonded_access.readRes.valid) {

      // GRAB THE SCRATCHPAD ACCESS RESPONSE BITS
      val resp = halfNonBonded_access.readRes.bits

      // BREAK IT UP INTO THE DIFFERENT INDEXES
      halfNonBonded_a := resp(31, 0)
      halfNonBonded_b := resp(63, 32)
      halfNonBonded_c := resp(95, 64)
      halfNonBonded_d := resp(127, 96)
      halfNonBonded_e := resp(159, 128)
      printf(cf"halfnonbonded $resp%b\n")

    }

    when (nonBonded_access.readRes.valid) {
      val resp = nonBonded_access.readRes.bits
      nonBonded_a := resp(31, 0)
      nonBonded_b := resp(63, 32)
      nonBonded_c := resp(95, 64)
      nonBonded_d := resp(127, 96)
      nonBonded_e := resp(159, 128)
      printf(cf"nonbonded $resp%b\n")

    }

    when (solvated_access.readRes.valid) {
      val resp = solvated_access.readRes.bits
      solvated_a := resp(31, 0)
      solvated_b := resp(63, 32)
      solvated_c := resp(95, 64)
      solvated_d := resp(127, 96)
      solvated_e := resp(159, 128)
      solvated_f := resp(191, 160)
      solvated_g := resp(223, 192)
      solvated_h := resp(255, 224)
      printf(cf"solvated $resp%b\n")

      state := s_calculate
    }

  }
  .elsewhen (state === s_calculate) {
    printf(cf"calculate\n")

    val iteration = RegInit(0.U(32.W))
    val cal_state = RegInit(7.U(32.W))
    val start_now = RegInit(true.B)

    when (state === s_calculate && start_now) {
      iteration := 0.U
      cal_state := 0.U
      start_now := false.B
    }

    //FPU modules
    val HNB = Module(new HalfNonBonded(data_access))
    val NB = Module(new NonBonded(data_access))
    val SOL = Module(new Solvated(data_access))

    HNB.io.start := false.B
    HNB.io.useHydrogenEs := useHydrogenEs
    HNB.io.useHydrogenVdw := useHydrogenVdw
    HNB.io.distDepDielect := distDepDielect
    HNB.io.coulombFactor := doubleToIEEE(233.0)
    HNB.io.halfNonBondedTerms := Seq(halfNonBonded_a, halfNonBonded_b, halfNonBonded_c, halfNonBonded_d, halfNonBonded_e)
    HNB.io.res1Start := res1start
    HNB.io.res2Start := res2start
    HNB.io.in_esE := esEnergy
    HNB.io.in_vdwE := vdwEnergy

    NB.io.start := false.B
    NB.io.useHydrogenEs := useHydrogenEs
    NB.io.useHydrogenVdw := useHydrogenVdw
    NB.io.distDepDielect := distDepDielect
    NB.io.coulombFactor := doubleToIEEE(233.0)
    NB.io.nonBondedTerms := Seq(nonBonded_a, nonBonded_b, nonBonded_c, nonBonded_d, nonBonded_e)
    NB.io.res1Start := res1start
    NB.io.res2Start := res2start
    NB.io.in_esE := esEnergy
    NB.io.in_vdwE := vdwEnergy

    SOL.io.start := false.B
    SOL.io.solvCutoff2 := solvCutoff
    SOL.io.res1Start := res1start
    SOL.io.res2Start := res2start
    SOL.io.in_solvE := solvEnergy
    SOL.io.solvationTerms := Seq(solvated_a, solvated_b, solvated_c, solvated_d, solvated_e, solvated_f, solvated_g, solvated_h)

    when (iteration <= 1000.U) {
      printf(cf"iteration number: $iteration%b\n")
      cal_state := Mux(state === s_calculate, 0.U, cal_state)

      when (cal_state === 0.U) {
        HNB.io.start := true.B
        cal_state := 1.U
      }.elsewhen(cal_state === 1.U) {
        HNB.io.start := false.B
        esEnergy := Mux(HNB.io.done, HNB.io.out_esE, esEnergy)
        vdwEnergy := Mux(HNB.io.done, HNB.io.out_vdwE, vdwEnergy)
        cal_state := Mux(HNB.io.done, 2.U, cal_state)
        printf(cf"halfnonbonded loop done, esEnergy $esEnergy%b\n")
      }.elsewhen(cal_state === 2.U) {
        NB.io.start := true.B
        cal_state := 3.U
      }.elsewhen(cal_state === 3.U) {
        NB.io.start := false.B
        esEnergy := Mux(NB.io.done, NB.io.out_esE, esEnergy)
        vdwEnergy := Mux(NB.io.done, NB.io.out_vdwE, vdwEnergy)
        cal_state := Mux(NB.io.done, 4.U, cal_state)
        printf(cf"nonbonded loop done, esEnergy $esEnergy%b\n")
      }.elsewhen(cal_state === 4.U){
        SOL.io.start := true.B
        cal_state := 5.U
      }.elsewhen(cal_state === 5.U){
        SOL.io.start := false.B
        solvEnergy := Mux(SOL.io.done, SOL.io.out_solvE, solvEnergy)
        cal_state := Mux(SOL.io.done, 6.U, cal_state)
        printf(cf"solvation loop completed\n")
      }.elsewhen(cal_state === 6.U){
        sum := esEnergy
        iteration := iteration + 1.U
        printf(cf"all completed, iteration plus one\n")
      }.otherwise{
        printf(cf"No more calculation\n")
      }
    }.elsewhen(iteration > 1000.U){
      state := s_store
    }

    // - halfNonBonded_a,b,c,d,e | nonBonded_a,b,c,d,e | solvated_a,b,c,d,e,f,g,h
    // - hardcoded constant values (refer to lines 24-42) - this is broken so plz fix
    // - data_access (type CScratchpadAccessBundle) for accessing "data" array Scratchpad

    // WHEN CALCULATIONS ARE DONE, SET THIS LINE
    // SET THE "SUM" REGISTER TO ANY OUTPUT AND IT WILL SHOW IN THE TESTBENCH PRINT

  }
  .elsewhen (state === s_store) {
    printf(cf"store\n")
    myWriter.data.valid := true.B

    when(myWriter.data.fire) {
      printf(cf"output sum - ${sum}\n")
      state := s_commit
    }
  }
  .elsewhen (state === s_commit) {

    printf(cf"commit\n")
    when(myWriter.channelIdle) {
          state := s_finish
      }
  }
  .elsewhen (state === s_finish) {
    printf(cf"finish\n")
    io.resp.valid := true.B
    when(io.resp.fire) {
        state := s_idle
    }
  }
}

class withEnergyCalc(nCores: Int) extends Config((site, here, up) => {
  case ComposerSystemsKey => up(ComposerSystemsKey, site) ++ List(
    new ComposerSystemParams(
      nCores = nCores,
      name = "EnergyCalc",
      buildCore = {
        case (a, b) => new EnergyCalcTop(a)(b)
      },
      coreParams = ComposerCoreParams(memoryChannelParams = List(
        CWriteChannelParams("WriteChannel", 1),
        CScratchpadChannelParams(
          name = "data",
          supportWriteback = false,
          dataWidthBits = 32 * 4,
          nDatas = 64,
          latency = 1,
          specialization = CScratchpadSpecialization.flatPacked
        ),
        CScratchpadChannelParams(
          name = "halfNonBonded",
          supportWriteback = false,
          dataWidthBits = 32 * 8,
          nDatas = 16,
          latency = 1,
          specialization = CScratchpadSpecialization.flatPacked
        ),
        CScratchpadChannelParams(
          name = "nonBonded",
          supportWriteback = false,
          dataWidthBits = 32 * 8,
          nDatas = 512,
          latency = 1,
          specialization = CScratchpadSpecialization.flatPacked
        ),
        CScratchpadChannelParams(
          name = "solvated",
          supportWriteback = false,
          dataWidthBits = 32 * 8,
          nDatas = 64,
          latency = 1,
          specialization = CScratchpadSpecialization.flatPacked
        )
      )),
    )
  )
})

class EnergyCalcConfig extends Config(new withEnergyCalc(1) ++ new WithComposer() ++ new WithAWSPlatform(1))
object EnergyCalcConfig extends App {
  composer.TestDriver.buildConfig(new EnergyCalcConfig)
}