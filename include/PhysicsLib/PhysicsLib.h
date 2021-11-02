#pragma once

struct Vector
{
    double x, y, z;
};

struct Velocity
{
    double magnitude;
    Vector direction;
};

/// Get the distance an object will fall in a given amount of time.
/// \param t The fall time. (s)
/// \param v The initial velocity of the object.
/// \param g The acceleration due to gravity. (m/s^2)
/// \return The projected distance an object would fall in the given time frame.
double free_fall_distance(double t, Velocity v = {}, double g = 9.81);