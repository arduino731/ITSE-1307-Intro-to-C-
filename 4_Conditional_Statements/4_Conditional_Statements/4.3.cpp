// This program illustrates the use of logical operators
//  Brian van Vlymen
#include <iostream>
using namespace std;
int main()
{
	int year;
	float gpa;
	cout << "What year student are you ?" << endl;
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)" << endl << endl;
	cin >> year;
	cout << "Now enter your GPA" << endl;
	cin >> gpa;



	if (gpa >= 2.0 || year == '4') {
		cout << "It is time to graduate soon" << endl;
	}
	
	else if (year != '4' || gpa < 2.0) {
		cout << "You need more schooling" << endl;
	}

	system("PAUSE");
	return 0;
}