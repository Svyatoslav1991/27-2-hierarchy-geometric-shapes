#include "..\include\figure.h"

Figure::Figure() : m_centr(Coordinate()), m_color(Color::none)
{

}

//------------------------------------------------------------------------------------

Figure::~Figure()
{

}

//------------------------------------------------------------------------------------

Figure::Figure(Coordinate coord, Color color) : m_centr(coord), m_color(color)
{

}

//------------------------------------------------------------------------------------

Color Figure::getColor() const
{
	return m_color;
}