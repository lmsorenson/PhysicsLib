
# Create an executable to run unit tests.
add_executable(physics_lib_tests Fixture.h Tests.cpp ${SUBMODULE_INCLUDES})

# Link gtest
target_link_libraries(physics_lib_tests gtest gtest_main)

# APPEND TEST INCLUDES
SET(PHYSICS_LIB_INCLUDES ${PHYSICS_LIB_INCLUDES} ${TEST_INCLUDES} PARENT_SCOPE)