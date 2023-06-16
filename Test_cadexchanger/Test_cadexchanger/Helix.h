#pragma once
#include "Curve.h"
#include <Math.h>

class Helix : public Curve
{
public:
	double getRx();
	double getRy();
	double getHz();

	Point* getPoint(double t);
	double getX(double t);
	double getY(double t);
	double getZ(double t);

	Point* getFirstDerivative(double t);
	double getFirstDerivativeX(double t);
	double getFirstDerivativeY(double t);
	double getFirstDerivativeZ(double t);

	//void setRx(double Rx);
	//void setRy(double Ry);
	//void setHz(double Hz);

	Helix(double Rx, double Ry, double Hz);
	~Helix();


private:
	double Rx;
	double Ry;
	double Hz;

	Point* point;
	Point* pointFirstDerivative;

};

