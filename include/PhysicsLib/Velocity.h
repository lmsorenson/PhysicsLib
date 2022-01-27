#pragma once
#include "Vector.h"

class Velocity
{
public:
    Velocity();
    Velocity(double m, Vector d);

    [[nodiscard]] double magnitude() const;
    [[nodiscard]] Vector direction() const;

private:
    double magnitude_;
    Vector direction_;
};