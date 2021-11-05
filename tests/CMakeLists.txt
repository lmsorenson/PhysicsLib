
# Create an executable to run unit tests.
add_executable(physics_lib_tests Fixture.h Tests.cpp ${SUBMODULE_INCLUDES})

# Link gtest
target_link_libraries(physics_lib_tests physics gtest gtest_main)

target_include_directories(physics_lib_tests PUBLIC ${TGT_INCLUDES})