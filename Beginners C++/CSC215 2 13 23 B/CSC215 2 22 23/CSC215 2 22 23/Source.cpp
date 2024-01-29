// functions
#include <iostream>
#include <string>

using namespace std;

//function declarations - later to be moved to function.h
void display();// definition for function
void add(int num1, int num2);
int mult(int num1, int num2);

int main()
{
	// local variables
	int num1, num2,num3;

	cout << "functions" << endl;
	display();
	
	cout << "please enter a number " << endl;
	cin >> num1;
	cout << "please enter a number " << endl;
	cin >> num2;
	add(num1, num2);
	num3 = mult(num1, num2);
	cout  << "******* MAIN    " << num1 << " * " << num2 << " = " << num3 << endl;

	return 0;
}

void display()
{
	cout << "this is a display function" << endl;
	cout << "it could display anything you want" << endl;
}	

void add(int x, int y)
{
	cout << x << " + " << y << " = " << x + y << endl;
}
int mult(int num1, int num2)
{
	return	num1 * num2;

}
