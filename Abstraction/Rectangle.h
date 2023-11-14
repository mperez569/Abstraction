#pragma once
#include "Shape.h"

//the Rectangle Class becomes a sub class/ derived class of the Shape Class
//It inherits the attributes of the Parent Class (Shape)

class Rectangle : public Shape
{
public:
	double Shape::CalcArea();
};
