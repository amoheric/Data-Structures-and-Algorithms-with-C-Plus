#include <iostream>
#include "function.h"
using namespace std;

int main()
{
	int num1 = 42;
	int num2 = 7;
	int scores[4] = { 97,54,87,79 };
	noAltervar(num1);
	cout << " AFTER noAlterver  num1 =  " << num1 << endl;
	yesAltervar(&num1);
	cout << "AFTER yesAlterver num1 = " << num1 << endl;

	alterArray(scores, 4);
	int i;
	for (i = 0; i < 4; i++)
	{
		cout << scores[i] << endl;
	}

	swap(&num1,&num2);
	cout << "after switch in MAIN  " << num1 << " " << num2;
	return 0;
}

