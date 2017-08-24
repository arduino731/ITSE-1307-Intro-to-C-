// This program uses a bubble sort to arrange an array of integers in
// ascending order
// BRIAN VAN VLYMEN 
#include <iostream>
using namespace std;
// function prototypes
void bubbleSortArray(int[], int);
void displayArray(int[], int);
const int SIZE = 8;
int main()
{
	//int values[SIZE] = { 9,2,0,11,5 };
	int values[SIZE] = { 23,0,45,-3,78,1,-1,9};
	cout << "The values before the bubble sort is performed are:" << endl;
	displayArray(values, SIZE);
	bubbleSortArray(values, SIZE);
	cout << "The values after the bubble sort is performed are:" << endl;
	displayArray(values, SIZE);
	
	
	system("pause");
	return 0;
}
//******************************************************************
// displayArray
//
// task: to print the array
// data in: the array to be printed, the array size
// data out: none
//
//******************************************************************
void displayArray(int array[], int elems) // function heading
{										  // displays the array 
	for (int count = 0; count < elems; count++)
	cout << array[count] << " " << endl;
}
//******************************************************************
// bubbleSortArray
//
// task: to sort values of an array in ascending order
// data in: the array, the array size
// data out: the sorted array
//
//******************************************************************
void bubbleSortArray(int array[], int elems)
{

	int seek; // array position currently being put in order 
	int minCount; // location of smallest value found
	int minValue; // holds the smallest value found
	for (seek = 0; seek < (elems - 1); seek++) // outer loop performs the swap
											   // and then increments seek
	{
		minCount = seek;
		minValue = array[seek];
		for (int index = seek + 1; index < elems; index++)
		{
			// inner loop searches through array
			// starting at array[seek] searching
			// for the smallest value. When the
			// value is found, the subscript is
			// stored in minCount. The value is
			// stored in minValue.
			if (array[index] > minValue) // less than changed to greater than 
			{
				minValue = array[index];
				minCount = index;
			}
		}
		// the following two statements exchange the value of the
		// element currently needing the smallest value found in the
		// pass(indicated by seek) with the smallest value found
		// (located in minValue)
		array[minCount] = array[seek];
		array[seek] = minValue;
	}
}