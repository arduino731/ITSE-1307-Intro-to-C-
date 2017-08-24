#include <iostream>
using namespace std;
void printDescription(); // Function prototype
int main()
{
	cout << "Welcome to the Payroll Program." << endl;
	printDescription(); // Call to the function
	cout << "We hoped you enjoyed this program." << endl;
	
	system("pause");
	return 0;
}
//***************************************************************
// printDescription
//
// Task: This function prints a program description
// Data in: none
//
//***************************************************************
void printDescription() // The function heading
{
	cout << "***************************************************"
		<< endl << endl;
	cout << "This program takes two numbers (pay rate and hours)"
		<< endl;
	cout << "and outputs gross pay. " << endl;
	cout << "***************************************************"
		<< endl << endl;
}