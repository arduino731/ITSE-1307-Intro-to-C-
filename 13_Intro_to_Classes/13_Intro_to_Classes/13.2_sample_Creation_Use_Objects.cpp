int main()
{
	Rectangle box1; // box1 is defined as an object of Rectangle class
	Rectangle box2; // box2 is defined as another Rectangle class object

	box1.setLength(20); // This instruction has the object box1 calling the
							// setLength member function which sets the member data
							// length associated with box1 to the value of 20
	box1.setWidth(5);
	box2.setLength(9.5);// This instruction has the object box2 calling the
						// setLength member function which sets the member data
						// length associated with box2 to the value of 9.5
	box2.setWidth(8.5);
	cout << "The length of box1 is " << box1.getLength() << endl; 
	cout << "The width of box1 is " << box1.getWidth() << endl;
	cout << "The area of box1 is " << box1.findArea() << endl;
	cout << "The perimeter of box1 is " << box1.findPerimeter() << endl;
	cout << "The length of box2 is " << box2.getLength() << endl;
	cout << "The width of box2 is " << box2.getWidth() << endl;
	cout << "The area of box2 is " << box2.findArea() << endl;
	cout << "The perimeter of box2 is " << box2.findPerimeter() << endl;
	return 0;
}