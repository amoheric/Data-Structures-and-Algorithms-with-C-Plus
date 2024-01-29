// linked list using list library

#include <iostream>
#include <list>
using namespace std;


void display(list <int> numbers)
{
	for (int n : numbers)
	{
		cout << n << endl;
	}
}

int main()
{
	list <int> numbers{ 1,3,5,7 };
	display(numbers);
	numbers.push_front(13);
	numbers.push_back(42);
	display(numbers);
	numbers.pop_front();
	numbers.pop_back();
	display(numbers);
}