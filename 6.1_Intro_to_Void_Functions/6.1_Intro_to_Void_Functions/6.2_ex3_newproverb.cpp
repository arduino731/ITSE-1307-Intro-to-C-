// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country: 
// "Now is the time for all good men to come to the aid of their "
// Inputting a 1 will use the word party. Any other number will use the word country.
//BRIAN VAN VLYMEN
#include <iostream>
#include <string>
using namespace std;
// Fill in the prototype of the function writeProverb.
void writeProverb(string);

int main()
{
	string wordCode;
	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their _____" << endl;
	cout << "Please input the word you would like to have finish the proverb" << endl;
	cin >> wordCode;
	cout << endl;
	writeProverb(wordCode);


	system("PAUSE");
	return 0;
}

void writeProverb(string number) {
	if (number == "family") {
		cout << "Now is the time for all good men to come to the aid of their family" << endl;
	}
	else if (number == "hi") {
		cout << "country" << endl;
	}
	else {
		cout << "I'm sorry but that is an incorrect choice; Please input a family or hi" << endl;
	}
}
