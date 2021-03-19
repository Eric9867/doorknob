add_executable(tester vector_math.cpp)
target_link_libraries(tester PRIVATE doorknob_physics gtest_main)

# TODO: use add_test
add_custom_command(TARGET tester POST_BUILD COMMAND "$<TARGET_FILE:tester>")
