#include <iostream>
#include "functions.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include "square.h"


int main() {
	std::cout << "\tTASK 27.2 Hierarchy of geometric shapes\n";
	
	Figure* pFiqure = nullptr;

	int64_t choice;
	Coordinate centr;
	Color color = Color::none;

	std::string selectedFigureStr;

	do
	{
		std::cout << "\nEnter 1 to choose circle\n";
		std::cout << "Enter 2 to choose triangle\n";
		std::cout << "Enter 3 to choose square\n";
		std::cout << "Enter 4 to choose rectangle\n";
		std::cout << "Enter 9 to quit programm\n";

		choice = myCin<int64_t>();

		if (pFiqure)
		{
			delete pFiqure;
			pFiqure = nullptr;
		}

		if (choice > 0 && choice < 5)
		{
			color = chooseFigureColor();
			centr = chooseCentrCoordinate();
		}
		
		switch (choice)
		{
		case 1:
		{
			selectedFigureStr = "CIRCLE";
			double radius;
			do
			{
				std::cout << "Enter the radius of the circle (>0)\n";
				radius = myCin<double>();
			} while (radius <= 0);

			pFiqure = new Circle(centr, color, radius);
			
		}
			break;
		case 2:
		{
			selectedFigureStr = "TRIANGLE";
			double side;
			do
			{
				std::cout << "Enter the side length of an equilateral triangle (>0)\n";
				side = myCin<double>();
			} while (side <= 0);
			pFiqure = new Triangle(centr, color, side);
		}
			break;
		case 3:
		{
			selectedFigureStr = "SQUARE";
			double side;
			do
			{
				std::cout << "Enter the side length of a square (>0)\n";
				side = myCin<double>();
			} while (side <= 0);
			pFiqure = new Square(centr, color, side);
		}
			break;
		case 4:
		{
			selectedFigureStr = "RECTANGLE";
			double width, length;
			do
			{
				std::cout << "Enter the width of a rectangle (>0)\n";
				width = myCin<double>();
			} while (width <= 0);

			do
			{
				std::cout << "Enter the length of a rectangle (>" << width << ")\n";
				length = myCin<double>();
			} while (length <= width);
			pFiqure = new Rectangle(centr, color, width, length);
		}
			break;
		default:
			break;
		}

		if (choice > 0 && choice < 5)
		{
			std::cout << "\nInformation about the selected figure: " << selectedFigureStr << "\n";

			std::cout << "The color of the figure is " << getStrColor(pFiqure->getColor()) << "\n";
			std::cout << "The area of the figure is " << pFiqure->getArea() << "\n";
			ResultRectangle resRect = pFiqure->getDescriptiveRectangle();
			std::cout << "The shape can fit into a minimum rectangle with a coordinates: " << resRect << "\n";
		}

	} while (choice != 9);


	return 0;
}