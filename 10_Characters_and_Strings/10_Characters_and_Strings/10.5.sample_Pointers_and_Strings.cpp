#include <iostream>
#include <cctype>
using namespace std;
//function prototypes
int countLetters(char*);
int countDigits(char*);
int countWhiteSpace(char*);
int main()
{
	int numLetters, numDigits, numWhiteSpace;
	char inputString[51];
	cout << "Enter a string of no more than 50 characters: "
		<< endl << endl;
		cin.getline(inputString, 51);
	numLetters = countLetters(inputString);
	numDigits = countDigits(inputString);
	numWhiteSpace = countWhiteSpace(inputString);
	cout << "The number of letters in the entered string is "
		<< numLetters << endl;
	cout << "The number of digits in the entered string is "
		<< numDigits << endl;
	cout << "The number of white spaces in the entered string is "
		<< numWhiteSpace << endl;
	system("pause");
	return 0;
}
//*******************************************************************
// countLetters
//
// task: This function counts the number of letters
// (both capital and lower case) in the string
// data in: pointer that points to an array of characters
// data returned: number of letters in the array of characters
//
//*******************************************************************
int countLetters(char *strPtr)
{
	int occurs = 0;
	while (*strPtr != '\0') // loop is executed as long as
							// the pointer strPtr does not point
							// to the null character which
							// marks the end of the string
	{
		if (isalpha(*strPtr)) // isalpha determines if
							  // the character is a letter
			occurs++;
		strPtr++;
	}
	return occurs;
}
//*******************************************************************
// countDigits
//
// task: This function counts the number of digits
// in the string
// data in: pointer that points to an array of characters
// data returned: number of digits in the array of characters
//
//*******************************************************************
int countDigits(char *strPtr)
{
	int occurs = 0;
	while (*strPtr != '\0')
	{
		if (isdigit(*strPtr)) // isdigit determines if
							  // the character is a digit
			occurs++;
		strPtr++;
	}
	return occurs;
}
//*******************************************************************
// countWhiteSpace
//
// task: This function counts the number of whitespace
// characters in the string
// data in: pointer that points to an array of characters
// data returned: number of whitespaces in the array of
// characters
//
//*******************************************************************
int countWhiteSpace(char *strPtr) // this function counts the
								  // number of whitespace characters.
								  // These include, space, newline,
								  // vertical tab, and tab
{
	int occurs = 0;
	while (*strPtr != '\0')
	{
		if (isspace(*strPtr)) // isspace determines if
							  // the character is a
							  // whitespace character
			occurs++;
		strPtr++;
	}
	return occurs;
}