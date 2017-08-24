// LAB 2.3 rectangle area and perimeter
//Exercise 1: Using Lab 2.2 as an example, develop a program that will deter - mine the area and perimeter of a rectangle.The length and width can be given as constants. (LENGTH = 8 WIDTH = 3)
//Exercise 2 : Compile and run your program.Continue to work on it until you get the following output.
//The area of the rectangle is 24
//The perimeter of the rectangle is 22
// BRIAN VAN VLYMEN
#include <iostream>
using namespace std;

const int length = 8;
const int width = 3;

int area;
int perimeter;
int main()
{
	area = length * width;
	cout << "The area of the rectangle is " << area << endl;

	perimeter = (length + width) * 2;
	cout << "The perimeter of the rectangle " << perimeter << endl;

	system("PAUSE");
	return 0;
}
