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

//including my locally made h file set funtion.
#include "Putting Everything Together- final project Header.h" 



// using namespace std to avoid std:: cout repetitions in our code

using namespace std;  

/*
	\t is used for a tab space in program
	\n is used for entering into a new line
	\b is used for moving the cursor
*/

mutex mtx;


//funtions that returns an integer, starting point
int main()
{


	cout << R"( 

			8""""8 8   8 8""""8 ""8"" 
			8    " 8   8 8    8   8   
			8e     8eee8 8eeee8   8e  
			88     88  8 88   8   88  
			88   e 88  8 88   8   88  
			88eee8 88  8 88   8   88

			)";
	cout << R"( 

					  d88b    
					  8`'8    
					  d8b     
					 d8P`8b    
					d8' `8bP  
					`888P'`YP 
           
           
			)";
	cout << R"(    
                                                   
			eeeee e  eeeeeee e   e e     eeeee eeeee eeeee eeeee  
			8   " 8  8  8  8 8   8 8     8   8   8   8  88 8   8  
			8eeee 8e 8e 8  8 8e  8 8e    8eee8   8e  8   8 8eee8e 
			   88 88 88 8  8 88  8 88    88  8   88  8   8 88   8 
			8ee88 88 88 8  8 88ee8 88eee 88  8   88  8eee8 88   8 

			)";

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1300);

	cout << "\n\n";



	cout << "        \t\t\t WELCOME TO RICAMOH GROUP C++ TOTURIALS CENTER FOR EVERY DIGITAL NEEDS\t\n\n";

	cout << "     \t\t We are really excited to share with you how our company was able to develop applications with C++. \n\n";

	cout << "                             \t\t\t ESTABLISHED @ 2022  \t\t\t\n\n";


	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1100);

	cout << "                         \t\t Thank You for visiting our site today \n\n";

	cout << "                               \t\t        Meet Our A I Chat Bot \n \n \n";

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);

	cout << "  Hi! \n \n  My name is Eric \n \n  I am a First Class Chatbot,\n\n  I will be your assistance today \n \n  Please type in your questions  \n \n  And I will be Happy to help you \n\n";

	cout << "  \n To continue, Please type in your First Name: \n\n";
	string Name;
	cin >> Name;

	cout << "\n\n";

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);

	cout << "  Last Name: \n\n";
	string lName;
	cin >> lName;

	cout << "\n\n";


	cout << "  Contact Number: \n\n";
	int AcctNumb;
	cin >> AcctNumb;

	cout << "\n\n";


	cout << "  Do you own a pet? \n\n";
	string YesNo;
	cin >> YesNo;


	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);

	cout << "  If Yes what is the name? \n\n";
	string Pname;
	cin >> Pname;

	cout << "\n\n";


	cout << "What do you love about C++? \n\n";
	string Lcpp;
	cin >> Lcpp;

	cout << "\n\n";


	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1500);


	cout << "   Thank You for the infomartion :  " << Name << " " << lName << "\n\n";


	cout << "  \n\n";

	cout << "   To access Our C++ module, Choose from 1-10 on the main menu \n  and press Enter key to continue... " << Name << "\n\n\n";

	
	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	cout << "   Select From The Menu Options Below \n\n";


	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1300);




	// local variable declarations

	int myCars[7] = { 28, 86, 18, 45, 37, 50, 44 }; // declaration of an array integer / numbers
	const int x = 28; // integer declaration with constant keyword
	const int y = sumof(x); // an integer that is equal to a codes answer with const keyword
	const int num1 = 7, num2 = 3, num3 = multi(num1, num2); //integer with initialization and conts keyword
	bool Options = true; // a boolean to hold a true or false loop
	int MenuOptions = Home(); // menuoption to hold our main menu


	//declaring variables
	int passcode = 534;
	int i = 73.13, j = 51.01;
	double p = 0.12;
	double myNumb(int i, int j);
	string name; 
	

	//reference
	int demoaccount = 100;
	int HackersAcct = demoaccount;
	int SalvationArmy = 300;
	int v = HackersAcct;
	int n = SalvationArmy;
	 



	// using do > while (parameter) loop
	do
	{

		//using swith, case and brake together.
		
		// the statement that allows a variable to be tested against a list of values for equality.
		switch (MenuOptions)
		{


			/*
			calling Multiple Parameters funtion with returns.
			case is used test variable equality for a list of values,in switch statements.
            */


		case 1:
			
			cout << "Functions, Local vs Global Variables " << "\n\n";

			//
			//double deci(double z, double y); 
			//cout << "Decimal of sumof(x) = " << num4 << "\n\n";

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


			// case to hold menu option 2
		case 2:

			FileIO();
			break;


			//calling eception
		case 3:
			
			Excep();
			break;


		case 4:
			
			//Multithreading
			Multithrd(j);

			cout << " \t\t\t\ WELCOME TO C++ Multi-threading \t\t\n\n";

			cout << " Multithreading can be used to improve the performance of a program \n \n by allowing multiple tasks to be executed simultaneously" << "\n\n\n";

			break; //break statement ends execution of the nearest enclosing loop 


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

			break;

		case 6:

			SmartPointers();
			break;

		case 7:

			cout << "Class & OOP \n\n\n"; 
			OOpClas();
			break;

		case 8:

			Simulator();
			break;

		case 9:

			Counting();
			break;
			Options = false;

			// default is called when a function does not pass any value to an argument.
		default:

			cout << "  Are You sure You want to Exit Menu Options? \n \n" // the \n means move to the next line
				"  Press 10 Again then any key to exit " << "\n\n \n";

			//break statement ends execution of the nearest enclosing loop 
			break;

			
		}

		// MenuOptions = Home();
		MenuOptions = Home(); // end of any option will turn back to the main menu


	} while (MenuOptions != 10);//end while here



	cout << " Exit From Main Menu To read Our C++ Text Book" << endl << endl;

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);



	cout << " Recursion is the technique of making a function call itself.  " << name << "\n\n";
	cout << " This technique provides a way to break complicated problems down into \n simple problems which are easier to solve...." << "\n\n";

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);

	cout << " Recursion may be a bit difficult to understand. " << endl << endl;
	cout << " The best way to figure out how it works is to experiment with it." << "\n\n";
	cout << " int sum(int k) { if (k > 0) { return k + sum(k - 1); } else { return 0; } \n\n";

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1500);







	cout << "\t\t\n\n";

	cout << R"( 

$$$$$$$$\ $$\                           $$\                                           
\__$$  __|$$ |                          $$ |                                          
   $$ |   $$$$$$$\   $$$$$$\  $$$$$$$\  $$ |  $$\       $$\   $$\  $$$$$$\  $$\   $$\ 
   $$ |   $$  __$$\  \____$$\ $$  __$$\ $$ | $$  |      $$ |  $$ |$$  __$$\ $$ |  $$ |
   $$ |   $$ |  $$ | $$$$$$$ |$$ |  $$ |$$$$$$  /       $$ |  $$ |$$ /  $$ |$$ |  $$ |
   $$ |   $$ |  $$ |$$  __$$ |$$ |  $$ |$$  _$$<        $$ |  $$ |$$ |  $$ |$$ |  $$ |
   $$ |   $$ |  $$ |\$$$$$$$ |$$ |  $$ |$$ | \$$\       \$$$$$$$ |\$$$$$$  |\$$$$$$  |
   \__|   \__|  \__| \_______|\__|  \__|\__|  \__|       \____$$ | \______/  \______/ 
                                                        $$\   $$ |                    
                                                        \$$$$$$  |                    
                                                         \______/

)";

	// to close the console by pressing any key when debugger is done.
	return 0;

}