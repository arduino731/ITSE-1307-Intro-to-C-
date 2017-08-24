#include <iostream>
#include <iomanip>
using namespace std;
// This program uses a structure to hold data about a rectangle
// It calculates the area and perimeter of a box
// BRIAN VAN VLYMEN 

// Fill in code to declare a structure named dimensions that
// contains 2 float members, length and width
struct dimensions {
	float length;
	float width;
};
// Fill in code to declare a structure named rectangle that contains
// 3 members, area, perimeter, and sizes. area and perimeter should be
// floats, whereas sizes should be a dimensions structure variable
struct results {
	float area;
	float perimeter;
};
struct rectangle {
	dimensions sizes;
	results result;
};

float computeArea(float l, float w);
float computePerimeter(float l2, float w2);


int main()
{
	// Fill in code to define a rectangle structure variable named box.
	rectangle box;
	cout << "Enter the length of a rectangle: ";
	// Fill in code to read in the length to the appropriate location
	cin >> box.sizes.length;
	cout << "Enter the width of a rectangle: ";
	// Fill in code to read in the width to the appropriate location
	cin >> box.sizes.width;
	cout << endl << endl;
	// Fill in code to compute the area and store it in the appropriate
	// location
	box.result.area = box.sizes.length * box.sizes.width;
	// Fill in code to compute the perimeter and store it in the
	// appropriate location
	box.result.perimeter = 2 * (box.sizes.length + box.sizes.width);

	cout << fixed << showpoint << setprecision(2);
	cout << "The area of the rectangle is " << computeArea(box.sizes.length, box.sizes.width) << endl;
	cout << "The perimeter of the rectangle is " << computePerimeter(box.sizes.length, box.sizes.width) << endl;
	
	system("pause");
	return 0;
}

float computeArea(float length, float width)
{
	return length * width;
}
float computePerimeter(float length2, float width2) {
	return 2 * (length2 + width2);
}
