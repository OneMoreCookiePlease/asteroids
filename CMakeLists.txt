cmake_minimum_required(VERSION 3.0.0)
project(asteroids VERSION 0.1.0)

include(CTest)
enable_testing()

set(SFML_DIR "<sfml root prefix>/lib/cmake/SFML")

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(asteroids main.cpp game.cpp)
target_link_libraries(asteroids sfml-graphics sfml-audio)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
