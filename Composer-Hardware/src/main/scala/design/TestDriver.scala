package design

import design.Gemm.{GemmTestF1, GemmTestF1Big}
import design.sha3.Sha3ChipConfig

object GemmDriver extends App {
  composer.TestDriver.buildConfig(new GemmTestF1)
}
//
//object GemmBigger extends App {
//  Composer.buildConfig(new GemmTestF1Bigger)
//}
object GemmBig extends App {
  composer.TestDriver.buildConfig(new GemmTestF1Big)
}

// Drive to build Sha3 Core
object Sha3Driver extends App {
  composer.TestDriver.buildConfig(new Sha3ChipConfig)
}
