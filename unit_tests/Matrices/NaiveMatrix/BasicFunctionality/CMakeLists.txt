include_directories(${CCME_SOURCE_DIR}/src)

#[[
add_executable(falseInitialization falseInitialization.cpp)
target_link_libraries(falseInitialization ccme)
add_test(NAME NaiveMatrix_DefaultConstructor COMMAND falseInitialization)
]]

add_executable(emptyInitialization emptyInitialization.cpp)
target_link_libraries(emptyInitialization ccme)
add_test(NAME NaiveMatrix_ZeroConstructor COMMAND emptyInitialization)
