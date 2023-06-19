#include "..\include\coordinate.h"

Coordinate::Coordinate() : m_x(0), m_y(0)
{

}

//----------------------------------------------------------------------

Coordinate::Coordinate(double x, double y) : m_x(x), m_y(y)
{
}

//----------------------------------------------------------------------

std::ostream& operator<<(std::ostream& os, const Coordinate& coord)
{
	os << "(" << coord.m_x << ", " << coord.m_y << ")";
	return os;
}
