
#include <iostream>
#include "function.h"
using namespace std;

void outputWPointers(int* arr)
{
	for (int i = 0; i < 5; i++)
	{
		cout << *(arr + i);
	}
}