add_library(doorknob_physics STATIC
  aabb.cpp
  aabb.h
  
  body.h
  broadphase.cpp
  broadphase.h
  debughelper.cpp
  debughelper.h
  geometry.cpp
  geometry.h
  matrix2.cpp
  matrix2.h
  vector2.cpp
  vector2.h

  world.h
  )

target_include_directories(doorknob_physics PUBLIC ./)
