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

//defines several general-purpose functions, including dynamic memory management, random number generation and more
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

// Define a simple hash function using modulo
unsigned int hashFunction1(unsigned int key, unsigned int tableSize) {
    return key % tableSize;
}

// Define a more complex hash function using bitwise operations
unsigned int hashFunction2(unsigned int key, unsigned int tableSize) {
    key = ((key >> 16) ^ key) * 0x45d9f3b;
    key = ((key >> 16) ^ key) * 0x45d9f3b;
    key = (key >> 16) ^ key;
    return key % tableSize;
}

// Define another hash function using multiplication and bit shifting
unsigned int hashFunction3(unsigned int key, unsigned int tableSize) {
    key = (key * 2654435761u) % tableSize;
    return key;
}

// Function to test the distribution of hash values
void testDistribution(unsigned int (*hashFunc)(unsigned int, unsigned int), unsigned int tableSize, unsigned int numValues) {
    std::vector<unsigned int> distribution(tableSize, 0);

    // Hash a range of values and record their distribution
    for (unsigned int i = 0; i < numValues; ++i) {
        unsigned int hashedValue = hashFunc(i, tableSize);
        distribution[hashedValue]++;
    }

    // Calculate and display the distribution
    unsigned int min = *std::min_element(distribution.begin(), distribution.end());
    unsigned int max = *std::max_element(distribution.begin(), distribution.end());

    std::cout << "Hash Function Distribution (" << numValues << " values, Table Size " << tableSize << "):" << std::endl;
    std::cout << "Min: " << min << ", Max: " << max << std::endl;
    std::cout << "Average: " << static_cast<double>(numValues) / tableSize << std::endl;
}

int main() {
    const unsigned int sizes[] = { 1000, 10000, 100000 };

    for (unsigned int size : sizes) {
        std::cout << "Testing with " << size << " values:" << std::endl;
        testDistribution(hashFunction1, size, size);
        testDistribution(hashFunction2, size, size);
        testDistribution(hashFunction3, size, size);
        std::cout << "----------------------------------------" << std::endl;
    }

    return 0;
}
