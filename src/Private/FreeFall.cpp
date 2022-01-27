#include <FreeFall.h>
#include <cmath>

double free_fall_distance(double t, Velocity v, double a)
{
    double initial_velocity = v.direction().z() * v.magnitude();

    /// Calculate distance -
    /// d = vi * t + 1/2 * a * t^2
    double d = initial_velocity * t + 0.5 * a * pow(t, 2);

    return d;
}

Velocity velocity_at_time_interval(double t, Velocity v, double a)
{
    double initial_velocity = v.direction().z() * v.magnitude();

    /// Calculate the magnitude of final velocity.
    /// vf = vi + a * t
    double v_f = initial_velocity + a * t;

    double m = abs(v_f);

    return { m, Vector( 0, 0, v_f)};
}