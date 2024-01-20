/*
Eric Amoh Adjei
04/015/2023
Assignment: C++ Smart Pointers

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

//defines a class, an operator, and several templates that help allocate and free objects.
#include <memory>

// using namespace std to avoid std:: cout repetitions in our code
using namespace std;

//creating a base class
class Rhombus
{
    int Height;
    int Base;

public: 
    Rhombus(int h, int b)  // constructor
    {
        //declaring varibles
        Height = h;
        Base = b;

    }

    int area()
    {
        return Height + Base;
    }
};

class African_dish //another different base class
{
public:
    African_dish()  // constructor
    {
        cout << "African dishes like fufu " << endl << endl;
    }
    ~African_dish()  // Deconstructor
    {
        cout << "African dishes destroyed by deconstrutor \n\n";
    }

    void print() // funtions in class
    {
        cout << "My favourite african dish is by far rice and beans \n\n";

    }
};


//declaring funtions for NonswappingAcct
void NonswappingAcct(int k)
{
    k = k * 9;
    cout << "parameter k = " << k << "\n\n";

}


//declaring funtions for AccountSwap
void AccountSwap(int* ptrAcct)
{
    int orig = *ptrAcct;
    cout << "orig  = " << orig << "\n\n";
    int AcctNum = 42;
    *ptrAcct = 42;
    cout << "value at ptrNum in functions " << *ptrAcct << "\n\n";
}

//declaring funtions for OldArray
void OldArray(int* Arr, int k)
{
    cout << "original array in func" << "\n\n";
    int i;
    for (i = 0; i < k; i++)
    {
        cout << Arr[i] << "\n\n";
        Arr[i] = i + 1;
    }

}

//declaring funtions for pointerswap
void pointerswap(int* Account, int* creditDept)
{
    cout << "original values = " << *Account << "and creditin dept = " << *creditDept <<endl; 
    int temp = *Account;
    *Account = *creditDept;
    cout << " *Account = " << *Account << " *creditDept = " << *creditDept << endl;
    *creditDept = temp;
    cout << "after switch in functions, Account = " << *Account << " and creditdept = " << *creditDept << "\n\n";

}

//declaring funtions for Constant
void Constant(int* const pi, int* pj)
{

    int temp = *pi; // store value pointed to by pi in temp
    *pi = *pj; // stores value pointed to by pj in address pointed to by pi
    *pj = temp; //stores value original pointed to by pi in address pointed to by pj 

}





//funtions that returns an integer, starting point
int main()
{
   
	cout << "\t\t\t\n\n\n";

    cout << " \t\t\t\ WELCOME TO C++ SMART POINTERS & REFERENCE WITH SWAPPING \n \t\t\t (Toturials by Professor Rawad Habib.) " << "\t\t\n\n";

    cout << "   Type your Name to continue this Tutorial " << "\n\n";

    // string specification holds the character i want my user to imput.
    string Name;


    // cin allow users to input data into the system or interact
    cin >> Name;

    // using the double \n\n; to create a space between my output
    cout << "Your Name didn't match any of our records, do you want to register or create a C++ account? " << Name << "?" << "\n\n";

    cout << "     remember to press any key to continue at some point \n\n";

    // system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
    system("pause");

	cout << "\n\n";

    cout << " We are about to experience pointers & references with swapping tutorials " << "\n\n";

    cout << "   Right after then we will move to smart pointers to complete our tutorial " << "\n\n";


	////////       Pointers   ////////////
	cout << "////////  Working    with    Pointers   ////////  \n\n";



	int* pAPter; // declares a pointer

	int* paccount = 0;//declaring and initilizing a pointer varibles
	int demoaccount = 5000;
	paccount = &demoaccount; // creating a pointer address

	cout << " Pointing &demoaccount to paccount \n";

	cout << "&demoaccount is: " << &demoaccount << "\n\n"; //adress of demoaccount variable
	cout << "paccount is: " << paccount << "\n"; //adress stored to pointer
	cout << "demoaccount is: " << demoaccount << "\n\n"; //original value for demoaccount
	cout << "*paccount is: " << *paccount << "\n"; //Value pointed to stored in pointer


	//subtracting 200 from demoaccount
	cout << "taking 200 from demoaccount to invest: " << demoaccount << "\n";
	demoaccount -= 200;
	cout << "demoaccount is now: " << demoaccount << "\n\n";


	// refering data
	cout << "Now *paccount is also: " << *paccount << "\n";


	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	cout << "\n\n";


	// Adding Invested amount back with profit
	cout << "Profit showing invested amount added in *paccount is: " << *paccount << "\n";
	*paccount += 99;

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200);

	cout << "demoaccount is now: " << demoaccount << "\n";
	cout << "*paccount is now: " << *paccount << "\n\n";

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	cout << "\n\n";

	// Multiplying annual Invested amount profit
	cout << "Annual 20% Invested amount profit added to *paccount of: " << *paccount << "\n\n";
	*paccount *= 2;

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200);


	cout << "demoaccount is now: " << demoaccount << "\n\n";
	cout << "*paccount is now: " << *paccount << "\n\n";

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");


	cout << "\n\n";

	// Assiging &dataaccount to paccount
	cout << "Assiging &dataaccount to paccount: " << *paccount << "\n\n";
	int dataaccount = 900;
	paccount = &dataaccount;

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200);


	cout << "&dataaccount is: " << &dataaccount << "\n\n"; //adress of dataaccount variable
	cout << "    paccount is: " << paccount << "\n\n"; //newer adress stored to pointer
	cout << "dataaccount is: " << dataaccount << "\n\n"; // renews original value for paccount
	cout << "   *paccount is: " << *paccount << "\n\n"; // new Value pointed to stored in pointer


	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	cout << "\n\n";


	//Changing form integers to string pointers called &salAcct to psalAcct
	cout << " Changing form integers to string pointers \n\n ";
	string strAcct = "All Acoount Holdings ";
	string* pstrAcct = &strAcct; // changing a pointer to string

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200);

	cout << "strAcct is: " << strAcct << "\n\n"; //strAcct variable
	cout << "*pstrAcct is: " << *pstrAcct << "\n"; //string adress stored to pointer
	cout << "(*pstrAcct).size() is: " << (*pstrAcct).size() << "\n"; // pointer size value character stored
	cout << "pstrAcct->size() is: " << pstrAcct->size() << "\n\n"; //stored character of string



	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	cout << "\n\n";

	////////   Swap Pointers    /////////////////////

	cout << "////   Swaping Pointers Now  ////  \n\n";

	//declaring variables
	int Account = 51000;
	int creditDept = 39000;
	int Maths[4] = { 19,49, 41, 11};


	//declaring funtions
	NonswappingAcct(Account);
	cout << " AFTER NonswappingAcct Account =  " << Account << "\n\n";

	AccountSwap(&Account);

	cout << "AFTER AccountSwap Account =  " << Account << "\n\n";

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	cout << "\n\n";

	//using array funtion
	OldArray(Maths, 4);
	int i;
	for (i = 0; i < 4; i++)
	{
		cout << Maths[i] << "\n\n";

	}

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	cout << "\n\n";


	//using pointers funtion
	pointerswap(&Account, &creditDept);
	cout << "after switch in MAIN account = " << Account << " while creditDept = " << creditDept << "\n\n";

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200);
	

	//using constant varible for swap
	Constant(&Account, &creditDept);
	cout << "Another switch with constant Variables \n\n";
	cout << " MyAccount: " << Account << "\n\n";
	cout << "My new creditDept: " << creditDept << "\n\n";


	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");


	cout << "\n\n";


	// moving to demonstrate smart pointers 
	cout << " \t\t\t/// working with smart pointers, our main assigment /// " "\n\n\n";

	cout << " \t Now moving to smart pointers, our main assigment " << Name << "\n\n";

	cout << "\t\t\t Unique pointers assigment " << "\n\n\n"; 

    //unique pointers

    unique_ptr <Rhombus> P1(new Rhombus(35, 19));
    cout << P1->area() << "\n\n";


    unique_ptr <Rhombus> P2;
    P2 = move(P1);
    cout << P2->area() << "\n\n"; 


    unique_ptr <African_dish> uniqueFoodPtr(new African_dish());
    cout << "Creating my best african dish called Jollof" << "\n\n";
    uniqueFoodPtr->print();


	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200);


	cout << " \t\t\t Shared pointers assigment " << "\n\n\n";

    //share pointer
    shared_ptr <African_dish> sharedFoodPtr(new African_dish());
    cout << "Created a shared food pointer object \n\n"; 
    sharedFoodPtr->print();

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200);

	cout << "\n\n";

	cout << " \t\t\t Weak pointers assigment " << "\n\n\n";

    //weak pointer
    weak_ptr <African_dish> weakFoodPtr(sharedFoodPtr);
    cout << "This is the weak food pointer created \n\n";

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200);

	cout << "\n\n";

	cout << " \t\t\t Scope pointers with destroyer " << "\n\n\n";

    //creating an inner scope
    {
        shared_ptr <African_dish> scopePtr(new African_dish());
        cout << "created a scope in my pointers to the same African dish \n\n";

    }

    cout << " Unique and shared pointers will be destroyed when out of scope \n\n";


/*
    shared_ptr <Rhombus> P4;
    P3 = P4; 
    cout << P4->area() << "\n\n"; 

    cout << P3->area() << "\n\n";
    cout << P3.use_count() << "\n\n";
*/



    return 0;
}