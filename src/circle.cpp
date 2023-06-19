#include "..\include\circle.h"

#define _USE_MATH_DEFINES
#include <math.h>


Circle::Circle(Coordinate centr, Color color, double radius) : Figure(centr, color), m_radius(radius)
{

}

//---------------------------------------------------------------------------------------------------------

Circle::~Circle()
{

}

//---------------------------------------------------------------------------------------------------------

double Circle::getArea() const
{
	return M_PI * pow(m_radius, 2);
}

//---------------------------------------------------------------------------------------------------------

ResultRectangle Circle::getDescriptiveRectangle() const
{
	ResultRectangle resRect;

	resRect.topLeft.m_x = m_centr.m_x - m_radius;
	resRect.topLeft.m_y = m_centr.m_y + m_radius;

	resRect.topRight.m_x = m_centr.m_x + m_radius;
	resRect.topRight.m_y = m_centr.m_y + m_radius;

	resRect.bottomLeft.m_x = m_centr.m_x - m_radius;
	resRect.bottomLeft.m_y = m_centr.m_y - m_radius;

	resRect.bottomRight.m_x = m_centr.m_x + m_radius;
	resRect.bottomRight.m_y = m_centr.m_y - m_radius;

	return resRect;
}