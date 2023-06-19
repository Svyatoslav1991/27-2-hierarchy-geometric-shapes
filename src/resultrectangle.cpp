#include "..\include\resultrectangle.h"

std::ostream& operator<<(std::ostream& os, const ResultRectangle& resRect)
{
	os << resRect.topLeft << ", " << resRect.topRight << ", " << resRect.bottomRight << ", " << resRect.bottomLeft;
	return os;
}