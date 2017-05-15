cmake_minimum_required( VERSION 3.0 )
project( chifoumi )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )
add_executable( main.out src/main.cpp src/Random.cpp src/Random.hpp src/Chifoumi.cpp src/Chifoumi.hpp)
target_link_libraries( main.out ${PKG_LIBRARIES} )

add_executable(graph.out src/InterfaceGraphique.cpp src/Random.cpp src/Random.hpp src/Chifoumi.cpp src/Chifoumi.hpp)
target_link_libraries( graph.out ${PKG_LIBRARIES} )

# tests unitaires
find_package( PkgConfig REQUIRED )
pkg_check_modules( PKG REQUIRED cpputest )
include_directories( ${PKG_INCLUDE_DIRS} )
add_executable( main_test.out src/main_test.cpp )
target_link_libraries( main_test.out ${PKG_LIBRARIES} )

