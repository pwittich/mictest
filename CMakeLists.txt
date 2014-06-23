# The name of our project is "HELLO". CMakeLists files in this project can 
# refer to the root source directory of the project as ${HELLO_SOURCE_DIR} and 
# to the root binary directory of the project as ${HELLO_BINARY_DIR}. 
cmake_minimum_required (VERSION 2.6) 
project (mictest) 

# cmake -GXcode -DCMAKE_MODULE_PATH=`pwd`

# Recurse into the "Hello" and "Demo" subdirectories. This does not actually 
# cause another cmake executable to run. The same process will walk through 
# the project's entire directory structure. 
#add_subdirectory (Hello) 
#add_subdirectory (Demo)
#add_subdirectory (Math)

# needs FindROOT.cmake, which comes with ROOT and has been copied into the project
find_package(ROOT REQUIRED)

include_directories(${ROOTSYS}/include)

file(GLOB sources ${PROJECT_SOURCE_DIR}/*.cc)
file(GLOB headers ${PROJECT_SOURCE_DIR}/.hh)

set(SRCS main main.cc Track.cc Hit.cc Matrix.cc KalmanUtils.cc Propagation.cc Simulation.cc buildtest.cc fittest.cc  )


set(HEADERS Track.h Hit.h Matrix.h KalmanUtils.h Propagation.h Simulation.h)

include_directories( ${mictest_SOURCE_DIR})

# this is the main executable for testing the tracking
add_executable (main ${SRCS} ${HEADERS} )
target_link_libraries(main ${ROOT_LIBRARIES})


