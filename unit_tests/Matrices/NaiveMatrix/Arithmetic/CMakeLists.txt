include_directories(${CCME_SOURCE_DIR}/src)

add_executable(testMatrixArithmetic testMatrixArithmetic.cpp)
target_link_libraries(testMatrixArithmetic ccme)
add_test(NAME MatrixArithmetic COMMAND testMatrixArithmetic)
