#include <Vector.h>
#include <cmath>

Vector::Vector(double m)
: x_(m)
, y_(m)
, z_(m)
{
}

Vector::Vector(double x, double y, double z)
: x_(x)
, y_(y)
, z_(z)
{
}

Vector Vector::normalized() const
{
    double length = this->length();

    if (length == 0)
        return {0};

    /// To normalize a vector divide all vector components by the vector length.
    return {x_ / length, y_ / length, z_ / length};
}

double Vector::length() const
{
    /// Take the sum of all components squared.
    double result = pow(x_, 2) + pow(y_, 2) + pow(z_, 2);

    /// Square the result
    return sqrt(result);
}

double Vector::x() const { return x_; }
double Vector::y() const { return y_; }
double Vector::z() const { return z_; }