#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "week3.h"
#include <vector>
using namespace std;

void readFromFile()
{

		ifstream infile("example.txt");
		ofstream outfile("output.txt");
		string line;

		if (infile.is_open())
		{
			/*
			while (infile >> line)
			{
				cout << line << endl;
			}
			*/
			while (getline(infile, line))
			{
				cout << line << endl;
			}
		}
		else
		{
			cout << "example.txt not found " << endl;
		}


		infile.close();
		if (outfile.is_open())
		{
			outfile << "ouitput line 1 " << endl;
			outfile << "happty monday" << endl;

		}
		else
		{
			cout << "can't open output file" << endl;

		}
		outfile.close();

}

void fillArrays(int num, int array1[])
{
	int rand1, rand2, rand3;

	rand1 = rand() % 100; // 0-99
	rand2 = rand() % 100 + 1; //1 - 100
	rand3 = rand() % 30 + 1985; // 1985-2104; 

		for (int i = 0; i < num; i++)
		{
			array1[i] = rand() % 100 + 1;
			cout << array1[i] << endl;
		}
		sort(array1, array1 + num);
		//output after sorting
	
		for (int i = 0; i < num; i++)
		{
			cout << array1[i] << endl;
		}
}
void vectors()
{
	vector<string> names;
	vector<int> numbers;

	for (int i = 1; i < 5; i++)
	{
		numbers.push_back(rand() % 100 + 1);
	}
	cout << "output of vectors" << endl;;

	for (auto i = numbers.begin(); i != numbers.end(); i++)
	{
		cout << *i << " ";
	}





}