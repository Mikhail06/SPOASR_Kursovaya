cmake_minimum_required(VERSION 3.0.2)
project(kursovaya)

## Find catkin macros and libraries
find_package(catkin REQUIRED COMPONENTS roscpp)

## The catkin_package macro generates cmake config files for your package
catkin_package()

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(${catkin_INCLUDE_DIRS})

## Declare a C++ executable
add_executable(spawner src/spawner.cpp)
add_executable(translator src/translator.cpp)

## Specify libraries to link a library or executable target against
 target_link_libraries(spawner ${catkin_LIBRARIES} )
 target_link_libraries(translator ${catkin_LIBRARIES} )
