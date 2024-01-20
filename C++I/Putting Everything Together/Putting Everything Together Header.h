#pragma once

/*
Eric Amoh Adjei
03/26/2023
Final Project: Putting Everything Together with Object Oriented Programming
*/

/*
\t is used for a tab space in program
\n is used for entering into a new line
\b is used for moving the cursor
*/


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

#include <list> 

// using namespace std to avoid std:: cout repetitions in our code
using namespace std;




int Home();//function definition for main menu

// this is a funtion with Arrays
void Garage(int myCars[7]);

//second funtion code to be executed
void Counting();

// this is a funtion with a return
int multi(int num3, int num4);

// funtion with Parameters
void sumof(int num1, int num2);

// this is a funtion with a decimal
double deci(double z, double y);

// this is a funtion with a return values
int sumof(int x);

void Register();
void overView();
void callOut();
void callOut2();
void PointRef();


//declaring my funtions with parameters
void NonswappingAcct(int j, int i); // funtions for nonswappingAcct
void AccountSwap(int& j, int& i);// funtions for AccountSwap
void NonswappingAcct1(int k);
void AccountSwap1(int* ptrAcct);
void OldArray(int* Ar, int k);
void pointerswap(int* Account, int* creditDept);
void Constant(int* const pi, int* pj);
void OpClas();

