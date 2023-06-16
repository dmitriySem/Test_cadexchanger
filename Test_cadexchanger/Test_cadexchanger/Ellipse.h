#pragma once
#include "Helix.h"


class Ellipse : public Helix
{
public:
	Ellipse(double Rx, double Ry) : Helix(Rx, Ry, 0)
	{

		//this->Rx = Rx;
		//this->Ry = Ry;
		//this->Hz = 0;

		//this->point = nullptr;
		//this->pointFirstDerivative = nullptr;

	};

	~Ellipse();

	double getX(double t);
	double getY(double t);
	double getZ(double t);

	double getFirstDerivativeX(double t);
	double getFirstDerivativeY(double t);
	double getFirstDerivativeZ(double t);

};

