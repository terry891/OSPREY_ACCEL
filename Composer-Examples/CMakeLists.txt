cmake_minimum_required(VERSION 3.10)
if ("${SUITE}" STREQUAL "GEMM_GPU")
    project(ComposerExamples
            LANGUAGES CXX CUDA)
else ()
    project(ComposerExamples)
endif ()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
find_package(composer REQUIRED)
include_directories($ENV{COMPOSER_ROOT}/Composer-Hardware/vsim/generated-src)

if (NOT "${FPGA}" STREQUAL "")
    set(extra_libs "fpga_mgmt")
    add_executable(scrape src/unit/scraper.c)
    add_executable(clear src/unit/clear_mem.c)
    target_link_libraries(scrape PUBLIC ${extra_libs})
    target_link_libraries(clear PUBLIC ${extra_libs})
    message("Enabling F1 Statistics gathering")
    include_directories("$ENV{COMPOSER_ROOT}/aws-fpga/sdk/userspace/include")
    add_compile_definitions(FPGA=1)
endif ()


if ("${SUITE}" STREQUAL "SHA3")
    add_executable(sha3test src/sha3/sha3_test.cc)
    target_link_libraries(sha3test PUBLIC APEX::composer)
endif ()

if ("${SUITE}" STREQUAL "UNIT")
    add_executable(dma src/unit/dma_test.cc)
    target_link_libraries(dma PUBLIC APEX::composer)

    add_executable(allo src/unit/allocate_test.cc)
    target_link_libraries(allo PUBLIC APEX::composer)
endif ()

if ("${SUITE}" STREQUAL "BASIC")
    add_executable(LFSRTest src/unit/lfsrtest.cc)
    target_link_libraries(LFSRTest PUBLIC APEX::composer)

    add_executable(alutest src/unit/alu_test.cc)
    target_link_libraries(alutest PUBLIC APEX::composer)

    add_executable(vector src/unit/vector.cc)
    target_link_libraries(vector PUBLIC APEX::composer)
endif ()

if ("${SUITE}" STREQUAL "FPU")
    add_executable(fpunew src/fpunew/fpnew_tester.cc)
    target_link_libraries(fpunew PUBLIC APEX::composer)
endif ()

if ("${SUITE}" STREQUAL "GEMM")
    find_package(blaspp REQUIRED
            HINTS /opt/slate/)
    add_executable(gemm src/gemm/gemm_test.cc)
    add_executable(gemm_big src/gemm/big_gemm_test.cc)
    add_executable(gemm_disp src/gemm/gemm_dispatch_test.cc)
    target_link_libraries(gemm PUBLIC APEX::composer pthread ${extra_libs})
    target_link_libraries(gemm_big PUBLIC APEX::composer pthread ${extra_libs})
    target_link_libraries(gemm_disp PUBLIC APEX::composer pthread ${extra_libs})
    if (NOT "${USE_BLAS}" STREQUAL "")
        add_executable(gemm_cpu src/gemm/big_gemm_cpu.cc)
        target_link_libraries(gemm_cpu PUBLIC pthread blas blaspp ${extra_libs})
    endif ()
endif ()

if ("${SUITE}" STREQUAL "GEMM_GPU")
    add_executable(gemm_gpu src/gemm/big_gemm_gpu.cu)
    set_property(TARGET gemm_gpu PROPERTY CUDA_ARCHITECTURES 86)
    target_link_libraries(gemm_gpu PUBLIC cublas curand)
endif ()

if ("${SUITE}" STREQUAL "DT")
    add_executable(dec_tree src/dt/DTTest.cc src/dt/DecisionTree.cc)
    target_link_libraries(dec_tree PUBLIC APEX::composer)
endif ()

if ("${SUITE}" STREQUAL "THROUGHPUT")
    add_executable(throughput src/through/throughput_test.cc)
    target_link_libraries(throughput PUBLIC APEX::composer)
endif ()
