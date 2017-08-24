// This program demonstrates a Binary Search
// BRIAN VAN VLYMEN 
#include <iostream>
using namespace std;
int binarySearch(int[], int, int); // function prototype 
const int SIZE = 16;

int main()
{
	int found, value;
	//int array[] = { 34,19,19,18,17,13,12,12,12,11,9,5,3,2,2,0 };// array to be searched descending (highest to lowest)
	int array[] = { 0,2,2,3,5,9,11,12,12,12,13,17,18,19,19,34 };// array to be searched ascending (lowest to highest)

	cout << "Enter an integer to search for:" << endl;
	cin >> value;

	found = binarySearch(array, SIZE, value);
		// function call to perform the binary search
		// on array looking for an occurrence of value 
	if (found == -1)
		cout << "The value " << value << " is not in the list" << endl;
	else
	{
		cout << "The value " << value << " is in position number " << found + 1 << " of the list" << endl;
	}
	
	system("pause");
	return 0;
}
//*******************************************************************
// binarySearch
//
// task: This searches an array for a particular value
// data in: List of values in an orderd array, the number of
// elements in the array, and the value searched for
// in the array
// data returned: Position in the array of the value or -1 if value
// not found
//
//*******************************************************************
int binarySearch(int array[], int numElems, int value)
{
	int  first = 0,                    // First array element
		last = numElems - 1,          // Last array element
		middle,                       // Midpoint of search
		position = -1;                // Position of search value
	bool found = false;               

	while (!found && first <= last)
	{
		middle = (first + last) / 2;    // Calculate midpoint
		if (array[middle] == value)     // If value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value) // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1;          // If value is in upper half
	}
	return position;
}