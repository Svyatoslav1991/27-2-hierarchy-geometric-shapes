#pragma once
#include "coordinate.h"
#include <iostream>

struct ResultRectangle
{
	Coordinate topLeft;
	Coordinate topRight;
	Coordinate bottomLeft;
	Coordinate bottomRight;

	friend std::ostream& operator<<(std::ostream& os, const ResultRectangle& resRect);
};