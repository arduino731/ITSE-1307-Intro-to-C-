// This program calculates the user's pay.
#include <iostream>
using namespace std;

float main()
{
	int number;
	cin >> number;

	if (number > 10 && number < 100)
		cout << "That number is acceptable.\n";
	else
		cout << "That number is not acceptable.\n";
	
	system("PAUSE");
	return 0;
}