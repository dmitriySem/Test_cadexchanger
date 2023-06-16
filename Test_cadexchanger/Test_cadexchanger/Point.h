#pragma once
class Point
{
public:

	Point(double x, double y, double z);
	~Point();

	void setX(double x);
	void setY(double y);
	void setZ(double z);

	double getX();
	double getY();
	double getZ();

private:
	double coord[3];
};

