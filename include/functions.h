#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <limits>

#include "coordinate.h"

//variable value input function
template <typename T>
T myCin() noexcept
{
    bool good = true;

    T variable;

    do
    {
        std::cout << "Enter the value of the variable: ";
        std::cin >> variable;

        good = std::cin.good();

        if (!good)
        {
            std::cout << "You entered something wrong\n";
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } while (!good);

    return variable;
}


enum class Color {none, red, blue, green};

Color chooseFigureColor() noexcept;
Coordinate chooseCentrCoordinate() noexcept;
std::string getStrColor(const Color& color) noexcept;


#endif// FUNCTIONS_H