#include <iostream>
#include <iomanip>
using namespace std;
// This program will input American money and convert it to foreign currency
// BRIAN VAN VLYMEN 
// Prototypes of the functions

// Prototypes of the functions
void  convertMulti(float dollars, float& euros, float& pesos);
void  convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

// Exchange rates
const float USD_TO_EUR = 1.06;
const float USD_TO_MXN = 9.73;
const float USD_TO_JPY = 124.35;

int main()
{
	float dollars; 
	float euros; 
	float pesos;
	float yen;
	cout << fixed << showpoint << setprecision(2);

	cout << "Please input the amount of American Dollars you want converted to euros and pesos" << endl;
	cin >> dollars;
	// Fill in the code to call convertMulti with parameters dollars, euros, and pesos
	// Fill in the code to output the value of those dollars converted to both euros
	// and pesos
	convertMulti(dollars, euros, pesos);
	cout << "Euros: " << euros << " | Pesos: " << pesos << endl << endl;

	cout << "Please input the amount of American Dollars you want converted to euros, pesos and yen" << endl;
	cin >> dollars;
	// Fill in the code to call convertMulti with parameters dollars, euros, pesos and yen
	// Fill in the code to output the value of those dollars converted to euros, pesos and yen

	convertMulti(dollars, euros, pesos, yen);
	cout << "Euros: " << euros << " | Pesos: " << pesos << " | Yen: " << yen << endl << endl;


	cout << "Please input the amount of American Dollars you want converted to yen" << endl;
	cin >> dollars;
	// Fill in the code to call convertToYen
	// Fill in the code to output the value of those dollars converted to yen
	yen = convertToYen(dollars);
	cout << "Yen: " << yen << endl << endl;

	cout << "Please input the amount of American Dollars you want converted to euros" << endl;
	cin >> dollars;
	// Fill in the code to call convert ToEuros
	// Fill in the code to output the value of those dollars converted to euros
	euros = convertToEuros(dollars);
	cout << "Euros: " << euros << endl << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to pesos " << endl;
	cin >> dollars;
	// Fill in the code to call convertToPesos
	// Fill in the code to output the value of those dollars converted to pesos
	pesos = convertToPesos(dollars);
	cout << "Pesos: " << pesos << endl << endl;

	system("PAUSE");
	return 0;
}


void convertMulti(float dollars, float& euros, float& pesos) {
	euros = convertToEuros(dollars);
	pesos = convertToPesos(dollars);
}

void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
	euros = convertToEuros(dollars);
	pesos = convertToPesos(dollars);
	yen = convertToYen(dollars);		
}

float convertToYen(float dollars)
{
	return USD_TO_JPY * dollars;
}

float convertToEuros(float dollars)
{
	return USD_TO_EUR * dollars;
}

float convertToPesos(float dollars)
{
	return USD_TO_MXN * dollars;
}

