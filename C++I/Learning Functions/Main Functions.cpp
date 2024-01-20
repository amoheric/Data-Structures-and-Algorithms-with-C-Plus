// including iostream directive tells the preprocessor to include other contents file.
#include <iostream>

// with the include String, we can not display a string output or alphabetical characters.
#include <string>

// windows.h library allow coders to do more like adding delays like sleep for some seconds
#include <windows.h>

//including my locally made h file set funtion
#include "Learning Functions Header.h"

// using namespace std to avoid std:: cout repetitions in our code
using namespace std;

//funtion that returns to main menu, starting point
int Home()
{
	
	int MenuOptions;
	cout << "   Main Menu" << endl << endl;
	cout << "1 Try Arrays" << endl;
	cout << "2 Count Down" << endl;
	cout << "3 Multipel Parameters" << endl;
	cout << "4 Add Numbers" << endl;
	cout << "5 Decimals" << endl;
	cout << "6 Read a Book" << endl;
	cout << "7 Sum of Return Values" << endl;
	cout << "8 Exit" << endl;
	cin >> MenuOptions;
	return MenuOptions;

}

//void funtion that returns with an array
void Garage(int myCars[3])
{
	// a for loop that is commanded to increase
	for (int i = 0; i < 3; i++)
	{
		cout << myCars[i] << "\n";
	}
}

// void funtion that calls a count
void Counting()
{
	// using for loop - for (initial cond; continue untill; incremental)
	for (int i = 8; i > 0; i--) // i -- = i-1;
	{

		/*if, else if and else are use in 
		the argument of a loop statements*/
		if (i < 3)
		{
			cout << "Warning Did you change Your Mind Yet? - Jet time left to Space " << i << endl;
		}
		else
		{
			cout << "Jet Getting Ready To Mars = " << i << endl;
		}

		// sleep with timming codition specify how fast or slow the console should load for a user
			Sleep(1200);
	}
	cout << "You Are Awesome See You in Mars" << endl;
}

//funtions that returns a multiplication integer, starting point
int multi(int num1, int num2)
{
	return num1 * num2;
}

//a void funtion that has a parameter, starting point
void sumof(int num1, int num2)
{
	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl << endl;
}

// a double funtion that returns a decimal result, starting point
double deci(double z, double y)
{
	return z * y;
}

//funtion that has a return of integers, starting point
int sumof(int x)
{
	return 3 + x;
}







