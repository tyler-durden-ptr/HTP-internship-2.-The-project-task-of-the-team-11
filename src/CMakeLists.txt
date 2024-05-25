cmake_minimum_required(VERSION 3.21)
project(ntr_serializer)

set(CMAKE_CXX_STANDARD 20)

find_package(RapidJSON CONFIG REQUIRED)

file(GLOB ENTITY_SRC entity/*.cpp)
file(GLOB IO_SRC io/*.cpp)
file(GLOB UTILITY_SRC utility/*.cpp)
file(GLOB ITTI_SRC ../itti_structs/asn1c_build/*.cpp)

add_library(${PROJECT_NAME} ${ENTITY_SRC} ${IO_SRC} ${UTILITY_SRC} ${ITTI_SRC})
target_include_directories(${PROJECT_NAME} PUBLIC ../itti_structs/asn1c_build .)
target_link_libraries(${PROJECT_NAME} PRIVATE rapidjson)

# Compiler specific warnings
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(${PROJECT_NAME} PRIVATE -Wshadow=compatible-local)
    target_compile_options(${PROJECT_NAME} PRIVATE -Wduplicated-branches)
    target_compile_options(${PROJECT_NAME} PRIVATE -Wduplicated-cond)
    target_compile_options(${PROJECT_NAME} PRIVATE -Wno-maybe-uninitialized)
elseif(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    target_compile_options(${PROJECT_NAME} PRIVATE -Wshadow-uncaptured-local)
    target_compile_options(${PROJECT_NAME} PRIVATE -Wloop-analysis)
    target_compile_options(${PROJECT_NAME} PRIVATE -Wno-self-assign-overloaded)
    target_compile_options(${PROJECT_NAME} PRIVATE -Wno-missing-braces)
endif()

option(USE_SANITIZERS "Enable to build with undefined,leak and address sanitizers" OFF)
if(USE_SANITIZERS)
    message(STATUS "Enabling sanitizers...")
    target_compile_options(${PROJECT_NAME} PUBLIC -fsanitize=address,undefined,leak -fno-sanitize-recover=all)
    target_link_options(${PROJECT_NAME} PUBLIC -fsanitize=address,undefined,leak)
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    message(STATUS "Enabling libc++...")
    target_compile_options(${PROJECT_NAME} PUBLIC -stdlib=libc++)
    target_link_options(${PROJECT_NAME} PUBLIC -stdlib=libc++)
endif()

if(CMAKE_BUILD_TYPE MATCHES "Debug")
    message(STATUS "Enabling _GLIBCXX_DEBUG...")
    target_compile_options(${PROJECT_NAME} PUBLIC -D_GLIBCXX_DEBUG)
endif()
