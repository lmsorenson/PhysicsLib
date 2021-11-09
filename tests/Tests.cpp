#include <gtest/gtest.h>
#include "Fixture.h"
#include <PhysicsLib.h>
#include <cmath>

using ::test::Fixture;

/// First unit test
TEST_F(Fixture, free_fall_distance_1)
{
    double distance = free_fall_distance(4, { 0, 0, 0 }, -9.8);

    /// Answer is a negative distance of -78.4
    ASSERT_EQ(distance, -78.4);
}

TEST_F(Fixture, velocity_at_time_interval_1)
{
    double velocity = velocity_at_time_interval(4, { 0, 0, 0 }, -9.8);

    /// Answer is a negative velocity of 39.2
    ASSERT_EQ(velocity, -39.2);
}

TEST_F(Fixture, free_fall_distance_2)
{
    double distance = free_fall_distance(2.3, { 0, 0, 0,22.563 });

    /// Rounded answer is a distance of -26
    ASSERT_EQ(ceil(distance), 26);
}

TEST_F(Fixture, velocity_at_time_interval_2)
{
    double velocity = velocity_at_time_interval(2.3, { 0, 0, 0, 22.563 });

    /// Answer is a velocity of 0
    ASSERT_EQ(velocity, 0);
}