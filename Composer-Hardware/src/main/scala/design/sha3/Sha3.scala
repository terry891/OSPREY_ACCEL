package  design.sha3

import chipsalliance.rocketchip.config.{Config, Field, Parameters}
import chisel3._
import chisel3.util._
import composer.MemoryStreams._
import composer._

import scala.util.Random


case class Sha3Config(
  //Define The config for your core
)

class Sha3Accel(composerCoreParams: ComposerConstructor)(implicit p: Parameters) extends ComposerCore(composerCoreParams) {
    //Implementation of your Sha3 Accelerator
}

case object Sha3Key extends Field[Sha3Config]

class WithSha3(withNCores: Int /* Add your config here*/) extends Config((site, _, up) => {
  case ComposerSystemsKey => up(ComposerSystemsKey, site) ++ Seq(ComposerSystemParams(
    coreParams = ComposerCoreParams(
      memoryChannelParams = List(
        // Modify the memory parameters if necessary
        CReadChannelParams("ReadChannel", 1),
        CWriteChannelParams("WriteChannel", 1))
    ),
    nCores = withNCores,
    name = "Sha3System",
    buildCore = {
      case (composerCoreParams: ComposerConstructor, parameters: Parameters) =>
        new Sha3Accel(composerCoreParams)(parameters)
    }
  ))

  case Sha3Key => Sha3Config(/*Add your configs*/)
})

class Sha3ChipConfig extends Config(
  // Target Config with single sha3 core
  new WithSha3(1/*Add configs if any*/) ++ new WithComposer() ++ new WithAWSPlatform(1)
)