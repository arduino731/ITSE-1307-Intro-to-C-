#include <iostream>
using namespace std;
int cubeIt(int x); // prototype for a user defined function
				   // that returns the cube of the value passed
				   // to it.
int main()
{
	int x = 2;
	int cube;
	cube = cubeIt(x); // This is the call to the cubeIt function. 
	cout << "The cube of " << x << " is " << cube << endl;
	
	system("pause");
	return 0;
}
//******************************************************************
// cubeIt
//
// task: This function takes a value and returns its cube
// data in: some value x
// data returned: the cube of x
//
//******************************************************************
int cubeIt(int x) // Notice that the function type is int
				  // rather than void
{
	int num;
	num = x * x * x;
	return num;
}