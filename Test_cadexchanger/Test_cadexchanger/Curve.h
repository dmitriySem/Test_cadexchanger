#pragma once
#include "Point.h"


class Curve
{
public:
	virtual Point* getPoint(double t) = 0;
	virtual Point* getFirstDerivative(double t) = 0;
	virtual double getX(double t) = 0;
	virtual double getY(double t) = 0;
	virtual double getZ(double t) = 0;
};

