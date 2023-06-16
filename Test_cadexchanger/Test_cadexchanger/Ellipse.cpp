#include "Ellipse.h"

Ellipse::~Ellipse()
{

}

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

double Ellipse::getFirstDerivativeX(double t)
{
    return -getRx()*sin(t);
}

double Ellipse::getFirstDerivativeY(double t)
{
    return getRy()*cos(t);
}

double Ellipse::getFirstDerivativeZ(double t)
{
    return 0.0;
}
