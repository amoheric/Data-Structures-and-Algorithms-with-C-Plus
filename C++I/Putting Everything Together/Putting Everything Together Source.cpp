/*
	Eric Amoh Adjei
	03/26/2023
	Final Project: Putting Everything Together with Object Oriented Programming
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

//including my locally made h file set funtion
#include "Putting Everything Together Header.h" 

#include <list>


// using namespace std to avoid std:: cout repetitions in our code
using namespace std; 



/*
	\t is used for a tab space in program
	\n is used for entering into a new line
	\b is used for moving the cursor
*/




//funtions that returns an integer, starting point
int main()
{

		// local variable declarations

		int myCars[7] = { 28, 86, 18, 45, 37, 50, 44 }; // declaration of an array integer / numbers
		//string myCarNames[4] = { "Jaguar", "Ford", "Tesla", "Mercedes" };
		const int x = 28; // integer declaration with constant keyword
		const int y = sumof(x); // an integer that is equal to a codes answer with const keyword
		double num4 = deci(9.2, y); // double to hold decimal numbers
		const int num1 = 7, num2 = 3, num3 = multi(num1, num2); //integer with initialization and conts keyword
		bool Options = true; // a boolean to hold a true or false loop
		int MenuOptions = Home(); // menuoption to hold our main menu

		string name, city;
		int age;
		int contact;


		///ref
		int demoaccount = 1200;
		int HackersAcct = demoaccount;
		int SalvationArmy = 800;
		int i = HackersAcct;
		int j = SalvationArmy;
		//string name;


		//pointer
		int* pAPter; // declares a pointer

		//declaring variables
		int Account = 51000;
		int creditDept = 39000;
		//int Maths[7] = { 19,49,33,11, 97, 41, 11 };

		

		// using do > while (parameter) loop
		do
		{

			//using swith, case and brake together.


			// the statement that allows a variable to be tested against a list of values for equality.
			switch (MenuOptions)
			{
				
				// case is used test variable equality for a list of values,in switch statements
			case 1:
				Register();
				break; 


				// case to hold menu option 2
			case 2:
				overView();
				break; 


				//calling Multiple Parameters funtion with returns
			case 3:
				cout << "Functions, Local vs Global Variables " << "\n\n";

				//
				double deci(double z, double y); 
				cout << "Decimal of sumof(x) = " << num4 << "\n\n"; 

				//
				sumof(x); 
				cout << "sum of " << 3 << "+" << x << "= " << 3 + x << "\n\n"; 

				//
				multi(num1, num2);
				cout << "multiplication " << num1 << " * " << num2 << " = " << num3 << endl << endl; 

				//
				cout << "Sum of  " << "\n\n";
				sumof(num1, num2); 

				//
				cout << "Arrays " << "\n\n";
				void Garage(int myCars[7]); 
				Garage(myCars); 
				break; 


			case 4:
				callOut();

				//break statement ends execution of the nearest enclosing loop 
				break; 

			case 5:
				NonswappingAcct(HackersAcct, SalvationArmy);

				// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
				system("pause");

				//Hackers subtracting 200 from SalvationArmy
				cout << "Hackers Stealing all $800 from SalvationArmy Account balance: " << SalvationArmy << "\n\n";
				SalvationArmy -= 800;

				// sleep with timming codition specify how fast or slow the console should load for a user
				Sleep(1500);
				cout << "SalvationArmy account balance is now left with: " << SalvationArmy << "\n\n";

				// ADDING SAD EMOJI
				cout << " \\ ('H') /  \\ ('H') /  \\ ('H') /  :Q" << "\n\n";


				// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
				system("pause");

				// Adding taking 500 from SalvationArmy to Hackers original account
				cout << " Hackers Acct. balance now added with $800 taking from SalvationArmy to their original: " << HackersAcct << "\n";
				HackersAcct += 800;

				cout << "HackersAcct Banlance is now showing: " << HackersAcct << "\n\n";

				// sleep with timming codition specify how fast or slow the console should load for a user
				Sleep(1500);


				//Multipling with profit
				cout << " Hackers Acct. balance now added with 30% annual savings invested profit : " << HackersAcct << "\n";
				HackersAcct *= 3;

				cout << "HackersAcct Banlance with 30% profit is now showing: " << HackersAcct << "\n\n";

				// sleep with timming codition specify how fast or slow the console should load for a user
				Sleep(1500);


				cout << name << " As a CIA watching every step what can you do to help? " << "\n\n";

				cout << "HackersAcct Banlance is now showing:" << HackersAcct << "\n\n";


				// Swaping account balances from both acccounts
				cout << " CIA have decided to Bankrupting the Terrorists account balance and shut down Hackers \n\n ";

				cout << " CIA have to Swap account balances from both acccounts and now \n\n ";

				// Swaping account funtion declaration
				AccountSwap(HackersAcct, SalvationArmy);

				cout << "Hackers Acct. Balance after CIA swap is now: " << HackersAcct << "\n\n";

				// sleep with timming codition specify how fast or slow the console should load for a user
				Sleep(1000);

				cout << "SalvationArmy Acct Balance saved by the CIA is now: " << SalvationArmy << "\n\n\n";

				// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
				system("pause");

				// Adding happy emoji
				cout << " \\ ('v') /  \\ ('v') /  \\ ('v') / " << endl;
				cout << " \\ ('N') /  \\ ('N') /  \\ ('N') / " << endl;
				break; 

			case 6:

				cout << "Swaping With Pointers  ////  \n\n";
				PointRef();

				//declaring funtions
				NonswappingAcct1(Account);
				cout << " AFTER NonswappingAcct  Account =  " << Account << "\n\n";
				AccountSwap1(&Account);
				cout << "AFTER AccountSwap Account =  " << Account << "\n\n";

				// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
				system("pause");

				//using array funtion myCars[7] = { 28, 86, 18, 45, 37, 50, 44 }
				OldArray(myCars, 7);
				int i;
				for (i = 0; i < 7; i++)
				{
					cout << myCars[i] << "\n\n";

				}
				// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
				system("pause");


				//using pointers funtion
				pointerswap(&Account, &creditDept);
				cout << "after switch in MAIN  " << Account << " " << creditDept << "\n\n";


				// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
				system("pause");

				//using constant varible for swap
				Constant(&Account, &creditDept);
				cout << "Another switch with constant Variables \n\n";
				cout << " MyAccount: " << Account << "\n\n";
				cout << "My new creditDept: " << creditDept << "\n\n";
				break;

			case 7:
				cout << "Class & OOP \n\n\n";
				OpClas();
				break;

			case 8:
				callOut2(); 
				break;

			case 9:

				Counting(); 
				break;
				Options = false;

				// default is called when a function does not pass any value to an argument.
			default:
				cout << "Are You sure You want to Exit Menu Options? \n" // the \n means move to the next line
					"Press 10 Again then any key to exit " << "\n\n";

				//break statement ends execution of the nearest enclosing loop 
				break;
				// MenuOptions = Home();
			}
			MenuOptions = Home(); // end of any option will turn back to the main menu


		} while (MenuOptions != 10);//end while here


		cout << " exit Menu To read Text Book" << endl << endl;

		cout << "  WELCOME TO C++ WITH A MIXTURE OF FUN BY Dr.Coddington" << "\n\n";

		cout << "Type your favourite C++ book you ever read to unlock this Textbook " << "\n\n";

		// string specification holds the character i want my user to imput.
		string Book;

		// cin allow users to input data into the system or interact
		cin >> Book;

		// using the double << endl << endl; to create a space between my output
		cout << "Your Book cant be found in any library are you sure you read " << Book << "?" << endl << endl;

		
		// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
		system("pause");

		cout << "Here we go, lets start" << endl << endl;


		// Create a text file
		ofstream MyTextWrite("C++ Overview.txt");

		// Write to the file
		MyTextWrite << " Files for the First Time can be tricky, but it is so fun! \n";
		MyTextWrite << " \t\t   CONTENT \n\n";
		MyTextWrite << " \t\t   Chapter 1 \n\n";
		MyTextWrite << "  \t\t  Class & Objects \n\n";
		MyTextWrite << "  \t\t  End of Text Book \n\n";

		// Close the file
		MyTextWrite.close();

		// Create a text string, which is used to output the text file
		string TextBook;

		// Read from the text file
		ifstream ReadText("C++ Overview.txt");

		// Use a while loop together with the getline() function to read the file line by line
		while (getline(ReadText, TextBook)) {
			// Output the text from the file
			cout << TextBook;
		}

		// Close the file
		ReadText.close();


		// sleep with timming codition specify how fast or slow the console should load for a user
		Sleep(1000);



		cout << " Today is not today. " << name << "\n\n";
		cout << " Today is another day, sometime ago, centuries past, when there were kingsand castlesand dragons And unicorns..." << "\n\n";

		// sleep with timming codition specify how fast or slow the console should load for a user
		Sleep(1000);

		cout << " A traveling mendicant once lectured you, when you were still a little girl" << endl << endl;
		cout << " whose duties entailed scouring chamberpots and sweeping hearths," << "\n\n";
		cout << " about how every human's fate could be read in the stars." << endl << endl;

		// sleep with timming codition specify how fast or slow the console should load for a user
		Sleep(1500);

		


		// to close the console by pressing any key when debugger is done.
		return 0;
	
}