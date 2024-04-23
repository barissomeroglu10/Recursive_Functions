/*
In this code, we will calculate total with recursive function method.
User enters a number and total will calculate from 1 to number.

Developer = Barış Someroğlu
Date = 23.04.2024 - 03:00 pm
*/


#include <iostream>

using namespace std;

// Prototype of function
int RecursiveTotal(int);

int main()
{
	int Number;

	cout << "Please Enter a Number = ";
	cin >> Number;

	cout << "\nTotal = " << RecursiveTotal(Number) << endl; // Call function

	return 0;
}

// Recursive function definition
int RecursiveTotal(int Number)
{
	if (Number <= 0)
		return 0;

	else if (Number == 1)
		return 1;

	else
		return Number + RecursiveTotal(Number - 1);
}
