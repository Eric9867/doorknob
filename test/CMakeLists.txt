
add_executable(tester vector_math.cpp)

target_link_libraries(tester PRIVATE gtest_main doorknob_physics)