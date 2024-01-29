#include <iostream>
#include <fstream>
#include <string>
#include "week3.h"

int main()
{
	int randomArray[100];
	int num = 3;
	readFromFile();
	fillArrays(num, randomArray);
	vectors();
	return 0;
}