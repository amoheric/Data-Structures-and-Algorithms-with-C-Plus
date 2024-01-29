#include <iostream>
using namespace std;

int main()
{
	int n1 = 42;
	int* num1 = &n1;
	cout << "num1 (*num1) = " << *num1 << endl;
	cout << "num 1 = " << num1 << endl;
	cout << "&num1  = " << &num1 << endl;
}