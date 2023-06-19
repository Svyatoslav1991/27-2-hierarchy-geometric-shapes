#pragma once
#include "figure.h"

class Square final : public Figure
{
public:
	Square(Coordinate coord, Color color, double side);
	virtual ~Square() override;
	virtual double getArea() const override;
	virtual ResultRectangle getDescriptiveRectangle() const override;

private:
	double m_side;
};
