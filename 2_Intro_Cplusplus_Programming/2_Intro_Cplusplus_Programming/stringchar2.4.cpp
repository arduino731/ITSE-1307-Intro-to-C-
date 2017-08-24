// LAB 2.4 working with char and strings
// Exercise 1: Retrieve program stringchar.cpp from the Lab 2 folder.This program illustrates the use of characters and strings.The char data type allows only one character to be stored in its memory location.The string data type(actually a class and not a true data type built into the language) allows a sequence of characters to be stored in one memory location.The code follows :
// BRIAN VAN VLYMEN
#include <iostream>
#include <string>

using namespace std;

// Definition of constants
const string FAVORITESODA = "Dr. Dolittle"; // use double quotes for strings 
const char BESTRATING = 'A'; // use single quotes for characters

int main()
{
	char rating; //2nd highest product rating
    string favoriteSnack; //most preferred snack
	int numberOfPeople; //the number of people in the survey
	int topChoiceTotal; //the number of people who prefer the top choice

		// Fill in the code to do the following:
		// Assign the value of "crackers" to favoriteSnack
	favoriteSnack = "crackers";
		// Assign a grade of 'B' to rating
	rating = 'B';
		// Assign the number 250 to the numberOfPeople
	numberOfPeople = 250;
		// Assign the number 148 to the topChoiceTotal
	topChoiceTotal = 148;
		// Fill in the blanks of the following:
	cout << "The preferred soda is " << FAVORITESODA << endl;
	cout << "The preferred snack is " << favoriteSnack << endl; 
	cout << "Out of " << numberOfPeople << " people "<< topChoiceTotal << " chose these items!" << endl;
	cout << "Each of these products were given a rating of " << BESTRATING ;
	cout << " from our expert tasters" << endl;
	cout << "The other products were rated no higher than a " << rating << endl;

	system("PAUSE");
	return 0;
}
