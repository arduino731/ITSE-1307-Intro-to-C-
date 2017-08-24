// This program will read in the quarterly sales transactions for a given number
// of years. It will print the year and transactions in a table format.
// It will calculate year and quarter total transactions.
//
// BRIAN VAN VLYMEN

#include <iostream>
#include <iomanip>
using namespace std;

const int MAXYEAR = 10;
const int MAXCOL = 5;

typedef int SalesType[MAXYEAR][MAXCOL]; // creates a new 2D integer data type

void getSales(SalesType, int&);   // places sales figures into the array
void printSales(SalesType, int);  // prints data as a table
void printTableHeading();         // prints table heading

int main() {
	int yearsUsed;    // holds the number of years used
	SalesType sales;  // 2D array holding the sales transactions

	getSales(sales, yearsUsed);           // calls getSales to put data in array
	printTableHeading();                  // calls procedure to print the heading
	printSales(sales, yearsUsed);         // calls printSales to display table

	system("pause");
	return 0;
}



void printTableHeading() {
	cout << setw(30) << "YEARLY QUARTERLY SALES" << endl << endl << endl;

	cout << setw(10) << "YEAR" << setw(10) << "Quarter 1"
		<< setw(10) << "Quarter 2" << setw(10) << "Quarter 3"
		<< setw(10) << "Quarter 4" << endl;
}


void getSales(SalesType table, int& numOfYears) {
	cout << "Please input the number of years (1-" << MAXYEAR << ')' << endl;
	cin >> numOfYears;

	// Fill in the code to read and store the next value
	for (int y = 0; y < numOfYears; y++) {
		cout << "Please input the year of the transactions: ";
		cin >> table[y][0];
		for (int q = 1; q < 5; q++) {
			cout << "Please input the number of transactions for Quarter "
				<< q << " of year " << table[y][0] << "\n";
			cin >> table[y][q];
		}
	}
}

void printSales(SalesType table, int numOfYears) {
	// Fill in the code to print the table
	for (int y = 0; y < numOfYears; y++) {
		cout << setw(10) << table[y][0] << setw(10) << table[y][1]
			<< setw(10) << table[y][2] << setw(10) << table[y][3]
			<< setw(10) << table[y][4] << endl;
	}
}