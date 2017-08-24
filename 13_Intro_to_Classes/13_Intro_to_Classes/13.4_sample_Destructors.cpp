#include <iostream>
using namespace std;
class Demo
{
public:
	Demo(); // Default constructor
	~Demo(); // Destructor
};
int main()
{
	Demo demoObj; // demoObj is defined and invokes
				  // the default constructor that
				  // prints the message “The constructor has
				  // been invoked”
	cout << "The program is now running" << endl;
	
	system("pause");
	return 0;
}
// Now that the main program is over, the object demoObj is no
// longer active. The destructor is invoked and the message
// "The destructor has been invoked" is printed.
//***********************************************************
// The Default Constructor Demo
// Notice that constructors do not have to set member data
// This constructor prints a message that the constructor
// has been invoked.
//***********************************************************
Demo::Demo()
{
	cout << "The constructor has been invoked" << endl;
}
//***********************************************************
// The Destructor Demo
// Notice that destructors do not have to print anything but
// this destructor prints the message "The destructor has been
// invoked." The primary purpose of destructors is to free
// memory space once an object is no longer needed.
//************************************************************
Demo::~Demo()
{
	cout << "The destructor has been invoked" << endl;
}