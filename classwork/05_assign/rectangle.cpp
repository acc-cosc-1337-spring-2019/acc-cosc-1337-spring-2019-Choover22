#include "rectangle.h"
#include <vector>
#include <iostream>
/*
Write the class function code for the Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

Rectangle::Rectangle(int length, int w) : height(length), width(w)
{
	calculate_area();
}
double Rectangle::get_area() const
{
	return area;
}
void Rectangle::calculate_area()
{
	area = width * height;
	
}

