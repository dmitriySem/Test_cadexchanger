#include "Helix.h"



Helix::Helix()
{
}

Helix::~Helix()
{

}

double Helix::getRx()
{
    return Rx;
}

double Helix::getRy()
{
    return Ry;
}

double Helix::getHz()
{
    return Hz;
}

double Helix::getX(double t)
{

    return getRx()*cos(t);
}

double Helix::getY(double t)
{
    return getRy()*sin(t);
}

double Helix::getZ(double t)
{    
    return getHz()*t;
}

void Helix::setRx(double Rx)
{
    this->Rx = Rx;
}

void Helix::setRy(double Ry)
{
    this->Ry = Ry;
}

void Helix::setHz(double Hz)
{
    this->Hz = Hz;
}

Point* Helix::getPoint(double t)
{
    //Point* pt = new Point(getX() );
    return nullptr;
}

Point* Helix::getFirstDerivative(double t)
{
    return nullptr;
}
