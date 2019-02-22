#include "rectangle.h"
#include<iostream>
#include <vector>
using std::cout;
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

Iterate the vector and display the Area for each Rectangle on one line and the total area for the 
3 rectangles.
*/
int main() 
{
	auto total = 0;
	std::vector<Rectangle> Rectangles;
	Rectangles.push_back(Rectangle(4, 5));
	Rectangles.push_back(Rectangle(10, 10));
	Rectangles.push_back(Rectangle(100, 10));

	for (Rectangle r : Rectangles)
	{
		std::cout << r.get_area();
		total = total + r.get_area();
	}
	cout << "The total area is" << total;
	return 0;
}


