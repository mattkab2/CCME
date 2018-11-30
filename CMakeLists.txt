cmake_minimum_required(VERSION 3.11)
project(CCME VERSION 0.1.0 DESCRIPTION "Cache-Conscious Matrix Engine for MPI+OMP Parallel Systems")

include(GNUInstallDirs)
include(CTest)

add_subdirectory(src)
enable_testing()
add_subdirectory(unit_tests)
