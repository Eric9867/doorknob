add_library(doorknob_physics STATIC
  mat2.cpp
  mat2.h
  vector.cpp
  vector.h)

target_include_directories(doorknob_physics PUBLIC ./)
