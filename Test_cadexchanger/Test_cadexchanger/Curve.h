#pragma once
#include "Point.h"


class Curve
{
public:
	virtual double getX(double t) = 0;
	virtual double getY(double t) = 0;
	virtual double getZ(double t) = 0;

	virtual double getFirstDerivativeX(double t) = 0;
	virtual double getFirstDerivativeY(double t) = 0;
	virtual double getFirstDerivativeZ(double t) = 0;


	virtual Point* getPoint() = 0;
	virtual Point* getFirstDerivative() = 0;
	
private:
	double X;
	double Y;
	double Z;

	Point* point;
	Point* DerivativePoint;	
};

