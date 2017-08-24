// (Only 13.1 - Squares).
// This program declares the Square class and uses member functions to find
// the perimeter and area of the square
#include <iostream>
using namespace std;
// FILL IN THE CODE TO DECLARE A CLASS CALLED Square. TO DO THIS SEE
// THE IMPLEMENTATION SECTION.

class Square {
public:
	Square(float side_sqaure);
	Square(); // Default constructor
	~Square(); // Destructor
	
	void setSide(float side_set);
	
	float findArea();
	float findPerimeter();
private:
	float side;

};

int main()
{
	Square box;			 // box is defined as an object of the Square class
	Square box1(9);		 // give a value to the constructor 
	float size;			 // size contains the length of a side of the square
						// FILL IN THE CLIENT CODE THAT WILL ASK THE USER FOR THE LENGTH OF THE
						// SIDE OF THE SQUARE. (This is stored in size)
	
						
	cout << "Please input the length of the side of the square\n";
	cin >> size;
	// FILL IN THE CODE THAT CALLS SetSide.
	box.setSide(size);
	// FILL IN THE CODE THAT WILL RETURN THE AREA FROM A CALL TO A FUNCTION
	// AND PRINT OUT THE AREA TO THE SCREEN.
	cout << "The area of the square is " << box.findArea() << '\n';
	// FILL IN THE CODE THAT WILL RETURN THE PERIMETER FROM A CALL TO A
	// FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN.
	cout << "The perimeter of the square is " << box.findPerimeter() << '\n';

	//Exercise 2
	cout << "The area of box1 is " << box1.findArea() << '\n';
	cout << "The perimeter of box1 is " << box1.findPerimeter() << '\n';

	system("pause");
	return 0;
}
//
//Implementation section Member function implementation
//**************************************************
// setSide
//
// task: This procedure takes the length of a side and
// places it in the appropriate member data
// data in: length of a side
//***************************************************
Square::Square(float side_square)
{
	side = side_square;

}
Square::Square()
{

	side = 1;

}
Square :: ~Square()
{

}

void Square::setSide(float side_set)
{
	side = side_set;
}
//**************************************************
// findArea
//
// task: This finds the area of a square
// data in: none (uses value of data member side)
// data returned: area of square
//***************************************************
float Square::findArea()
{
	return side * side;
}
//**************************************************
// findPerimeter
//
// task: This finds the perimeter of a square
// data in: none (uses value of data member side)
// data returned: perimeter of square
//***************************************************
float Square::findPerimeter()
{
	return 4 * side;
}


