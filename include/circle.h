#pragma once
#include "figure.h"

class Circle final : public Figure
{
public:
	Circle(Coordinate centr, Color color, double radius);
	virtual ~Circle() override;
	virtual double getArea() const override;
	virtual ResultRectangle getDescriptiveRectangle() const override;

private:
	double m_radius;
};