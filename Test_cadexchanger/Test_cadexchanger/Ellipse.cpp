#include "Ellipse.h"

double Ellipse::getX(double t)
{
    return getRx()*cos(t);
}

double Ellipse::getY(double t)
{
    return getRy()*sin(t);
}

double Ellipse::getZ(double t)
{
    return 0.0;
}
