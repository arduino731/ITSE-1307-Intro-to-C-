#include <fstream>
#include <iostream>
using namespace std;
// BRIAN VAN VLYMEN
const int MAXNAME = 20;
int main()
{
	ifstream inData;
	inData.open("grades.txt");
	char name[MAXNAME + 1]; // holds student name
	float average; // holds student average 
	inData.get(name, MAXNAME + 1);
	while (inData)
	{
		inData >> average;
		// Fill in the code to print out name and
		// student average
		// Fill in the code to complete the while
		// loop so that the rest of the student
		// names and average are read in properly
		cout << name << "\t has a(n) " << average << " average" << endl;


		inData.ignore(80, '\n');
		// This will ignore up to 80 characters but will
		// stop (ignoring) when it reads the \n which is
		// consumed.
		inData.get(name, MAXNAME + 1);


	}

	system("pause");
	return 0;
}