// This program takes sales figures for 3 days. The total
// sales are calculated and displayed in a table.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double day1, day2, day3, total;

	day1 = 1553.88888; // 5
	day2 = 15.1647; // 4
	day3 = 14.40; //.40
	total = 9999999999.; // no trailing

						 // Display the sales figures.
	cout << "\nSales Figures\n";
	cout << "-------------\n";

	cout << setprecision(0) << fixed << left;

	cout << "Day 1: " << setw(10) << day1 << endl;

	cout <<  setprecision(3) << fixed << showpoint;
	cout << "Day 2: " << setw(10) << day2 << endl;

	cout << setprecision(2) << fixed << showpoint;
	cout << "Day 3: " << setw(20) << day3 << endl;

	cout << setprecision(0) << fixed << showpoint;
	cout << "Total: " << setw(20) << total << endl;

	cout << "Press enter to continue" << endl;
	cin.get();

	system("PAUSE");
	return 0;
}