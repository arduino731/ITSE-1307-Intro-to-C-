// LAB 2.2 working with constants, variables and arithmetic operators
// This program will output the circumference and area
// of the circle with a given radius.

// BRIAN VAN VLYMEN
#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

float circumference;
float area;

// int circumference; 33 
// int area; 91

int main()
{
	circumference = 2 * PI * RADIUS;
	cout << "The circumference of the circle is " << circumference << endl;
	
	area = PI * RADIUS * RADIUS;
	cout << "The area of the circle is " << area << endl;

	system("PAUSE");
	return 0;
}
