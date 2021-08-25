# CMakeList.txt : CMake project for PatternSingleton, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

set (HEADERS 
	
	"Singleton.h"
)

set (SOURCES 
	"PatternSingleton.cpp"
	"Singleton.cpp" 
)

# Add source to this project's executable.
add_executable (PaternSingleton ${HEADERS} ${SOURCES})
