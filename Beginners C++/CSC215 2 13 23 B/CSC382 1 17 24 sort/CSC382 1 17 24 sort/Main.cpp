#include "Bubble.h" 
#include <iostream>
#include <time.h>
using namespace std;
int main()
{

	int arr[1000]{};
	clock_t start, end;

	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < 1000;i++)
	{
		arr[i] = rand() % 1000;
	}
	Bubble b1;
	start = clock();
	b1.bubble(arr, n);
	end = clock();

	cout << "bubble sort time = " << (end - start);
	

	start = clock();
	sort(arr, arr + n);
	end = clock();
	cout << " STD library sort in ms time = " << (end - start) << endl;







	
}