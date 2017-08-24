#include <iostream>
#include <iomanip>
using namespace std;
float calNetPay(int hours, float rate);
int main()
{
	int hoursWorked = 20; 
	float payRate = 5.00; 
	float netPay;
	cout << setprecision(2) << fixed << showpoint;
	netPay = calNetPay(hoursWorked, payRate);
	cout << " The net pay is $" << netPay << endl;
	
	system("pause");
	return 0;
}
//******************************************************************************
// calNetPay
//
// task: This function takes hours worked and pay rate and multiplies
// them to get the net pay which is returned to the calling function.
//
// data in: hours worked and pay rate
// data returned: net pay
//
//******************************************************************************
float calNetPay(int hours, float rate)
{
	return hours * rate;
}