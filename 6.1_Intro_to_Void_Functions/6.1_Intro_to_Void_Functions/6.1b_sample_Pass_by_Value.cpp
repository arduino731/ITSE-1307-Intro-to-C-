#include <iostream>
using namespace std;
// Function prototypes 
void printDescription(); 
void calPaycheck(float, int);
int main()
{
	float payRate;
	int hours;
	cout << "Welcome to the Payroll Program." << endl;
	printDescription(); // Call to the printDescription function
	cout << endl << "Please input the pay per hour." << endl;
	cin >> payRate;
	cout << endl << "Please input the number of hours worked." << endl;
	cin >> hours;
	cout << endl << endl;
	calPaycheck(payRate, hours); // Call to the calPaycheck function
	cout << "We hope you enjoyed this program." << endl;
	
	system("pause");
	return 0;
}
//****************************************************************
// printDescription
//
// Task: This function prints a program description
// Data in: no parameters received from the function call
//
//****************************************************************
void printDescription() // The function heading
{
	cout << "****************************************************" << endl << endl;
	cout << "This program takes two numbers (pay rate and hours) " << endl;
	cout << "and outputs gross pay. " << endl;
	cout << "****************************************************" << endl << endl;
}
//****************************************************************
// calPaycheck
//
// Task: This function computes and outputs gross pay
// Data in: rate and time
//
//****************************************************************
void calPaycheck(float rate, int time) // function heading
{
	float gross;
	gross = rate * time;
	cout << "The pay is " << gross << endl;
}