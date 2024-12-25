/*
*
NAME: Eric Amoh Adjei
DATE: 01/28/2024
Algorithm Project 3: Create your own Hash function
*
*/


//This includes the standard input and output library in C++. It's used for operations like reading from and writing to the console.
#include <stdio.h>

// It provides functionalities for dynamic memory allocation, random number generation, communication with the environment, integer arithmetic, searching, sorting, and converting.
#include <stdlib.h>

// including iostream directive tells the preprocessor to include other contents file.
#include <iostream>

//Stream class to both read and write from/to files. 
#include <fstream>

// with the include String, we can not display a string output or alphabetical characters.
#include <string>

// windows.h library allow coders to do more like adding delays like sleep for some seconds
#include <windows.h>

//algorithms library defines functions for a variety of purposes
#include <algorithm>

//Constructs a container with as many elements as the range
#include <vector>

//defines several general purpose functions, including dynamic memory management, random number generation and more
#include <cstdlib>

//Interprets the value pointed by timer as a calendar time and converts it to a C-string containing a human-readable version
#include <ctime>

//an array includes a certain value among its entries, returning true or false as appropriate
#include <array>

//defines variable types, two macro and various functions for manipulating date and time. 
#include <time.h>

//declares a set of functions to classify and transform individual characters.
#include <cctype>

//This includes the standard library header file for the std::list container. std::list in C++ is a sequence container that allows non-contiguous memory allocation.
#include <list>

#include <random>       // Include for random function

#include <cmath>        // Include for sqrt function 

#include <numeric>      // Include for accumulate function

// using namespace std to avoid std:: cout repetitions in our code
using namespace std;



// Defining the size of the hash tables
vector<int> tableSizes = { 1000, 10000, 100000 };

// Hash Function 1: Simple Division Hash
int hashFunction1(int key, int size) 
{

    return key % size;

}

// Hash Function 2: Multiplication Hash
int hashFunction2(int key, int size) 
{

    double A = (sqrt(5) - 1) / 2.0; // A constant (phi - 1) / 2
    return static_cast<int>(size * fmod(key * A, 1.0));

}

// Hash Function 3: DJB2 Hash (a popular hash function)
int hashFunction3(int key, int size) {
    unsigned int hash = 5381;
    string keyStr = to_string(key);
    for (char c : keyStr) {
        hash = ((hash << 5) + hash) + c;

    }

    return hash % size;

}

// Function to generate a hash table and calculate distribution
void generateAndAnalyzeHashTable(int (*hashFunction)(int, int), int size) 
{
    std::vector<int> hashTable(size, 0);

    for (int i = 0; i < size; ++i) 
    {
        int key = rand() % 1000000; // Generate random keys
        int index = hashFunction(key, size); // Get the index from the hash function
        hashTable[index]++;
    }

    // Calculate distribution statistics
    int maxValue = *max_element(hashTable.begin(), hashTable.end());
    int minValue = *min_element(hashTable.begin(), hashTable.end());
    double avgValue = static_cast<double>(accumulate(hashTable.begin(), hashTable.end(), 0)) / size;

    cout << "Maximum value in a slot: " << maxValue << endl;
    cout << "Minimum value in a slot: " << minValue << endl;
    cout << "Average value in a slot: " << avgValue << endl;
}

int main() 
{
    srand(static_cast<unsigned int>(time(nullptr)));

    // Perform analysis for each hash function and table size
    for (int size : tableSizes) {
        cout << "Table Size: " << size << endl;

        // Hash Function 1
        cout << "Hash Function 1:" << endl;
        generateAndAnalyzeHashTable(hashFunction1, size);

        // Hash Function 2
        cout << "Hash Function 2:" << endl;
        generateAndAnalyzeHashTable(hashFunction2, size);

        // Hash Function 3
        cout << "Hash Function 3:" << endl;
        generateAndAnalyzeHashTable(hashFunction3, size);

        cout << "=====================================" << endl;

    }


    return 0;

}
