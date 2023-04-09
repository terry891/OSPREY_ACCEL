package fpnewWrapper

import chisel3._
import java.io.FileWriter

//noinspection ScalaUnusedSymbol
object FPNewOpClass extends Enumeration {
  val ADDMUL, DIVSQRT, NONCOMP, CONV = Value
  type FPNewOpClass = Value
  def op2Flag(f: FPNewOpClass.FPNewOpClass): Int = {
    f match {
      case ADDMUL => 1
      case DIVSQRT => 2
      case NONCOMP => 4
      case CONV => 8
    }
  }
}

//noinspection ScalaUnusedSymbol
class FPNewBlackbox(floattype: FPFloatFormat.Type,
                    floatwidth: Int,
                    lanes: Int,
                    stages: Int,
                    supportedOps: Seq[FPNewOpClass.FPNewOpClass],
                    tagWidth: Int
                    ) extends BlackBox {
  require(tagWidth > 0)
  val fLen = floatwidth * lanes
  require(supportedOps.nonEmpty)
  val opFlag = supportedOps.map(FPNewOpClass.op2Flag).reduce(_ | _)
  val io = IO(new Bundle {
    val clk_i = Input(Clock())
    val rst_ni = Input(Bool())
    val operands_i = Input(UInt((fLen * 3).W))
    val rnd_mode_i = Input(UInt(3.W))
    val op_i = Input(UInt(4.W))
    val op_mod_i = Input(Bool())
    val src_fmt_i = Input(UInt(3.W))
    val dst_fmt_i = Input(UInt(3.W))
    val int_fmt_i = Input(UInt(2.W))
    val vectorial_op_i = Input(Bool())
    val tag_i = Input(UInt(tagWidth.W))
    val in_valid_i = Input(Bool())
    val in_ready_o = Output(Bool())
    val flush_i = Input(Bool())
    val result_o = Output(UInt(fLen.W))
    val status_o = Output(UInt(5.W))
    val tag_o = Output(UInt(tagWidth.W))
    val out_valid_o = Output(Bool())
    val out_ready_i = Input(Bool())
    val busy_o = Output(Bool())
  }).suggestName("io")
  private val suffix = f"_ty${FPFloatFormat.getCommonName(floattype)}_l${lanes}_${stages}s_${tagWidth}tw_${opFlag}ops"
  val baseName = f"FPNewBlackbox$suffix"
  override val desiredName = baseName
  private val componentName = baseName + ".sv"
  private val resourceName = s"$baseName.v"
  private val cacheDir = os.pwd / ".fpnew_cache"
  if (!os.exists(cacheDir)) {
    os.makeDir(cacheDir)
  }
  private val p = cacheDir / resourceName
  if (os.exists(p)) {
//    println(s"Found component ($resourceName), not building")
  } else {
    println(s"Did not find component ($resourceName), using Yosys to build...")
    val fwriter = new FileWriter((cacheDir / componentName).toString())
    fwriter.write(
      s"""
         |module $baseName #(
         |    // fpu features
         |    parameter FLEN = $fLen,
         |    parameter ENABLE_VECTORS = 1,
         |    parameter ENABLE_NAN_BOX = 1,
         |    parameter ENABLE_FP32 = ${if (floattype == FPFloatFormat.Fp32) 1 else 0},
         |    parameter ENABLE_FP64 = ${if (floattype == FPFloatFormat.Fp64) 1 else 0},
         |    parameter ENABLE_FP16 = ${if (floattype == FPFloatFormat.Fp16) 1 else 0},
         |    parameter ENABLE_FP8 = ${if (floattype == FPFloatFormat.Fp8) 1 else 0},
         |    parameter ENABLE_FP16ALT = ${if (floattype == FPFloatFormat.Fp16Alt) 1 else 0},
         |    parameter ENABLE_INT8 = 0,
         |    parameter ENABLE_INT16 = 0,
         |    parameter ENABLE_INT32 = 0,
         |    parameter ENABLE_INT64 = 0,
         |    // fpu implementation
         |    parameter PIPELINE_STAGES = $stages,
         |    // tag type: logic array
         |    parameter TAG_WIDTH = $tagWidth,
         |    // Do not change, follow fp-new definition
         |    localparam int unsigned WIDTH        = $fLen,
         |    localparam int unsigned NUM_OPERANDS = 3,
         |    localparam type TagType = logic [TAG_WIDTH-1:0]
         |
         |) (
         |    // Copied from fpnew_top
         |    input logic                               clk_i,
         |    input logic                               rst_ni,
         |    // Input signals
         |    input logic [NUM_OPERANDS-1:0][WIDTH-1:0] operands_i,
         |    input fpnew_pkg::roundmode_e              rnd_mode_i,
         |    input fpnew_pkg::operation_e              op_i,
         |    input logic                               op_mod_i,
         |    input fpnew_pkg::fp_format_e              src_fmt_i,
         |    input fpnew_pkg::fp_format_e              dst_fmt_i,
         |    input fpnew_pkg::int_format_e             int_fmt_i,
         |    input logic                               vectorial_op_i,
         |    input TagType                             tag_i,
         |    // Input Handshake
         |    input  logic                              in_valid_i,
         |    output logic                              in_ready_o,
         |    input  logic                              flush_i,
         |    // Output signals
         |    output logic [WIDTH-1:0]                  result_o,
         |    output fpnew_pkg::status_t                status_o,
         |    output TagType                            tag_o,
         |    // Output handshake
         |    output logic                              out_valid_o,
         |    input  logic                              out_ready_i,
         |    // Indication of valid data in flight
         |    output logic                              busy_o
         |);
         |
         |    localparam fpnew_pkg::fpu_features_t Features = '{
         |        Width: int'(FLEN),
         |        EnableVectors: int'(ENABLE_VECTORS),
         |        EnableNanBox: int'(ENABLE_NAN_BOX),
         |        FpFmtMask: (int'(ENABLE_FP32) << 4) | (int'(ENABLE_FP64) << 3) | (int'(ENABLE_FP16) << 2) | (int'(ENABLE_FP8) << 1) | (int'(ENABLE_FP16ALT) << 0),
         |        IntFmtMask: (int'(ENABLE_INT8) << 3) | (int'(ENABLE_INT16) << 2) | (int'(ENABLE_INT32) << 1) | (int'(ENABLE_INT64) << 0)
         |    };
         |
         |    // only pipeline regs is customized
         |    localparam fpnew_pkg::fpu_implementation_t Implementation = '{
         |        PipeRegs:   '{'{default: PIPELINE_STAGES},
         |                      '{default: PIPELINE_STAGES},
         |                      '{default: PIPELINE_STAGES},
         |                      '{default: PIPELINE_STAGES}},
         |        UnitTypes:  '{'{default: fpnew_pkg::${if (supportedOps.contains(FPNewOpClass.ADDMUL)) "PARALLEL" else "DISABLED"}}, // ADDMUL
         |                    '{default: fpnew_pkg::${if (supportedOps.contains(FPNewOpClass.DIVSQRT)) "PARALLEL" else "DISABLED"}},   // DIVSQRT
         |                    '{default: fpnew_pkg::${if (supportedOps.contains(FPNewOpClass.NONCOMP)) "PARALLEL" else "DISABLED"}}, // NONCOMP
         |                    '{default: fpnew_pkg::${if (supportedOps.contains(FPNewOpClass.CONV)) "PARALLEL" else "DISABLED"}}},  // CONV
         |        PipeConfig: fpnew_pkg::DISTRIBUTED
         |    };
         |
         |    fpnew_top #(
         |        .Features(Features),
         |        .Implementation(Implementation),
         |        .TagType(TagType)
         |    ) inst (
         |        .clk_i(clk_i),
         |        .rst_ni(rst_ni),
         |
         |        .operands_i(operands_i),
         |        .rnd_mode_i(rnd_mode_i),
         |        .op_i(op_i),
         |        .op_mod_i(op_mod_i),
         |        .src_fmt_i(src_fmt_i),
         |        .dst_fmt_i(dst_fmt_i),
         |        .int_fmt_i(int_fmt_i),
         |        .vectorial_op_i(vectorial_op_i),
         |        .tag_i(tag_i),
         |
         |        .in_valid_i(in_valid_i),
         |        .in_ready_o(in_ready_o),
         |        .flush_i(flush_i),
         |
         |        .result_o(result_o),
         |        .status_o(status_o),
         |        .tag_o(tag_o),
         |
         |        .out_valid_o(out_valid_o),
         |        .out_ready_i(out_ready_i),
         |
         |        .busy_o(busy_o)
         |    );
         |
         |
         |endmodule
         |
         |""".stripMargin)
    fwriter.close()
    val makeFileLoc = cacheDir / "Makefile"
    val fpw_path = {
      val sys = System.getenv("FPW_DIR")
      if (sys == null) {
        println("WARNING: Could not find definition for FPW_DIR. Set this environment to fpnew-wrapper directory. Guessing directory otherwise...")
        (os.pwd / "fpnew-wrapper").toString()
      } else sys
    }
    val fpnew_deps = {
      val l = List("/common_cells/src/rr_arb_tree.sv",
        "common_cells/src/cf_math_pkg.sv",
        "common_cells/src/lzc.sv",
        "fpu_div_sqrt_mvp/hdl/defs_div_sqrt_mvp.sv",
        "fpu_div_sqrt_mvp/hdl/control_mvp.sv",
        "fpu_div_sqrt_mvp/hdl/div_sqrt_top_mvp.sv",
        "fpu_div_sqrt_mvp/hdl/iteration_div_sqrt_mvp.sv",
        "fpu_div_sqrt_mvp/hdl/norm_div_sqrt_mvp.sv",
        "fpu_div_sqrt_mvp/hdl/nrbd_nrsc_mvp.sv",
        "fpu_div_sqrt_mvp/hdl/preprocess_mvp.sv",
        "fpnew_pkg.sv",
        "fpnew_cast_multi.sv",
        "fpnew_classifier.sv",
        "fpnew_divsqrt_multi.sv",
        "fpnew_fma.sv",
        "fpnew_fma_multi.sv",
        "fpnew_noncomp.sv",
        "fpnew_opgroup_block.sv",
        "fpnew_opgroup_fmt_slice.sv",
        "fpnew_opgroup_multifmt_slice.sv",
        "fpnew_rounding.sv")
      l.map(a => s"$fpw_path/src/main/resources/fpnew/src/$a")
    }
    val fpnw_deps = List(s"$fpw_path/src/main/resources/fpnew/src/fpnew_top.sv",
      (cacheDir / componentName).toString())

    val cmd = List("verilator", "--cc", "--exe", "-E", s"+incdir+$fpw_path/src/main/resources/fpnew/src/common_cells/include")
    val cmd_w_srcs = cmd ++ fpnw_deps ++ fpnew_deps ++ List("--top-module", baseName)
    val pp_sv = cacheDir / (baseName + "_preprocessed.sv")
    val pp_filter_sv = cacheDir / (baseName + "_filtered.sv")
    val pp_v = cacheDir / (baseName + "_preprocessed.v")
    val pp_filter_v = cacheDir / (baseName + "_filtered.v")
    val yosys_in = cacheDir / (baseName + "_yosys.v")
    val resource_path = cacheDir / resourceName

    os.proc(cmd_w_srcs).call(stdout = os.PathRedirect(pp_sv))
    def passes(str: String): Boolean = {
      str.strip() != "" && !str.contains("`line")
    }
    os.write.over(pp_filter_sv, os.read(pp_sv).split("\n").filter(passes).map(_ + "\n").reduce(_ + _))
    os.proc("sv2v", pp_filter_sv).call(stdout = os.PathRedirect(pp_v))
    os.write.over(yosys_in, os.read(pp_v).split("\n").filter(a => a.strip() != "" && !a.contains("$$fatal")).map(_ + "\n")
      .map{a:String =>
        if(a.contains("fpnew_top")){
          val idx = a.indexOf("fpnew_top")
          a.substring(0, idx) + baseName + a.substring(idx+"fpnew_top".length)
        } else a
      }.reduce(_ + _))
    os.proc("yosys", "-p", s"read_verilog -defer ${yosys_in.toString()}", "-p", s"hierarchy -top $baseName", "-p", "proc", "-p", "opt", "-p", s"write_verilog -noattr ${resource_path.toString()}").call(cacheDir)
  }

  //  os.proc("make -C ")
  //  val resourcePath = os.RelPath(os.resource / os.RelPath(resourceName.dropWhile(_ == '/'))).toString()
  //  println(resourcePath)
  //  os.exists(resourcePath)
  //  addResource(s"/fpnew_scripts/FPNewBlackbox_${floattype}${lanes}l${stages}s_synth.v") //Manually type B,H,S,D

}

//
////noinspection ScalaUnusedSymbol
//class FPNewBlackbox_m(floattype: FPFloatFormat.Type,
//                      floatwidth: Int,
//                      lanes: Int,
//                      stages: Int,
//                      tagWidth: Int,
//                     ) extends BlackBox()
//  with HasBlackBoxResource {
//  val fLen = floatwidth * lanes
//  val io = IO(new Bundle {
//    val clk_i = Input(Clock())
//    val rst_ni = Input(Bool())
//    val operands_i = Input(UInt((fLen * 3).W))
//    val rnd_mode_i = Input(UInt(3.W))
//    val op_i = Input(UInt(4.W))
//    val op_mod_i = Input(Bool())
//    val src_fmt_i = Input(UInt(3.W))
//    val dst_fmt_i = Input(UInt(3.W))
//    val int_fmt_i = Input(UInt(2.W))
//    val vectorial_op_i = Input(Bool())
//    val tag_i = Input(UInt(tagWidth.W))
//    val in_valid_i = Input(Bool())
//    val in_ready_o = Output(Bool())
//    val flush_i = Input(Bool())
//    val result_o = Output(UInt(fLen.W))
//    val status_o = Output(UInt(5.W))
//    val tag_o = Output(UInt(tagWidth.W))
//    val out_valid_o = Output(Bool())
//    val out_ready_i = Input(Bool())
//    val busy_o = Output(Bool())
//  }).suggestName("io")
//
//  // addResource(s"/fpnew/FPNewBlackbox_${floatType.kind().toString()}${lanes}l${stages}s.synth.v")
//  // addResource(s"/fpnew/FPNewBlackbox_B1l0s.synth.v")
//  addResource(s"/fpnew_scripts/FPNewBlackbox_${floattype}${lanes}l${stages}s.synth.v") //Manually type B,H,S,D
//
//}
