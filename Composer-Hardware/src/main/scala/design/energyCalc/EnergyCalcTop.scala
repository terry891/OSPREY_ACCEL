package design.energyCalc

import chipsalliance.rocketchip.config._
import composer._
import composer.MemoryStreams._

case class EnergyCalcTops()

class EnergyCalcTop(composerConstructor: ComposerConstructor, myParams: EnergyCalcTops)(implicit p: Parameters)
  extends ComposerCore(composerConstructor){


}

class withEnergyCalc(nCores: Int, params: EnergyCalcTops) extends Config( (site, here, up) => {
  case ComposerSystemsKey => up(ComposerSystemsKey, site) ++ List(
    new ComposerSystemParams(
      nCores = nCores,
      name = "EnergyCalc",package design.energyCalc

                          import chipsalliance.rocketchip.config._
                          import composer._
                          import composer.MemoryStreams._

                          case class EnergyCalcTops()

                          class EnergyCalcTop(composerConstructor: ComposerConstructor, myParams: EnergyCalcTops)(implicit p: Parameters)
                            extends ComposerCore(composerConstructor){


                          }

                          class withEnergyCalc(nCores: Int, params: EnergyCalcTops) extends Config( (site, here, up) => {
                            case ComposerSystemsKey => up(ComposerSystemsKey, site) ++ List(
                              new ComposerSystemParams(
                                nCores = nCores,
                                name = "EnergyCalc",
                                buildCore => {case (a, b) =>
                                  new EnergyCalcTop(a, params)(b) },
                                coreParams = ComposerCoreParams(memoryChannelParams = List(
                                  CScratchpadChannelParams(name = "data", supportWriteback = false, dataWidthBits = 32*4, nDatas = ???, latency = 1, supportReadLength = ???, specialization = ???)
                                )),
                              )
                            )
                          })

      buildCore => {case (a, b) =>
        new EnergyCalcTop(a, params)(b) },
      coreParams = ComposerCoreParams(memoryChannelParams = List(
        CScratchpadChannelParams(name = "data", supportWriteback = false, dataWidthBits = 32*4, nDatas = ???, latency = 1, supportReadLength = ???, specialization = ???)
      )),
    )
  )
})
