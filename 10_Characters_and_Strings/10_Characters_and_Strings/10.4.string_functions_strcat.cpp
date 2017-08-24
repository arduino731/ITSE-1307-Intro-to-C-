//Exercise 1: Write a complete program including the above code that outputs
//the concatenation of string1 and string2.Run the program and record
//the result.
//Exercise 2 : Alter the program in Exercise 1 so that string1
// using Microsoft Visual Studio 15
// https://stackoverflow.com/questions/22450423/how-to-use-use-crt-secure-no-warnings
// Under "Project -> Properties -> C/C++ -> Preprocessor -> Preprocessor Definitions" add _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;
// BRIAN VAN VLYMEN
int main()
{
	//char string1[25] = "Total Eclipse ";
	char string1[20] = "Total Eclipse ";
	char string2[11] = "of the Sun";
	cout << string1 << endl;
	cout << string2 << endl;
	strcat(string1, string2);
	cout << string1 << endl;

	system("pause");
	return 0;
}

//Total Eclipse
//of the Sun
//Total Eclipse of the Sun
//Press any key to continue . . .