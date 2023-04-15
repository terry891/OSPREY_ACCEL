# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL)")
set(VERILATOR_ROOT "/usr/local/Cellar/verilator/5.006/share/verilator" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(Vcomposer_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(Vcomposer_USER_LDLIBS "-lz" "-undefined dynamic_lookup -lpthread")

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(Vcomposer_SC 0)
# Coverage output mode?  0/1 (from --coverage)
set(Vcomposer_COVERAGE 0)
# Timing mode?  0/1
set(Vcomposer_TIMING 0)
# Threaded output mode?  1/N threads (from --threads)
set(Vcomposer_THREADS 1)
# VCD Tracing output mode?  0/1 (from --trace)
set(Vcomposer_TRACE_VCD 0)
# FST Tracing output mode? 0/1 (from --trace-fst)
set(Vcomposer_TRACE_FST 1)

### Sources...
# Global classes, need linked once per executable
set(Vcomposer_GLOBAL "${VERILATOR_ROOT}/include/verilated.cpp" "${VERILATOR_ROOT}/include/verilated_fst_c.cpp" "${VERILATOR_ROOT}/include/verilated_threads.cpp")
# Generated module classes, non-fast-path, compile with low/medium optimization
set(Vcomposer_CLASSES_SLOW "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer__ConstPool_0.cpp" "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer___024root__Slow.cpp" "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer___024root__DepSet_heee829f7__0__Slow.cpp" "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer___024root__DepSet_h403c2bfc__0__Slow.cpp" "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer___024root__DepSet_h403c2bfc__1__Slow.cpp")
# Generated module classes, fast-path, compile with highest optimization
set(Vcomposer_CLASSES_FAST "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer.cpp" "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer___024root__DepSet_heee829f7__0.cpp" "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer___024root__DepSet_h403c2bfc__0.cpp" "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer___024root__DepSet_h403c2bfc__1.cpp" "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer___024root__DepSet_h403c2bfc__2.cpp")
# Generated support classes, non-fast-path, compile with low/medium optimization
set(Vcomposer_SUPPORT_SLOW "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer__Syms.cpp" "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer__Trace__0__Slow.cpp" "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer__Trace__1__Slow.cpp")
# Generated support classes, fast-path, compile with highest optimization
set(Vcomposer_SUPPORT_FAST "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer__Trace__0.cpp" "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer__Trace__1.cpp" "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL/Composer-Runtime/build/CMakeFiles/ComposerRuntime.dir/Vcomposer.dir/Vcomposer__Trace__2.cpp")
# All dependencies
set(Vcomposer_DEPS "/Users/aryatschand/Documents/GitHub/OSPREY_ACCEL//Composer-Hardware/vsim/generated-src/composer.v" "/usr/local/bin/verilator_bin")
# User .cpp files (from .cpp's on Verilator command line)
set(Vcomposer_USER_CLASSES )
