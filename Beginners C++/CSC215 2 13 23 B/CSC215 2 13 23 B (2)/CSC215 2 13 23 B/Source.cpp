// program 2
#include <iostream>
#include <string>
using namespace std;
int main()
{
	double num1, num2;
	int mod1, mod2, result;
	

	cout << "MATH" << endl;

	cout << "enter 1st number" << endl;
	cin >> num1;
	cout << "enter 2nd number" << endl;
	cin >> num2;

	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

	// modulo - remainder 

	cout << "please enter a number" << endl;
	cin >> mod1;

	cout << "please enter a number" << endl;
	cin >> mod2;

	result = mod1 % mod2;
	if (result == 0)
	{
		cout << "This is an even #" << endl;
	}
	else
	{
		cout << "ODD" << endl;
	}



	return 0;

}