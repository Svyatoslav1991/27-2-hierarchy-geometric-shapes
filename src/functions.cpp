#include "..\include\functions.h"

Color chooseFigureColor() noexcept
{
	int64_t colorResult;
	do
	{
		std::cout << "Figure color (0 - 3)";
		std::cout << "Enter 0 - None\n";
		std::cout << "Enter 1 - red\n";
		std::cout << "Enter 2 - blue\n";
		std::cout << "Enter 3 - green\n";
		colorResult = myCin<int64_t>();
	} while (colorResult < 0 || colorResult > 3);

	switch (colorResult)
	{
	case 0:
		return Color::none;
	case 1:
		return Color::red;
	case 2:
		return Color::blue;
	case 3:
		return Color::green;
	default:
		break;
	}

	return Color::none;
}

//--------------------------------------------------------------------------------------------------

Coordinate chooseCentrCoordinate() noexcept
{
	Coordinate centr;
	std::cout << "\nCenter coordinates\n";

	std::cout << "Enter coordinate x\n";
	centr.m_x = myCin<double>();

	std::cout << "Enter coordinate y\n";
	centr.m_y = myCin<double>();

	return centr;
}

//--------------------------------------------------------------------------------------------------

std::string getStrColor(const Color& color) noexcept
{
	switch (color)
	{
	case Color::blue:
		return "blue";
	case Color::red:
		return "red";
	case Color::green:
		return "green";
	default:
		return "none";
	}
}