
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



int main()
{

    cout << " \t\t\t \n WELCOME TO Sorting List Methods with insertion sort, merge sort, quick sort and bubble sort. \n \t\t\t WITH A MIXTURE OF FUN  \n \n" << endl;


    srand(time(NULL)); // Setting the seed for rand() to achieve repeatable results



    // Testing on sets of 20, 100, and 1000 numbers
    int* arr, * arr_copy;
    int sizes[5] = { 20, 100, 1000, 10000,100000 };

    for (int s = 0; s < 5; s++)
    {
        int size = sizes[s];
        arr = (int*)malloc(size * sizeof(int));
        arr_copy = (int*)malloc(size * sizeof(int));

        for (int i = 0; i < size; i++)
        {
            arr[i] = rand() % 10000;
            arr_copy[i] = arr[i];
        }



        // Testing my insertion sort
        clock_t start = clock();
        insertion_sort(arr, size);
        clock_t end = clock();
        double insertion_time = (double)(end - start) / CLOCKS_PER_SEC;

        //Our program can take two arguments, the filename of a data file, and an integer that defines the algorithm that will be used to sort.
        printf("Insertion sort time for %d numbers: %f seconds\n \n", size, insertion_time);

        if (size < 100)
        {
            printf("Sorted array: \n \n");
            print_array(arr, size);
        }

        // Reseting my array for next sort
        for (int i = 0; i < size; i++)
        {
            arr[i] = arr_copy[i];
        }



        // Testing my merge sort
        start = clock();
        merge_sort(arr, 0, size - 1);
        end = clock();
        double merge_time = (double)(end - start) / CLOCKS_PER_SEC;

        //Our program can take two arguments, the filename of a data file, and an integer that defines the algorithm that will be used to sort.
        printf("Merge sort time for %d numbers: %f seconds\n \n", size, merge_time);

        if (size < 100)
        {
            printf("Sorted array:\n \n ");
            print_array(arr, size);
        }

        // Reseting my array for next sort
        for (int i = 0; i < size; i++)
        {
            arr[i] = arr_copy[i];
        }



        // Testing my quick sort
        start = clock();
        quick_sort(arr, 0, size - 1);
        end = clock();
        double quick_time = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Quick sort time for %d numbers: %f seconds\n \n", size, quick_time);

        if (size < 100)
        {
            printf("Sorted array: \n \n");
            print_array(arr, size);
        }

        free(arr);
        free(arr_copy);



        //testing my bubble_sort
        start = clock();
        bubble_sort(arr, size);
        end = clock();
        double bubble_time = (double)(end - start) / CLOCKS_PER_SEC;
        printf("bubble sort time for %d numbers: %f seconds\n \n", size, bubble_time); 

        //Our program can take two arguments, the filename of a data file, and an integer that defines the algorithm that will be used to sort.

        if (size < 100)
        {
            printf("Sorted array: \n \n");
            print_array(arr, size);
        }

        // Reseting my array for next sort
        for (int i = 0; i < size; i++)
        {
            arr[i] = arr_copy[i];
        }

    }
    
}