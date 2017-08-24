// This program illustrates the use of the switch statement.
// Brian van Vlymen
#include <iostream>
using namespace std;
int main()
{
	char grade;
	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;
	switch (grade) // This is where the switch statement begins
	{
	case 'A': 
		cout << grade << endl;
		cout << "YOU PASSED!" << endl;
		cout << "an A - excellent work !" << endl;
		break;
	case 'B':
		cout << grade << endl;
		cout << "YOU PASSED!" << endl;
		cout << "you got a B - good job" << endl;
		break;
	case 'C': 
		cout << grade << endl;
		cout << "YOU PASSED!" << endl;
		cout << "earning a C is satisfactory" << endl;
		break;
	case 'D':
		cout << grade << endl;
		cout << "YOU PASSED!" << endl;
		cout << "while D is passing, there is a problem" << endl;
		break;
	case 'F':
		cout << grade << endl;
		cout << "YOU FAILED!" << endl;
		cout << "you failed - better luck next time" << endl;
		break;
	default: cout << "You did not enter an A, B, C, D, or F" << endl;
	}

	system("PAUSE");
	return 0;
}