#pragma once

class Vector
{
public:
    Vector(double m);
    Vector(double x, double y, double z);

    [[nodiscard]] Vector normalized() const;
    [[nodiscard]] double length() const;
    [[nodiscard]] double x() const, y() const, z() const;

private:
    double x_, y_, z_;
};