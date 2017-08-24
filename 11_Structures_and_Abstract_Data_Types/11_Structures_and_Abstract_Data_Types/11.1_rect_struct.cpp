#include <iostream>
#include <iomanip>
using namespace std;
// This program uses a structure to hold data about a rectangle
// BRIAN VAN VLYMEN 
// Fill in code to declare a structure named rectangle which has
// members length, width, area, and perimeter all of which are floats 

struct rectangle {
	float length;
	float width;
	float area;
	float perimeter;
};



int main()
{
	// Fill in code to define a rectangle variable named box
	rectangle box; 
	cout << "Enter the length of a rectangle: "; 
	// Fill in code to read in the length member of box
	cin >> box.length;
	cout << "Enter the width of a rectangle: ";
		// Fill in code to read in the width member of box
	cin >> box.width;
	cout << endl << endl;
	// Fill in code to compute the area member of box
	box.area = box.width * box.length;
	// Fill in code to compute the perimeter member of box
	box.perimeter = 2 * (box.width + box.length);
	cout << fixed << showpoint << setprecision(2);
	// Fill in code to output the area with an appropriate message
	cout << "The area of the rectangle is " << box.area << endl;
	
	// Fill in code to output the perimeter with an appropriate message
	cout << "The perimeter of the recangle is " << box.perimeter << endl;

	if (box.length == box.width) {
		cout << "The rectangle is a square.\n";
	}
	else
	{
		cout << "The rectangle is not a square.\n";
	}


	system("pause");
	return 0;
}