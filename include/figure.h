#pragma once
#include "functions.h"
#include "coordinate.h"
#include "resultrectangle.h"

class Figure {

public:
	Figure();
	Figure(Coordinate coord, Color color);

	virtual ~Figure() = 0;
	virtual double getArea() const = 0;
	virtual ResultRectangle getDescriptiveRectangle() const = 0;
	Color getColor() const;

protected:
	Coordinate m_centr;
	Color m_color;
};