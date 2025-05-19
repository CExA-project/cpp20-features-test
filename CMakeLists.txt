cmake_minimum_required(VERSION 3.25.2)

project(
    Cpp20FeaturesTest
    LANGUAGES CXX
)

option(CPPFT_ENABLE_ERROR_LOG "Show compiler log on error" ON)

if("${CMAKE_CXX_COMPILER}" MATCHES "clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")
endif()

message(STATUS "Compiler ${CMAKE_CXX_COMPILER} v${CMAKE_CXX_COMPILER_VERSION}")

function(try_compile_feature FEATURE_NAME)
    string(TOLOWER "${FEATURE_NAME}" FEATURE_NAME_LOWER)

    message(STATUS "Trying to build ${FEATURE_NAME_LOWER}")

    set(SOURCE_FILE "${PROJECT_SOURCE_DIR}/src/${FEATURE_NAME_LOWER}.cpp")
    set(BUILD_DIR "${PROJECT_BINARY_DIR}/${FEATURE_NAME_LOWER}")

    message(DEBUG "CXX compiler: ${CMAKE_CXX_COMPILER}")

    if("${CMAKE_CXX_COMPILER}" MATCHES "nvcc")
        enable_language(CUDA)

        # rewrite the file with .cu
        set(SOURCE_FILE_CU "${BUILD_DIR}/${FEATURE_NAME_LOWER}.cu")
        file(MAKE_DIRECTORY "${BUILD_DIR}")
        file(COPY_FILE "${SOURCE_FILE}" "${SOURCE_FILE_CU}")
        set(SOURCE_FILE "${SOURCE_FILE_CU}")
    endif()

    message(DEBUG "Input file: ${SOURCE_FILE}")
    message(DEBUG "Output dir: ${BUILD_DIR}")

    try_compile(
        CAN_BUILD
        "${BUILD_DIR}"
        "${SOURCE_FILE}"
        OUTPUT_VARIABLE LOG_MESSAGE
        CXX_STANDARD 20
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF
        CUDA_STANDARD 20
        CUDA_STANDARD_REQUIRED ON
        CUDA_EXTENSIONS OFF
    )

    if(CAN_BUILD)
        message(STATUS "Trying to build ${FEATURE_NAME_LOWER}: Success")
    else()
        message(STATUS "Trying to build ${FEATURE_NAME_LOWER}: Error")
        if(CPPFT_ENABLE_ERROR_LOG)
            message(STATUS "Error message:\n${LOG_MESSAGE}")
        endif()
    endif()
endfunction()

message(STATUS "C++20 standard")
try_compile_feature("concept")
try_compile_feature("consteval")
try_compile_feature("modules_lang")

message(STATUS "C++20 standard library")
try_compile_feature("assume_aligned")
try_compile_feature("cmp")
try_compile_feature("modules_lib")
try_compile_feature("source_location")
try_compile_feature("span")
# try_compile_feature("string_view")
