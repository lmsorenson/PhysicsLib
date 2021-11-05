#include <gtest/gtest.h>
#include "Fixture.h"
#include <PhysicsLib.h>

using ::test::Fixture;

/// First unit test
TEST_F(Fixture, test_1)
{
    double distance = free_fall_distance(1);
    ASSERT_EQ(1, 2);
}

