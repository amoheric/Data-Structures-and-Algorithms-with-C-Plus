#include <iostream>
#include <time.h>
#include <Windows.h>


using namespace std;
int main(void)
{
	clock_t start, end;
	start = clock();
	Sleep(2000);
	end = clock();
	cout <<"Time elapsed in seconds" << (end - start) / 1000;

	cout << "Time elapsed in ms" << (end - start);
	return 0;
}