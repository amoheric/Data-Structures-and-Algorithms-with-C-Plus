#pragma once

/*
*
*
Eric Amoh Adjei
04/25/2023
Final Project: Putting Everything Together with Chatbot and Simulator.


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

// refers to a storage container. list allows you to insert and remove items from anywhere
#include <list>

//defines a class, an operator, and several templates that help allocate and free objects.
#include <memory>

//defines sequence of instructions that can be executed concurrently with other such sequences in multithreading environments, while sharing a same address space.
#include <thread>

//The mutex class is a synchronization primitive that can be used to protect shared data from being simultaneously accessed by multiple threads.
#include <mutex>

// using namespace std to avoid std:: cout repetitions in our code
using namespace std;


//function definition for main menu
int Home();

// this is a funtion with Arrays
void Garage(int myCars[7]);

//second funtion code to be executed
void Counting();

// this is a funtion with a return
int multi(int num3, int num4);

// funtion with Parameters
void sumof(int num1, int num2); 

// this is a funtion with a return values
int sumof(int x);

//declaring my funtions
void Simulator();
void OOpClas();
void SmartPointers();
void FileIO();
void Excep();
void Multithrd(int j);
void NonswappingAcct(int v, int n); // funtions for nonswappingAcct
void AccountSwap(int& v, int& n);// funtions for AccountSwap

