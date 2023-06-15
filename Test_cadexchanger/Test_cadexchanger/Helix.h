#pragma once
#include "Curve.h"
#include <Math.h>

class Helix : public Curve
{
public:
	double getRx();
	double getRy();
	double getHz();

	double getX(double t);
	double getY(double t);
	double getZ(double t);

	double getFirstDerivativeX(double t);
	double getFirstDerivativeY(double t);
	double getFirstDerivativeZ(double t);

	void setRx(double Rx);
	void setRy(double Ry);
	void setHz(double Hz);

	Helix();
	~Helix();



	Point* getPoint(double t);
	Point* getFirstDerivative(double t);


	Helix(double Rx, double Ry, double Hz) {
		this->Rx = Rx;
		this->Ry = Ry;
		this->Hz = Hz;
	};



private:
	double Rx;
	double Ry;
	double Hz;

};

