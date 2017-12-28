#pragma once

class Point2d
{
	double m_x;
	double m_y;
public:
	Point2d(double x=0.0,double y=0.0):m_x(x),m_y(y)
	{
	}

	void print();
	double distanceTo(const Point2d &p2);
	friend double distanceFrom(const Point2d &p1, const Point2d &p2);


};