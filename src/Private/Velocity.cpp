#include <Velocity.h>

Velocity::Velocity()
: magnitude_( 0 )
, direction_(0)
{
}

Velocity::Velocity(double m, Vector d)
: magnitude_(m)
, direction_(d)
{
}

Vector Velocity::direction() const
{
    return direction_.normalized();
}

double Velocity::magnitude() const
{
    return magnitude_;
}