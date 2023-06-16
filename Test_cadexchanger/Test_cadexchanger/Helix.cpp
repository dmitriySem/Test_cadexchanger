#include "Helix.h"




Helix::Helix(double Rx, double Ry, double Hz) {
    this->Rx = Rx;
    this->Ry = Ry;
    this->Hz = Hz;

    this->point = nullptr;
    this->pointFirstDerivative = nullptr;
};

Helix::~Helix()
{
    delete point;
    delete pointFirstDerivative;
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
    return getHz()*t; //шаг спирали???
}

//void Helix::setRx(double Rx)
//{
//    this->Rx = Rx;
//}
//
//void Helix::setRy(double Ry)
//{
//    this->Ry = Ry;
//}
//
//void Helix::setHz(double Hz)
//{
//    this->Hz = Hz;
//}

Point* Helix::getPoint(double t)
{
    return this->point =
        new Point(getX(t),getY(t), getZ(t));
}

Point* Helix::getFirstDerivative(double t)
{
    return this->pointFirstDerivative =
        new  Point(getFirstDerivativeX(t), getFirstDerivativeY(t), getFirstDerivativeZ(t));
}

double Helix::getFirstDerivativeX(double t)
{
    return -getRx()*sin(t);
}

double Helix::getFirstDerivativeY(double t)
{
    return getRy()*cos(t);
}

double Helix::getFirstDerivativeZ(double t)
{
    return getHz(); //шаг спирали???
}
