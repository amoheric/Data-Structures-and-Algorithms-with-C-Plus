#pragma once

/*
NAME: Eric Amoh Adjei
DATE: 01/20/2024
Project: Sorting List Methods with insertion sort, merge sort, quick sort and bubble sort.
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

//header file
#include "Sorting.h"

// using namespace std to avoid std:: cout repetitions in our code
using namespace std;


/*
%d and %f are format specifiers used in C programming for formatted output, commonly with the printf function.

%d: This specifier is used for integers. When you use %d in printf, it tells the function to expect an integer value to format and print.
For example, printf("%d", 100); will print the integer 100.

%f: This specifier is used for floating-point numbers (numbers with a decimal point). When you use %f in printf, it expects a floating-point value.
For example, printf("%f", 10.5); will print the number 10.5.

*/




//declaration of function to be called

// Each element of the array is printed followed by a space
void print_array(int arr[], int size);

// Insertion sort algorithm
// Sorts the array using the insertion sort technique
void insertion_sort(int arr[], int size);

// Merges two subarrays of arr[]
void merge(int arr[], int left, int middle, int right);

// Merge sort algorithm
// Sorts the array using the merge sort technique
void merge_sort(int arr[], int left, int right);

// Partition function used in quick sort
int partition(int arr[], int low, int high);

// Quick sort algorithm
// Sorts the array using the quick sort technique
void quick_sort(int arr[], int low, int high);

//declaration of bubble function to be called
void bubble_sort(int arr[], int n);

//declaration of swap function to be called
void swap(int* xp, int* yp);