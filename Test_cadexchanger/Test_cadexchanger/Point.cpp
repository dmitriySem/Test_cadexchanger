#include "Point.h"


Point::Point(double x, double y, double z)
{
	this->coord[0] = x;
	this->coord[1] = y;
	this->coord[2] = z;
}

Point::~Point()
{
	delete coord;
}

void Point::setX(double x)
{
	coord[0] = x;
}

void Point::setY(double y)
{
	coord[1] = y;
}

void Point::setZ(double z)
{
	coord[2] = z;
}

double Point::getX()
{
	return coord[0];
}

double Point::getY()
{
	return coord[1];
}

double Point::getZ()
{
	return coord[2];
}

