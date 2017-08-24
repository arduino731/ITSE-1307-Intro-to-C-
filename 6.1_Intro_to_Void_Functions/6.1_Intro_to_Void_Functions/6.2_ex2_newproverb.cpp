// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country: 
// "Now is the time for all good men to come to the aid of their "
// Inputting a 1 will use the word party. Any other number will use the word country.
//BRIAN VAN VLYMEN
#include <iostream>
#include <string>
using namespace std;
// Fill in the prototype of the function writeProverb.
void writeProverb(int);

int main()
{
	int wordCode;
	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their " << endl;
	cout << "Input a 1 if you want the sentence to be finished with party" << endl;
	cout << "Input any other number for the word country" << endl;
	cout << "Please input your choice now" << endl;
	cin >> wordCode; 
	cout << endl;
	writeProverb(wordCode);
	
	
	system("PAUSE");
	return 0;
}

void writeProverb(int number) {
	if (number == 1) {
		cout << "party" << endl;
	}
	else if(number == 2) {
		cout << "country" << endl;
	}
	else {
		cout << "I'm sorry but that is an incorrect choice; Please input a 1 or 2" << endl;
	}
}
