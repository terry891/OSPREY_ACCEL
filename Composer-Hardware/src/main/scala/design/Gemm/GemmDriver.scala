package design.Gemm

import chipsalliance.rocketchip.config.Config
import composer.{WithAWSPlatform, WithComposer}

object GP {
  val unitParams = GemmParam(dataWidthBytes = 4,
    rowColDim = 16,
    columnParallelism = 4,
    rowParallelism = 2,
    maxRCDim = 2048,
    prefetchAmt = 2)
  val F1Params = GemmParam(dataWidthBytes = 4,
    rowColDim = 256,
    columnParallelism = 2,
    rowParallelism = 8,
    maxRCDim = 2048,
    prefetchAmt = 8)
  val F1Small = GemmParam(dataWidthBytes = 4,
    rowColDim = 256,
    columnParallelism = 2,
    rowParallelism = 4,
    maxRCDim = 2048,
    prefetchAmt = 8)
  val F1ParamsTest = GemmParam(
    dataWidthBytes = 4,
    rowColDim = 256,
    columnParallelism = 4,
    rowParallelism = 4,
    maxRCDim = 2048,
    prefetchAmt = 8)
}

class WorkingF1NoDispatcher extends Config(
  new WithGemm(5, GP.F1Params) ++ new WithComposer(256 * 4 * 2) ++ new WithAWSPlatform(1)
)

class FirstTryF1WithDispatcher extends Config(
  new GemmWithDispatchConfig(5, GP.F1Params) ++ new WithComposer(256 * 4 * 2) ++ new WithAWSPlatform(1)
)

class SmallDispatcher extends Config(
  new GemmWithDispatchConfig(5, GP.unitParams) ++ new WithComposer() ++ new WithAWSPlatform(1)
)

class GemmF1Int12 extends Config(
  new GemmWithDispatchConfig(12, GP.F1Small) ++ new WithComposer() ++ new WithAWSPlatform(1)
)

class GemmF1Float4Big extends Config(
  new GemmWithFloatDispatchConfig(4, GP.F1ParamsTest) ++ new WithComposer() ++ new WithAWSPlatform(1)
)

//noinspection ScalaUnusedSymbol
class GemmTestF1 extends Config(
  new WithGemm(4, GP.unitParams) ++ new WithComposer() ++ new WithAWSPlatform(1)
)

//noinspection ScalaUnusedSymbol
class GemmTestF1Big extends Config(
  new WithGemm(6, GP.F1Params) ++ new WithComposer(256 * 4 * 2) ++ new WithAWSPlatform(1)
)

class GemmFloatDispatchUnit extends Config(
  new GemmWithFloatDispatchConfig(1, GP.unitParams) ++ new WithComposer() ++ new WithAWSPlatform(1)
)

class GemmDispatchF1Config extends Config (new GemmWithDispatchConfig(2, GP.unitParams) ++ new WithAWSPlatform(1) ++ new WithComposer())

object GemmSmallDriver extends App {
  composer.TestDriver.buildConfig(new SmallDispatcher)
}

object GemmDispatchDriverF1Int extends App {
  composer.TestDriver.buildConfig(new GemmF1Int12)
}

object GemmDispatchDriverF1Float extends App {
  composer.TestDriver.buildConfig(new GemmF1Float4Big)
}


object GemmFloatDriver extends App {
  composer.TestDriver.buildConfig(new GemmFloatDispatchUnit)
}
