#include <PhysicsLib.h>
#include <cmath>

double free_fall_distance(double t, Velocity v, double a)
{
    /// Calculate distance -
    /// d = vi * t + 1/2 * a * t^2
    double d = v.direction.z * t + 0.5 * a * pow(t, 2);

    return d;
}

double velocity_at_time_interval(double t, Velocity v, double a)
{
    /// Calculate final velocity.
    /// vf = vi + a * t
    double vF = v.direction.z + a * t;

    return vF;
}