/*
Eric Amoh Adjei
02/25/2023
Assignment: Functions with Interactive Simulation
*/


// including iostream directive tells the preprocessor to include other contents file.
#include <iostream>

// with the include String, we can not display a string output or alphabetical characters.
#include <string>

// windows.h library allow coders to do more like adding delays like sleep for some seconds
#include <windows.h>

//including my locally made h file set funtion
#include "Learning Functions Header.h"


// using namespace std to avoid std:: cout repetitions in our code
using namespace std;

//funtions that returns an integer, starting point
int main()
{
	// local variable declarations
	
	int myCars[3] = { 10, 20, 30, }; // declaration of an array integer / numbers
	const int x = 20; // integer declaration with constant keyword
	const int y = sumof(x); // an integer that is equal to a codes answer with const keyword
	double num4 = deci(4.2, y); // double to hold decimal numbers
	const int num1 = 3, num2 = 4, num3 = multi(num1, num2); //integer with initialization and conts keyword
	bool Options = true; // a boolean to hold a true or false loop
	int MenuOptions = Home(); // menuoption to hold our main menu
	

	// using do > while (parameter) loop
	do
	{

		//using swith, case and brake together.
		

		// the statement that allows a variable to be tested against a list of values for equality.
		switch (MenuOptions)
		{
			// case is used test variable equality for a list of values,in switch statements
		case 1:
			void Garage(int myCars[3]);
			Garage(myCars);
			break;

			// case to hold menu option 2
		case 2:
			Counting();
			break;
            Options = false;

           //calling Multiple Parameters funtion with returns
		case 3:
            multi(num1, num2);
			cout << "multiplication " << num1 << " * " << num2 << " = " << num3 << endl << endl;
			
		case 4:
			sumof(num1, num2);

			//break statement ends execution of the nearest enclosing loop 
			break;

		case 5:
			double deci(double z, double y);
			cout << "Decimal of sumof(x) = " << num4;
			break;

		case 6:
			cout << "  WELCOME TO HUNTING UNICORNS BY Chandler Groover - A FICTION WITH A MIXTURE OF FUN" << endl << endl;
			cout << "Enter 8 on the menu option to continue reading " << endl;
			break;

		case 7:
			sumof(x);
			cout << "sum of " << 3 << "+" << x << "= " << 3 + x << endl;
			break;

			// default is called when a function does not pass any value to an argument.
		default:
			cout << "Are You sure You want to Exit Menu Options? \n" // the \n means move to the next line
				"Press 8 Again then any key to exit " << endl;

			//break statement ends execution of the nearest enclosing loop 
			break;
			// MenuOptions = Home();
		}
		MenuOptions = Home(); // end of any option will turn back to the main menu


	} while (MenuOptions != 8);//end while here
	

	cout << " exit Menu and lets play" << endl << endl;

	cout << "  WELCOME TO HUNTING UNICORNS BY Chandler Groover - A FICTION WITH A MIXTURE OF FUN" << endl << endl;

	cout << "Type or Tell me about your favourite book you read recently to continue this story " << endl;

	// string specification holds the character i want my user to imput.
	string Book;

	// cin allow users to input data into the system or interact
	cin >> Book;

    // using the double << endl << endl; to create a space between my output
	cout << "Your Book cant be found in any library are you sure you read " << Book << "?" << endl << endl;


	cout << " okay, let's try something different, Set a password with your name? " << endl << endl;
	
	// string specification holds the character i want my user to imput.
	string name;
	cin >> name;
	cout << " Sounds like you have a golden name, thats a beautiful name, do you agree to use " << name << " as password?" << endl << endl; //again using double << endl << endl; to create a space between my output

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	cout << "Here we go, lets start" << endl << endl;

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);
	cout << " Today is not today." << endl << endl;
	cout << " Today is another day, sometime ago, centuries past, when there were kingsand castlesand dragons And unicorns..." << endl << endl;

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);

	cout << " A traveling mendicant once lectured you, when you were still a little girl" << endl << endl;
	cout << " whose duties entailed scouring chamberpots and sweeping hearths," << endl << endl;
	cout << " about how every human's fate could be read in the stars." << endl << endl;

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1500);

	cout << " Reading the stars was difficult, he had explained. Their book was written" << endl << endl;
	cout << " in a language only angels might have spoken fluently, but in its pages" << endl << endl;

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");
	cout << " every future course had been outlined. It could no more be altered than" << endl << endl;
	cout << " a quill could blot the sun with an inkspot." << endl << endl;

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200);

	cout << " Stars whose distant patterns formed strange monsters in the sky" << endl << endl;
	cout << " if you could only squint to see them properly." << endl << endl;

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");


	cout << " Thank Yoy for reading our blog, Please did you enjoy reading my story? Please if you did reply YES " << endl;
	
	// string specification holds the character i want my user to imput.
	string Yes,No;
	cin >> Yes,No;
	cout << " Did you say yes? " << Yes << " Because No also means Yes to me, Thank You" << endl << endl;



	// to close the console by pressing any key when debugger is done.
	return 0;
}


