#include <gtest/gtest.h>
#include "Fixture.h"
#include <FreeFall.h>
#include <cmath>

using ::test::Fixture;

/// First unit test
TEST_F(Fixture, free_fall_distance_1)
{
    double distance = free_fall_distance(4, Velocity(), -9.8);

    /// Answer is a negative distance of -78.4
    ASSERT_EQ(distance, -78.4);
}

TEST_F(Fixture, velocity_at_time_interval_1)
{
    Velocity velocity = velocity_at_time_interval(4, Velocity(), -9.8);

    auto val = velocity.direction().z() * velocity.magnitude();
    /// Answer is a negative velocity of 39.2
    ASSERT_EQ(val, -39.2);
}

TEST_F(Fixture, free_fall_distance_2)
{
    Vector dir = Vector(0, 0, 22.563);
    double distance = free_fall_distance(2.3, Velocity(22.563, dir));

    double val = ceil(distance);
    /// Rounded answer is a distance of -26
    ASSERT_EQ(val, 26);
}

TEST_F(Fixture, velocity_at_time_interval_2)
{
    Vector dir = Vector(0, 0, 22.563);
    Velocity velocity = velocity_at_time_interval(2.3, Velocity(22.563, dir));

    /// Answer is a velocity of 0
    ASSERT_EQ(velocity.direction().z() * velocity.magnitude(), 0);
}