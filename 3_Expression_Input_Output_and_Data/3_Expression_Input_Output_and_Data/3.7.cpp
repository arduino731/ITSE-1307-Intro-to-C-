// This program displays three rows of numbers.
#include <iostream>
#include <iomanip> // Required for setw
using namespace std;

int main()
{
	int num1 = 2897, num2 = 5, num3 = 837,
		num4 = 34, num5 = 7, num6 = 1623,
		num7 = 390, num8 = 3456, num9 = 12;

	cout << "Unformatted output. \n\n";
	// Display the first row of numbers
	cout << num1 << " " << num2 << " " << num3 << endl;

	// Display the second row of numbers
	cout << num4 << " " << num5 << " " << num6 << endl;

	// Display the third row of numbers
	cout << num7 << " " << num8 << " " << num9 << endl;

//2897 5 837
//34 7 1623
//390 3456 12

	cout << "\nNow we will see how using the setw() can format the output.\n\n";


	// Display the first row of numbers
	cout << setw(6) << num1 << setw(6)
		<< num2 << setw(6) << num3 << endl;

	// Display the second row of numbers
	cout << setw(6) << num4 << setw(6)
		<< num5 << setw(6) << num6 << endl;

	// Display the third row of numbers
	cout << setw(6) << num7 << setw(6)
		<< num8 << setw(6) << num9 << endl;
//  2897     5   837
//  34     7  1623
//  390  3456    12
	cout << "\nThere are some problems with setw().\nWhat are some suggestions to make the output look better?\n\n";

	num1 = 2897, num2 = 5, num3 = 855537,
		num4 = 3064774, num5 = 7, num6 = 1623,
		num7 = 390, num8 = 333456, num9 = 12;

	// Display the first row of numbers
	cout << setw(7) << num1 << setw(7)
		<< num2 << setw(7) << num3 << endl;

	// Display the second row of numbers
	cout << setw(7) << num4 << setw(7)
		<< num5 << setw(7) << num6 << endl;

	// Display the third row of numbers
	cout << setw(7) << num7 << setw(7)
		<< num8 << setw(7) << num9 << endl;

	system("PAUSE");
	return 0;
}