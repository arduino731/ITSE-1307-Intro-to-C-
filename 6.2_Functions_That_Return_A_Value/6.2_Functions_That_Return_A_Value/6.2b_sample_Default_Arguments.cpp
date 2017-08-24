#include <iostream>
#include <iomanip>
using namespace std;
void calNetPay(float& net, int hours = 40, float rate = 6.00);
// function prototype with default arguments specified
int main()
{
	int hoursWorked = 20;
	float payRate = 5.00;
	float pay; // net pay calculated by the calNetPay function 
	cout << setprecision(2) << fixed << showpoint;
	calNetPay(pay); // call to the function with only 1 parameter
	cout << "The net pay is $" << pay << endl;
	
	system("pause");
	return 0;
}
// **********************************************************************************
// calNetPay
//
// task: This function takes rate and hours and multiples them to
// get net pay (no deductions in this pay check!!!). It has two
// default parameters. If the third argument is missing from the
// call, 6.00 will be passed as the rate to this function. If the
// second and third arguments are missing from the call, 40 will be
// passed as the hours and 6.00 will be passed as the rate.
//
// data in: pay rate and time in hours worked
// data out: net pay (alters the corresponding actual parameter)
//
// ********************************************************************************
void calNetPay(float& net, int hours, float rate)
{
	net = hours * rate;
}