
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


// Function to print the array
// Each element of my array is printed followed by a space
void print_array(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);

    }
    printf("\n");

}

// Insertion sort algorithm
// Sorts my array using the insertion sort technique
void insertion_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {

        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;

        }
        arr[j + 1] = key;

    }

}


//  Merges function used in merge sort
// The malloc Merges two subarrays of arr[]
void merge(int arr[], int left, int middle, int right)
{

    int n1 = middle - left + 1;
    int n2 = right - middle;
    int* L = (int*)malloc(n1 * sizeof(int)); //The malloc Merges two subarrays
    int* R = (int*)malloc(n2 * sizeof(int)); //Merges
    

    for (int i = 0; i < n1; i++) //LOOPING
    {

        L[i] = arr[left + i];

    }
    for (int j = 0; j < n2; j++)
    {

        R[j] = arr[middle + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {

        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;

    }

    free(L);
    free(R);

}


// Merge sort algorithm
// Sorts my array using the merge sort technique
void merge_sort(int arr[], int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;
        merge_sort(arr, left, middle);
        merge_sort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }

}


// Partition function used in quick sort
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;

}


// Quick sort algorithm
// Sorting my array using the quick sort technique
void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }

}


//adding the swap funtion from the class template with pionters
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;

}


//adding my bubble defined funtions
void bubble_sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already in place  
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);

}


