#pragma once
class Shape
{
public:
	virtual double CalcArea() = 0;
	void setSideA(double);
	void setSideB(double);

protected:
	double sideA;
	double sideB;

};

