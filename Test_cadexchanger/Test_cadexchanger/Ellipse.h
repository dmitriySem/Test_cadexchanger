#pragma once
#include "Helix.h"


class Ellipse : public Helix
{
public:
	Ellipse(double Rx, double Ry)
	{

		this->Rx = Rx;
		this->Ry = Ry;
		this->Hz = 0;

	};

	~Ellipse();

	double getX(double t);
	double getY(double t);
	double getZ(double t);

	double getFirstDerivativeX(double t);
	double getFirstDerivativeY(double t);
	double getFirstDerivativeZ(double t);

private:
	double Rx;
	double Ry;
	double Hz;

	
};

