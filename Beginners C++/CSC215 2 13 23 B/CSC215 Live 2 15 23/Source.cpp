//loops

#include <iostream>
#include <string>
#include <windows.h>


using namespace std;

int main()
{
	cout << "Blastoff" << endl;

	//for loop - for (initial cond; continue until; incremental)
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

	return 0;
}