// This program tests a password for the American Equities
// web page to see if the format is correct

// BRIAN VAN VLYMEN

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std; 

//function prototypes 

bool testPassWord(char[]);  
int countLetters(char*);
int countDigits(char*);

int main()
{
	char passWord[20];  
	
	cout << "Enter a password consisting of exactly 4 letters and 6 digits:" << endl;
	cin.getline(passWord,20);
	for (int i = 0; i<20; i++) { 
		passWord[i] = tolower(passWord[i]);
	}
	cout << "Your input is:" << passWord << endl;
	if (testPassWord(passWord))
		cout << "Please wait - your password is being verified" << endl;
	else
	{
		cout << "Invalid password. Please enter a password "
		     << "with exactly 4 letters and 6 digits" << endl;
	    cout << "For example, t56AA7q893 is valid" << endl;
	}


	// FILL IN THE CODE THAT WILL CALL countLetters and 
	// countDigits and will print to the screen both the number of
	// letters and digits contained in the password.  
	cout << "The password you entered have characters: " << endl;
	countLetters(passWord);
	cout << "The password you entered have numbers: " << endl;
	countDigits(passWord); 
	
	system("pause");
	return 0;
}


//**************************************************************
//                       testPassWord
//
// task:			determines if the word contained in the
//				    character array passed to it, contains
//					exactly 5 letters and 3 digits.
// data in:			a word contained in a character array
// data returned:   true if the word contains 5 letters & 3
//					digits, false otherwise
//
//**************************************************************
bool testPassWord(char custPass[])
{
	int numLetters, numDigits, length;

	length = strlen(custPass);
    numLetters = countLetters(custPass); 
	numDigits = countDigits(custPass); 
	if (numLetters == 4 && numDigits == 6 && length == 10 )
		return true;
	else
		return false;
}


// the next 2 functions are from Sample Program 10.5
//**************************************************************
//                       countLetters
//
// task:			counts the number of letters (both
//                  capital and lower case in the string
// data in:			a string 
// data returned:   the number of letters in the string
//
//**************************************************************
int countLetters(char *strPtr) 
{
	int occurs = 0;

	while(*strPtr != '\0')       

	{
		if (isalpha(*strPtr)){  
				cout << *strPtr << endl;
			occurs++;
		}
		strPtr++;
	}

	return occurs;
}

//**************************************************************
//                       countDigits
//
// task:			counts the number of digitts in the string
// data in:			a string 
// data returned:   the number of digits in the string
//
//**************************************************************
int countDigits(char *strPtr)  // this function counts the
                               // number of digits
{  
	int occurs = 0;

	while(*strPtr != '\0')
	{
		if (isdigit(*strPtr)){  // isdigit determines if
				cout << *strPtr << endl;	                   // the character is a digit
			occurs++;
		}
		strPtr++;
	}

	return occurs;
}