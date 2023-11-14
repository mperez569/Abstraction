#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main()
{
    Rectangle rect;
    Triangle tri;

    rect.setSideA(20);
    rect.setSideB(10);

    tri.setSideA(10);
    tri.setSideB(4);

    cout << "The area of the Rectangle is " << rect.CalcArea() << endl;
    cout << "The area of the Triangle is " << tri.CalcArea() << endl;
}