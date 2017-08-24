// BRIAN VAN VLYMEN 
#include <iostream>

using namespace std;

void getAreaf(int& length, int& width, int& area);
void printData(int);

int getLength(int length);
int getWidth(int width);
int main()
{
	int enterLength; // ask the user to enter the length
	int enterWidth; // ask the user to enter the width
	int area; // function length and width 

	cout << "enter length" << endl;
	cin >> enterLength;
	enterLength = getLength(enterLength);

	cout << "enter width" << endl;
	cin >> enterWidth;
	enterWidth = getWidth(enterWidth);

	getAreaf(enterLength, enterWidth, area);

	printData(area);

	system("PAUSE");
	return 0;
}

int getLength(int length) {
	cout << length << endl; 
	return length; 
}

int getWidth(int width) {
	cout << width << endl;
	return width;
}

void getAreaf(int& length, int& width, int& area) {
	area = length * width;
	cout << area << endl;
	return;
}

void printData(int rectangleArea) {

	cout << "The total Area is " << rectangleArea << endl << endl;

}