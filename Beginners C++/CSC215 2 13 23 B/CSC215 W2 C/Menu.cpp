#include "Header.h"
#include <istream>
#include <windows.h>

using namespace std;

int menu()
{
	int choice;
	cout << "Menu options " << endl;
	cout << "1 add" << endl;
	cout << "2 blastoff" << endl;
	cout << "3 Exit " << endl;
	cin >> choice;
	return choice;
}

void add(int num1, int num2)
{
	cout << num1 << " + " << num2 << " = " << num1 + num2;
}
void blastoff()
{
	for (int i = 10; i > 0; i--)// i--    = i = i-1;
	{
		if (i < 5)
		{
			cout << "WARNING - time left " << i << endl;
		}
		else
			cout << "Time left = " << i << endl;
		Sleep(1000);
	}
	cout << "Blastoff" << endl;
}
