#include "Header.h"
#include <istream>
#include <windows.h>
using namespace std;

int main()
{
	bool again = true;
	int choice;
	while (again)
	{
		choice = menu();
		switch (choice)
		{
		case 1:
			add(1, 3);
			break;
		case 2:
			blastoff();
			break;
		case 3:
			again = false;
			break;
		default:
			cout << "you did not enter a valid choice" << endl;
			break;
		};


	}


	return 0;
}