CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(exercise2)
SET(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})
ADD_SUBDIRECTORY(src bin)
INSTALL(FILES README DESTINATION bin)