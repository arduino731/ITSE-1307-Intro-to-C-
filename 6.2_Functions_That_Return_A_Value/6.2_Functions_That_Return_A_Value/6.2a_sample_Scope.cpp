#include <iostream>
using namespace std;
const float PI = 3.14;
void printHeading();
int main()
{
	float circle;
	cout << "circle has local scope that extends the entire main function" << endl;
	{
		float square;
		cout << "square has local scope active for only a portion of main." << endl;
		cout << "Both square and circle can be accessed here as well as the global constant PI." << endl;
	}
	cout << "circle is active here, but square is not." << endl;
	printHeading();
	
	system("pause");
	return 0;
}
void printHeading()
{
	int triangle;
	cout << "The global constant PI is active here as well as the local variable triangle." << endl;
}