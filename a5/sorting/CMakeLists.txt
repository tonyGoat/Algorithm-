#cmake version
cmake_minimum_required(VERSION 3.10)

#project name
project(sorting)

#add_definitions(-D_GLIBCXX_USE_CXX11_ABI=0)

#define c++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#define source directories, "include" is for headers and "src" is for implementation
include_directories(
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/src
)

#define a list of files, called SRC_FILES, that stores all source code files within "include" and "src"
file(GLOB_RECURSE SRC_FILES
        "${PROJECT_SOURCE_DIR}/include/*.h"
        "${PROJECT_SOURCE_DIR}/include/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/*.h"
        )

#include all source code files to generate an executable
add_executable(sorting ${SRC_FILES} src/algorithms/QuickSortIntegers.h src/algorithms/MergeSortGeneric.h src/algorithms/MergeSortGenericWithComparator.h src/algorithms/QuickSortGeneric.h src/algorithms/QuickSortGenericWithComparator.h src/comparator/Descending.h "src/comparator/ByState.h")
