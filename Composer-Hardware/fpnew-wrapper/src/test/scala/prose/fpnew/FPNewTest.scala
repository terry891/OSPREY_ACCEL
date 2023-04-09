package fpnew

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec
//import fpuwrapper.FloatS
import fpuwrapper.Simulator
import scala.io.Source
import java.io._ 



class FPUTest extends AnyFreeSpec with ChiselScalatestTester {
  // fpnew does not support icarus verilog
  val tbl = new Array[chisel3.Bits](10)
    for (i <- 0 to 9){
      val stages = 1
    s"FPU of ${stages} stage(s) should work with i = ${i}" in {
      test(new FPU_MAC("B", "S", 16, 32, 1, stages))//new FPU_MAC("B", "S", 16, 32, 1, stages))   //new FPUNew("B",16, 1, stages))
         .withAnnotations(Simulator.getAnnotations(useIcarus = false, useVCS = false)) { dut =>
          dut.clock.step(16)

          def enqueueReq() {
            dut.io.req.valid.poke(true.B)
            while (dut.io.req.ready.peek().litToBoolean == false) {
              dut.clock.step(1)
            }
            dut.clock.step(1)
            dut.io.req.valid.poke(false.B)
          }

          def expectResp()(x: FPU_MAC => Unit) {
            val expectedCycles = stages - 1
            var cycles = 0
            dut.io.resp.ready.poke(true.B)
            while (dut.io.resp.valid.peek().litToBoolean == false) {
              dut.clock.step(1)
              cycles += 1
            }
            dut.io.resp.valid.expect(true.B)
            x(dut)
            dut.io.resp.ready.poke(true.B)
            dut.clock.step(1)
            assert(
              cycles == expectedCycles,
              s"Response does not appear after expected cycles: ${cycles} != ${expectedCycles}"
            )
          }

/*
          val lines = Source.fromResource("fpvals.txt").getLines.toArray
          val a = lines(0);
          println(a)

          var fpuf = FPFloatFormat()
          
          if(a == "fp64") { fpuf = FPFloatFormat.Fp64 }
          else if(a == "fp32") { fpuf = FPFloatFormat.Fp32 }
          else if(a == "fp16") { fpuf = FPFloatFormat.Fp16 }
          else if(a == "bf16") { fpuf = FPFloatFormat.Fp16Alt }
          else if(a == "fp8")  { fpuf = FPFloatFormat.Fp8 }
  */        
          val alines = Source.fromResource("avals.txt").getLines.toArray
          val blines = Source.fromResource("bvals.txt").getLines.toArray
          val clines = Source.fromResource("cvals.txt").getLines.toArray

          //var inA = 1071513600 //1071579136 // 1071579135 // 16350
          //inA = inA + (i-1)*65336
          
          //val inA = lines(1).asUInt << 16
          //val inB = lines(2).asUInt << 16
          //val inC = lines(3).asUInt << 16

          
          dut.io.req.bits.operands(0).poke(alines(i).asUInt) // 1
          dut.io.req.bits.operands(1).poke(blines(i).asUInt) // 2
          dut.io.req.bits.operands(2).poke(clines(i).asUInt) // 3
          
          

            //dut.io.req.bits.op.poke(FPOperation.FMADD)
            //dut.io.req.bits.srcFormat.poke(FPFloatFormat.Fp16Alt)
            //dut.io.req.bits.dstFormat.poke(FPFloatFormat.Fp16Alt)
            /*
            dut.io.req.bits.operands(0).poke(inA) // 1
            dut.io.req.bits.operands(1).poke(inB) // 2
            dut.io.req.bits.operands(2).poke(inC) // 3
            */
            
            //dut.io.req.bits.operands(0).poke("h404c".asUInt) // 1
            //dut.io.req.bits.operands(1).poke("h404c".asUInt) // 2
            //dut.io.req.bits.operands(2).poke("h404c".asUInt) // 3
          
            enqueueReq()

            tbl(i) = dut.io.resp.bits.result.peek() //.litValue.toString //toString.toHex //.asUInt
            //println(i-1)
            //println(tbl(i-1))
            //printf("%x \n", tbl(i-1))
            println(tbl(i))
          
          //expectResp() { dut =>
            //dut.io.resp.bits.result.expect(lines(4).asUInt)
            //dut.io.resp.bits.result.expect(lines(i).asUInt)
          //}
          
         // for (e <- tbl){
          	
         // println("output: ",e)
	      //val fileWriter = new PrintWriter(new File("out.txt"))
	      //if (e != null){
	      //fileWriter.write(e)
	      //}
	      //fileWriter.close()
	   //   }
          
          
	      
          
        }
         
    }
     
  }

	  
}


