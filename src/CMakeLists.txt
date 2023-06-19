cmake_minimum_required (VERSION 3.8)

project ("27-2-hierarchy-geometric-shapes")


set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(27-2-hierarchy-geometric-shapes main.cpp ${MY_INCLUDE_DIR}/functions.h "functions.cpp" ${MY_INCLUDE_DIR}/figure.h "figure.cpp" ${MY_INCLUDE_DIR}/coordinate.h  "coordinate.cpp" ${MY_INCLUDE_DIR}/circle.h "circle.cpp" ${MY_INCLUDE_DIR}/rectangle.h "rectangle.cpp" ${MY_INCLUDE_DIR}/triangle.h "triangle.cpp" ${MY_INCLUDE_DIR}/square.h  "square.cpp" ${MY_INCLUDE_DIR}/resultrectangle.h  "resultrectangle.cpp")

target_include_directories(27-2-hierarchy-geometric-shapes PUBLIC ${CMAKE_SOURCE_DIR}/include)