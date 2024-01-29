#include <iostream>
#include "function.h"
using namespace std;


void noAltervar(int n)
{
	n = n * 7;
	cout << "parameter n = " << n << endl;

}
	void yesAltervar(int* ptrNum)
	{
		int orig = *ptrNum;
		cout << "orig  = " << orig;
		int newNum = 12;
		*ptrNum = 12;
		cout << "value at ptrNum in func" << *ptrNum;
	}

	void alterArray(int* Arr, int n)
	{
		cout << "original array in func" << endl;
		int i;
		for (i = 0; i < n; i++)
		{
			cout << Arr[i] << endl;
			Arr[i] = i + 1;
		}

	}

	void swap(int* num1, int* num2)
	{
		cout << "original values = "  << *num1 << " " << *num2;
		int temp = *num1;
		*num1 = *num2;
		cout << " *num1 = " << *num1 << " = *num2 " << *num2;
		*num2 = temp;
		cout << "after switch in function " << *num1 << " " << *num2;



	}