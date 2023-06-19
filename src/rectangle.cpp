#include "..\include\rectangle.h"

Rectangle::Rectangle(Coordinate centr, Color color, double width, double length) : Figure(centr, color)
{
	if (width > length)
	{
		std::swap(width, length);
	}

	m_width = width;
	m_length = length;
}

//--------------------------------------------------------------------------------------------------------------------------------------------

Rectangle::~Rectangle()
{

}

//--------------------------------------------------------------------------------------------------------------------------------------------

double Rectangle::getArea() const
{
	return m_width * m_length;
}

//--------------------------------------------------------------------------------------------------------------------------------------------

ResultRectangle Rectangle::getDescriptiveRectangle() const
{
	ResultRectangle resRect;

	double halfWidth = m_width / 2;
	double halfLength = m_length / 2;

	resRect.topLeft.m_x = m_centr.m_x - halfWidth;
	resRect.topLeft.m_y = m_centr.m_y + halfLength;

	resRect.topRight.m_x = m_centr.m_x + halfWidth;
	resRect.topRight.m_y = m_centr.m_y + halfLength;

	resRect.bottomLeft.m_x = m_centr.m_x - halfWidth;
	resRect.bottomLeft.m_y = m_centr.m_y - halfLength;

	resRect.bottomRight.m_x = m_centr.m_x + halfWidth;
	resRect.bottomRight.m_y = m_centr.m_y - halfLength;

	return resRect;
}

//--------------------------------------------------------------------------------------------------------------------------------------------