include_directories(${CCME_SOURCE_DIR}/src)

add_executable(testMatrix testMatrix.cpp)
target_link_libraries(testMatrix ccme)
add_test(NAME matrixUnitTest COMMAND testMatrix)
