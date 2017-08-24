// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise
//  Brian van Vlymen
#include <iostream>
using namespace std;
int main()
{
	cout << "Input your average:" << endl;
	float average;
	cin >> average;
	if (average >= 90){
		cout << "You Pass, 90 - 100" << endl;
}
	else if (average >= 80){
		cout << "You Pass, 80 - 89" << endl;
}
	else if (average >= 60) {
		cout << "You Pass, 60 - 79" << endl;
	}
	else {
		cout << "You Fail" << endl;
	}
	system("PAUSE");
	return 0;
}