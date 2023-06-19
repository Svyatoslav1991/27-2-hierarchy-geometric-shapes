#pragma once
#include <iostream>

struct Coordinate
{
	Coordinate();
	Coordinate(double x, double y);
	double m_x;
	double m_y;

	friend std::ostream& operator<<(std::ostream& os, const Coordinate& coord);
};