#pragma once
class Point
{
public:
	double* getCoord();
	Point(double x, double y, double z);
	~Point();

private:
	double coord[3];
};

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