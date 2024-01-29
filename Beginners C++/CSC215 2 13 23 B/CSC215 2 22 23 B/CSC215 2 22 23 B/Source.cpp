// functions
#include <iostream>
#include <string>
#include "function.h"

using namespace std;


int main()
{
	// local variables
	int num1, num2, num3;

	cout << "functions" << endl;
	display();

	cout << "please enter a number " << endl;
	cin >> num1;
	cout << "please enter a number " << endl;
	cin >> num2;
	add(num1, num2);
	num3 = mult(num1, num2);
	cout << "******* MAIN    " << num1 << " * " << num2 << " = " << num3 << endl;

	return 0;
}
