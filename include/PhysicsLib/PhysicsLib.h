#pragma once
#include "Velocity.h"
#include "Force.h"

/// Get the distance an object will fall in a given amount of time.
/// d = vi * t + 1/2 * a * t^2
/// \param t The fall time. (s)
/// \param v The initial velocity of the object. (m/s)
/// \param g The acceleration due to gravity. (m/s^2) Adjustable Constant
/// \param m The mass of the object. (kg) Adjustable Constant
/// \param C air drag constant. (Sphere is 0.45) Adjustable Constant
/// \param rho density of air. (kg/m^3) Adjustable Constant
/// \param A cross sectional area of the falling object. (m/s^2) (pi * r^2)
/// \return The projected distance an object would fall in the given time frame.
double free_fall_distance(double t, Velocity v = {}, double g = 9.81);

/// Get the velocity of an object after falling a given amount of time.
/// \param t The fall time. (s)
/// \param v The initial velocity of the object. (m/s)
/// \param g The acceleration due to gravity. (m/s^2)
/// \return The projected velocity an object would be traveling after a given amount of time.
double velocity_at_time_interval(double t, Velocity v = {}, double g = 9.81);