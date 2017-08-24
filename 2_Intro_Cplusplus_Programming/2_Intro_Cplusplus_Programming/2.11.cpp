
// This program determines the size of integers, long
// integers, and long doubles, etc.
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "The size of an integer is " << sizeof(int);
	cout << " bytes.\n";
	cout << "The size of a long integer is " << sizeof(long);
	cout << " bytes.\n";
	cout << "The size of a double is " << sizeof(double);
	cout << " bytes.\n";
	cout << "The size of a char is " << sizeof(char);
	cout << " bytes.\n";
	cout << "The size of a string is " << sizeof(string);
	cout << " bytes.\n";
	cout << "The size of a bool is " << sizeof(bool);
	cout << " bytes.\n";

	system("PAUSE");
	return 0;
}