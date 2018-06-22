cmake_minimum_required( VERSION 3.1 )

set( PROJECT_NAME SomeClassVer2 )
project( ${PROJECT_NAME} )

include( CTest )

include_directories( ./ )

set ( SOURCES
	main.cpp
)

add_executable( ${PROJECT_NAME} ${SOURCES} )

target_link_libraries( ${PROJECT_NAME} )

add_test( example_test ${PROJECT_NAME} )
