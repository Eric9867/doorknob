add_library(doorknob_physics STATIC
  matrix2.cpp
  matrix2.h
  vector2.cpp
  vector2.h)

target_include_directories(doorknob_physics PUBLIC ./)
