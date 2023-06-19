#include "..\include\square.h"

Square::Square(Coordinate coord, Color color, double side) : Figure(coord, color), m_side(side)
{

}

//------------------------------------------------------------------------------------------------------------

Square::~Square()
{

}

//------------------------------------------------------------------------------------------------------------

double Square::getArea() const
{
	return pow(m_side, 2);
}

//------------------------------------------------------------------------------------------------------------


ResultRectangle Square::getDescriptiveRectangle() const
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