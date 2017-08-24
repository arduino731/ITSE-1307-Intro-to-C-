// This program tests whether or not an initialized value
// is equal to a value input by the user
// Brian van Vlymen
#include <iostream>
using namespace std;
int main()
{
	int num1, // num1 is not initialized
		num2 = 5; // num2 has been initialized to 5
	cout << "Please enter an integer" << endl;
	cin >> num1;
	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	if (num1 == num2) {
		cout << "The values are the same." << endl;
		cout << "Hey, that’s a coincidence!" << endl;
	}
	else {
	cout << "The values are not the same" << endl;
	}

	system("PAUSE");
	return 0;
}

// -10 missing: Exercise 2:   Modify  the  program so that the  user  inputs both  values to be tested for equality. Make  sure  you  have a prompt for each input. Test the program with  pairs  of values that are  the  same and  that are  different. 

