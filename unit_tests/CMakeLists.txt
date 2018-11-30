include_directories (${CCME_SOURCE_DIR}/src)

add_executable (testMatrix testMatrix.cpp)
target_link_libraries (CCME)

add_test (NAME basicUnitTest COMMAND testMatrix)
