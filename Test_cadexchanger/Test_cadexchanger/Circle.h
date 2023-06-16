#pragma once
#include "Helix.h"

class Circle : public Helix
{

public:
	Circle();
	~Circle();

	double getX(double t);
	double getY(double t);
	double getZ(double t);

	double getFirstDerivativeX(double t);
	double getFirstDerivativeY(double t);
	double getFirstDerivativeZ(double t);

};

