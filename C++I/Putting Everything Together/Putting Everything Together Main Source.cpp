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



//funtion that returns to main menu, starting point
int Home()
{
	cout << "\n\n";
	cout << "                 WELCOME AGAIN TO C++ TOTURIALS FOR BEGINNERS A+\t\n\n";
	cout << "   I am really excited to share with you how I was able to develop applications with C++. \n\n";
	cout << "   To access a module Pick a number from 1-10 on the main menu... \n\n\n";


	int MenuOptions;
	
	cout << "                 Main Module Menu \t\t\t\n\n";
	cout << "1 Subscribe (Collecting Data with C++) " << "\n\n";
	cout << "2 Intro & Overview For C++ " << "\n\n";
	cout << "3 Functions, Local vs Global Variables In C++ " << "\n\n";
	cout << "4 Debugging and Control Structures with Code Breaker in C++  " << "\n\n";
	cout << "5 References in C++ " << "\n\n";
	cout << "6 Pointers in C++  " << "\n\n";
	cout << "7 C++ Object Oriented Programming " << "\n\n";
	cout << "8 Textbook " << "\n\n";
	cout << "9 Blast of " << "\n\n";
	cout << "10 Exit\n\n";
	cin >> MenuOptions;
	return MenuOptions;

}


//void funtion that returns with an array
void Garage(int myCars[7])
{
	// a for loop that is commanded to increase
	for (int i = 0; i < 7; i++)
	{
		cout << myCars[i] << "\n\n";
	}
}

//funtions that returns a multiplication integer, starting point
int multi(int num1, int num2)
{
	return num1 * num2;
}

//a void funtion that has a parameter, starting point
void sumof(int num1, int num2)
{
	cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n\n";
}

// a double funtion that returns a decimal result, starting point
double deci(double z, double y)
{
	return z * y;
}

//funtion that has a return of integers, starting point
int sumof(int x)
{
	return 29 + x;
}


// void funtion that calls a count
void Counting()
{
	// using for loop - for (initial cond; continue untill; incremental)
	for (int i = 8; i > 0; i--) // i -- = i-1;
	{
		/*if, else if and else are use in
		the argument of a loop statements*/
		if (i < 3)
		{
			cout << "Warning you about to change Your Future!!! - In just " << i << "minutes" << "\n\n";
		}
		else
		{
			cout << "Thinking Like a Programmer - Future You Blast off= " << i << "\n\n";
		}

		// sleep with timming codition specify how fast or slow the console should load for a user
		Sleep(1200);
	}
	cout << "You Are Awesome See You in C++ II" << "\n\n\n";
}


void Register()
{
	cout << "Subscribe To Our NewsLetter \n\n";
	// string specification holds the character i want my user to imput.
	string name, city;
	int age, contact;

	cout << " Type Your First Name: " << endl << endl;
	cin >> name;
	cout << "Next is Your City:  \n\n";
	cin >> city;
	cout << "Your Age:  \n\n";
	cin >> age;
	cout << "Phone Number  \n\n";
	cin >> contact;

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause>0");

	cout << " Name: " << name << " \n\n";
	cout << " City: " << city << "\n\n";
	cout << " Age: " << age << "years old \n\n";
	cout << " Contact: " << contact << "\n\n";

}


void overView()
{
	cout << "Course Intro & Overview \n\n\n";
	cout << " The C++ programming language is a powerful tool for creating software.\n\n";
	cout << "It has consistently ranked in the top 5 most popular computer languages since 1989 by the TIOBE index.\n\n";
	cout << " C++ is used in a wide array of industries to build next - generation applications in Gaming, Animation, Data Science, Embedded Systems, and Robotics.\n\n\n";
	cout << "The purpose of this course is to help students become employment ready by producing a portfolio of work.\n\n";
	cout << "Students will develop applications with C++ using real - world tools and practices.\n\n";
	cout << " Next, download the Visual Studio bootstrapper file.\n\n";
	cout << "click Download Visual Studio (https://visualstudio.microsoft.com/downloads) and choose the community edition of Visual Studio to install. \n\n";

}


void callOut()
{
	//
	enum gameBase { keyWord, Hint, NUM_GAMEBASE };

	// Create an int var to count the number of simulations being run starting at 1
	const int NUM_keyWords = 10;


	// Create a collection of 10 words you had wrote down manually
	const string keyWords[NUM_keyWords][NUM_GAMEBASE] =
	{
		// Our random low-tech scrambled keywords for decoding

		// Create a collection of 10 words you had wrote down manually
		{ "lotion", "This norishes the body."},
		{ "turkey", "I remember my last thanks giving"},
		{ "soap", "Cleans the body after hard day assigments."},
		{ "cake", "This is a desert."},
		{ "suncream", "Can prevent skin burns."},
		{ "facemask", "Prevent Corona Virus."},
		{ "shampoo", "Cleans the Hair."},
		{ "perfume", "Somebody is smelling good."},
		{ "beverage", "Usually taken in the morning."},
		{ "cheese", "Both humans and mouse love this."},
	};

	//use current time as seed for random number generator with a starting value
	srand(static_cast<unsigned int>(time(0)));

	int choose = (rand() % NUM_keyWords); //rand() is used to generate a series of random numbers. 

	string theKeyWord = keyWords[choose][keyWord]; //word to guess
	string theHint = keyWords[choose][Hint]; // hint for keyWord

	string thekeyWords[3];//
	string theHints[3];//

	string Code_Breaker = theKeyWord; // breaker version of word
	int counted = Code_Breaker.length(); // length() or size() can tell how many characters there are.
	for (int j = 0; j < counted; ++j)
	{
		int ranNum1 = (rand() % counted);
		int ranNum2 = (rand() % counted);

		char solve = Code_Breaker[ranNum1];
		Code_Breaker[ranNum1] = Code_Breaker[ranNum2];
		Code_Breaker[ranNum2] = solve;

	}

	// Display Title of program to user
	cout << "\t\t\t Welcome to Code Breaker Text Simulation Program for New CIA Recruits! \n\n";


	// Ask the recruit to login using thier name
	cout << "Login with your userName to continue..\n\n ";
	string userName;
	cin >> userName;

	/*Pause the Simulation with press any key to continue
	system pause allow user to interact by hold the
	remaining code untill the user press a key on the keyboard */
	system("pause");


	// Hold the recruit's name in a var, and address them by it throughout the simulation.
	cout << "\n We are please to welcome you to our CIA new recruit  " << userName << endl;

	/*Pause the Simulation with press any key to continue
	system pause allow user to interact by hold the
	remaining code untill the user press a key on the keyboard */
	system("pause");


	// Display an overview of what Keywords II is to the recruit 
	cout << "\nHere you will Decode enemy transmissions used to signal other enemies to start attacks. \n\n";
	cout << "  Please remember to use only lower letter or characters.\n\n ";

	// Display an directions to the recruit on how to use Keywords
	cout << "  Enter '#' for a Hint.\n\n ";
	cout << "  Enter '*' to Quite decryption program. \n\n ";
	cout << "  And remember you only have 3 attempts.\n\n ";

	/*Pause the Simulation with press any key to continue
	system pause allow user to interact by hold the
	remaining code untill the user press a key on the keyboard */
	system("pause");


	cout << " \n The first random word is " << Code_Breaker;

	string result = Code_Breaker;//
	string guess;

	// Hold the recruit's name in a var, and address them by it throughout the simulation.
	cout << "\n Are You ready to prove to the CIA to recruit you? " << userName << endl;


	cout << "\n\n Your guess: ";
	cin >> guess;

	while ((guess != theKeyWord) && (guess != "*")) // && (Guess_count < 3))
	{
		if (guess == "#")
		{
			cout << theHint;

		}
		else
		{
			// Hold the recruit's name in a var, and address them by it throughout the simulation.
			//cout << "\n Dont give up yet, prove to the CIA to recruit you? " << userName << endl;
			cout << "\n Sorry you got it wrong, try again" << userName;


		}

		//cout << "just two more attempts left" << endl;
		cout << "\n\n Your guess";
		cin >> guess;

		//cout << "One attempts left" << endl;
		//cout << "\n\n Your guess";
		//cin >> guess;

		//cout << "sorry but you failed, end of test " << endl;
		//return 0;
	}

	if (guess == theKeyWord)
	{
		cout << "\n You are genuins, You broke the record and pass with a flying colors. \n" << userName << endl;

		// Hold the recruit's name in a var, and address them by it throughout the simulation.
		cout << "\n You are now qualified to join the CIA " << userName << endl;
	}

	//Display End of Simulations to the recruit
	cout << "THE END of Simulations !!! " << endl;

	cout << "\t\t\t Thank You For Your Time. \n";
}


void PointRef()
{
	cout << " Pointing &demoaccount to paccount \n";

	int* pAPter; // declares a pointer

	int* paccount = 0;//declaring and initilizing a pointer varibles
	int demoaccount = 5000;
	paccount = &demoaccount; // creating a pointer address

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
	// Adding Invested amount back with profit
	cout << "Profit showing invested amount added in *paccount is: " << *paccount << "\n";
	*paccount += 899;

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200);

	cout << "demoaccount is now: " << demoaccount << "\n";
	cout << "*paccount is now: " << *paccount << "\n\n";

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	// Multiplying annual Invested amount profit
	cout << "Annual 20% Invested amount profit added to *paccount of: " << *paccount << "\n";
	*paccount *= 2;

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200);

	cout << "demoaccount is now: " << demoaccount << "\n";
	cout << "*paccount is now: " << *paccount << "\n\n";

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	// Assiging &dataaccount to paccount
	cout << "Assiging &dataaccount to paccount: " << *paccount << "\n";
	int dataaccount = 90000;
	paccount = &dataaccount;

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200);

	cout << "&dataaccount is: " << &dataaccount << "\n\n"; //adress of dataaccount variable
	cout << "paccount is: " << paccount << "\n"; //newer adress stored to pointer
	cout << "dataaccount is: " << dataaccount << "\n"; // renews original value for paccount
	cout << "*paccount is: " << *paccount << "\n\n"; // new Value pointed to stored in pointer

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	//Changing form integers to string pointers called &salAcct to psalAcct
	cout << " Changing form integers to string pointers \n ";
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
}


	void NonswappingAcct(int j, int i) // funtions for nonswappingAcct
	{
		cout << " Bank Balances " << "\n";
		cout << " Hackers Account balance is: " << j << "\n";
		cout << "SalvationArmy Acct. Balance is: " << i << "\n\n";
	}



	//Funtions for AccountSwap
	void AccountSwap(int& j, int& i)
	{
		int temp = j;
		j = i;
		i = temp;
	}

	//declaring funtions for NonswappingAcct
	void NonswappingAcct1(int k)
	{
		k = k * 9;
		cout << "parameter k = " << k << "\n\n";

	}


	//declaring funtions for AccountSwap
	void AccountSwap1(int* ptrAcct)
	{
		int orig = *ptrAcct;
		cout << "orig  = " << orig;
		int AcctNum = 42;
		*ptrAcct = 42;
		cout << "value at ptrNum in func" << *ptrAcct << "\n\n";
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
		cout << "original values = " << *Account << " " << *creditDept;
		int temp = *Account;
		*Account = *creditDept;
		cout << " *Account = " << *Account << " = *creditDept " << *creditDept;
		*creditDept = temp;
		cout << "after switch in function " << *Account << " " << *creditDept << "\n\n";

	}

	//declaring funtions for Constant
	void Constant(int* const pi, int* pj)
	{

		int temp = *pi; // store value pointed to by pi in temp
		*pi = *pj; // stores value pointed to by pj in address pointed to by pi
		*pj = temp; //stores value original pointed to by pi in address pointed to by pj 

	}

	void callOut2()
	{
		cout << "This Menu will take you to Our award winning Text Book BY Dr.Coddington - C++ WITH A MIXTURE OF FUN" << endl << endl;
		cout << " Enter #10 on the menu option to continue to text book " << "\n\n";

	}

	void OpClas()
	{

		//class with 4 properties
		class WareHouse
		{
		private:
			string Warehousename;
			string CEOName;
			int NumofEmployees;
			list<string>ProductsAvailable;

			//protected used to get access to private enculptations
		//protected:
			//string CEOName;

		//exposing public methods
		public:
			WareHouse(string name, string Owner)
			{
				Warehousename = name;
				CEOName = Owner;
				NumofEmployees = 0;

			}
			void getdisplay()
			{
				cout << "WareHouse Name: " << Warehousename << endl;
				cout << "CEO Name: " << CEOName << endl;
				cout << "Number of Employees: " << NumofEmployees << endl;
				cout << "Products: " << endl;
				for (string ProductName : ProductsAvailable)
				{
					cout << ProductName << endl;
				}
			}
			void Workers()
			{
				NumofEmployees++;
			}
			void FiredWorkers()
			{
				if (NumofEmployees > 0)
					NumofEmployees--;
			}
			void ProductAvailability(string Items)
			{
				ProductsAvailable.push_back(Items);
			}

		};

		// class with inheritance 
		class UATWHouse : public WareHouse
		{
		public:
			UATWHouse(string name, string Owner) : WareHouse(name, Owner)
			{

			}
			//void finalProject()
			//{
				//cout << CEOName << "final project, class, oop experimenting..." << endl;

			//}
		};

		
			//objects
			WareHouse Whouse("Amazon", "Eric");
			Whouse.ProductAvailability("Iphone");
			Whouse.ProductAvailability("Mouse");
			Whouse.ProductAvailability("Books on C++");
			Whouse.Workers();
			Whouse.Workers();
			Whouse.Workers();
			Whouse.Workers();
			Whouse.FiredWorkers();
			Whouse.getdisplay();

			cout << "" << "\n\n";

			WareHouse Whouse2("AmazonPremier", "Amoh");
			Whouse2.ProductAvailability("Keyboards");
			Whouse2.ProductAvailability("OOP CD");
			Whouse2.ProductAvailability(" C++ books");
			Whouse.FiredWorkers();
			Whouse.Workers();
			Whouse.FiredWorkers();
			Whouse2.getdisplay();

			cout << "" << "\n\n";

			UATWHouse Whouse3("C++ with Eric", "UAT");
			Whouse3.ProductAvailability("Funtions");
			Whouse3.ProductAvailability("Loops");
			Whouse3.ProductAvailability("Text Books");
			Whouse3.Workers();
			Whouse3.Workers();
			Whouse3.Workers();
			Whouse3.Workers();
			Whouse3.FiredWorkers();
			//Whouse3.finalProject();
			Whouse.getdisplay();

	}