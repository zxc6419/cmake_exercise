aux_source_directory(. src)
include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(demon1 ${src})
target_link_libraries(demon1 Mymath)

set_target_properties(demon1 PROPERTIES DEBUG_POSTFIX "_d")
install(TARGETS demon1 RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/bin)