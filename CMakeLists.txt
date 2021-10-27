cmake_minimum_required(VERSION 3.5)

project(physicslib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(include ${PROJECT_BINARY_DIR}/include/)
add_subdirectory(src ${PROJECT_BINARY_DIR}/src/)
add_subdirectory(libs ${PROJECT_BINARY_DIR}/libs/)
add_subdirectory(tests ${PROJECT_BINARY_DIR}/tests/)

SET(TGT_SOURCES ${TGT_SOURCES} ${SOURCE_INCLUDES})

add_library(physics ${TGT_SOURCES} ${TGT_INCLUDES})

target_include_directories(physics
        PUBLIC ${PROJECT_SOURCE_DIR}/include/PhysicsLib/
        PUBLIC ${PROJECT_SOURCE_DIR}/src/Public/
        PRIVATE ${PROJECT_SOURCE_DIR}/src/Private/)

install(TARGETS physics DESTINATION lib)
install(FILES ${PHYSICS_LIB_INCLUDES} DESTINATION include)





