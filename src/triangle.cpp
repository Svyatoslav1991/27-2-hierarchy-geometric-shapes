#include "..\include\triangle.h"

Triangle::Triangle(Coordinate coord, Color color, double side) : Figure(coord, color), m_side(side)
{

}

//------------------------------------------------------------------------------------------------------------

Triangle::~Triangle()
{

}

//------------------------------------------------------------------------------------------------------------

double Triangle::getArea() const
{
	return (sqrt(3.)/4 * pow(m_side, 2));
}

//------------------------------------------------------------------------------------------------------------


ResultRectangle Triangle::getDescriptiveRectangle() const
{
	ResultRectangle resRect;

	double halfSide = m_side / 2;

	resRect.topLeft.m_x = m_centr.m_x - halfSide;
	resRect.topLeft.m_y = m_centr.m_y + halfSide;

	resRect.topRight.m_x = m_centr.m_x + halfSide;
	resRect.topRight.m_y = m_centr.m_y + halfSide;

	resRect.bottomLeft.m_x = m_centr.m_x - halfSide;
	resRect.bottomLeft.m_y = m_centr.m_y - halfSide;

	resRect.bottomRight.m_x = m_centr.m_x + halfSide;
	resRect.bottomRight.m_y = m_centr.m_y - halfSide;

	return resRect;
}
