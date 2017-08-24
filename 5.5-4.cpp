// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to
// an output file.
// BRIAN VAN VLYMEN 
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;
int main()
{
	ifstream dataIn; // defines an input stream for a data file
	ofstream dataOut; // defines an output stream for an output file
	int quantity; // contains the amount of items purchased
	float itemPrice; // contains the price of each item
	float totalBill; // contains the total bill, i.e. the price of all items
	dataIn.open("transaction.dat"); // This opens the file.
	dataOut.open("bill.out");
	// Fill in the appropriate code in the blank below
	cout << setprecision(2) << fixed << showpoint; // formatted output
	
	// -4 use dataIn instead of "cin" to read data from file
	cout << "quantity of purchased" << endl;
	cin >> quantity;
	cout << "The price of each item " << endl;
	cin >> itemPrice;
											  // Fill in the assignment statement that determines the total bill.

	totalBill = itemPrice * quantity;
											  // Fill in the output statement that prints the total bill, with a label,
											  // to an output file

	dataOut << "The total bill is $ " << totalBill << endl;
	cout << "The names were saved to a file.\n";

	system("PAUSE");
	// Close the file
	dataOut.close();
	return 0;
}

//-4
