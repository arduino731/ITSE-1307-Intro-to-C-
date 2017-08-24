#include <fstream>
#include <iostream>
using namespace std;
// BRIAN VAN VLYMEN
int main()
{
	char last[10];
	int length, count = 0;
	cout << "Please enter your last name using no more than 9 letters" << endl; 
	cin.getline(last,10);

	length = strlen(last);
	cout << "length is " << length << endl;

	for ( count ; count < length; count++) {
		cout << last[count];
	}
	cout << endl;

	system("pause");
	return 0;
}