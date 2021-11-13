#pragma once
#include "Vector.h"

class Velocity
{
public:
    Velocity();
    Velocity(double m, Vector d);

    double magnitude() const;
    Vector direction() const;

private:
    double magnitude_;
    Vector direction_;
};