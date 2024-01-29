#include <iostream>
#include <string>
#include "function.h"

using namespace std;


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
