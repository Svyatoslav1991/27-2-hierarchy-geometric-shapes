#pragma once
#include "figure.h"

class Triangle final : public Figure
{
public:
	Triangle(Coordinate coord, Color color, double side);
	virtual ~Triangle() override;
	virtual double getArea() const override;
	virtual ResultRectangle getDescriptiveRectangle() const override;

private:
	double m_side;
};