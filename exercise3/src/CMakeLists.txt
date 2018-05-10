aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR}/Mymath src)
include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(Mymath SHARED ${src})
add_library(Mymath_static STATIC ${src})

set_target_properties(Mymath_static PROPERTIES OUTPUT_NAME "Mymath_static")
set_target_properties(Mymath PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(Mymath_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(Mymath PROPERTIES DEBUG_POSTFIX "_d")
set_target_properties(Mymath_static PROPERTIES DEBUG_POSTFIX "_d")

install(TARGETS Mymath 
	RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/bin
	LIBRARY DESTINATION ${PROJECT_SOURCE_DIR}/lib
	ARCHIVE DESTINATION ${PROJECT_SOURCE_DIR}/lib)
install(TARGETS Mymath_static ARCHIVE DESTINATION ${PROJECT_SOURCE_DIR}/lib)