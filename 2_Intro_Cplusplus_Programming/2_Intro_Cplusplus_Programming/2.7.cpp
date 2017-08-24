// This program demonstrates the close relationship between
// characters and integers.
#include <iostream>

using namespace std;

int main()
{
	unsigned char first;
	unsigned char last;

	first = 'B';  // your initials using Char
	last = 'V';
	cout << "Char: " << first << last << endl;

	first = 66;  // your initials using Base 10
	last = 86;
	cout << "Dec:  " << first << last << endl;

	first = 00000102;  // your initials using Base 8
	last =  00000126;
	cout << "Oct:  " << first << last << endl;

	first = 0x42;  // your initials using Base 16
	last = 0x56;
	cout << "Hex:  " << first << last << endl;

	system("PAUSE");
	return 0;
}