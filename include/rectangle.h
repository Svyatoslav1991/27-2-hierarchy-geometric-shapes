#pragma once
#include "figure.h"

class Rectangle final : public Figure{
public:
	Rectangle(Coordinate centr, Color color, double width, double length);
	virtual ~Rectangle() override;
	virtual double getArea() const override;
	virtual ResultRectangle getDescriptiveRectangle() const override;

private:
	double m_width;
	double m_length;
};