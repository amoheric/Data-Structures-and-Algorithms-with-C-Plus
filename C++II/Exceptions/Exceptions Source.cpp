/*
	Eric Amoh Adjei
	04/09/2023
	Assignment: Exceptions
*/

// including iostream directive tells the preprocessor to include other contents file.
#include <iostream>

//Stream class to both read and write from/to files. 
#include <fstream>

// with the include String, we can not display a string output or alphabetical characters.
#include <string>

// windows.h library allow coders to do more like adding delays like sleep for some seconds
#include <windows.h>


// using namespace std to avoid std:: cout repetitions in our code
using namespace std;


//exception handling that doesn't use try/catch

double myNumb(int i, int j)// a double funtion that returns a decimal result, starting point
{
	if (j == 0)
	{
		throw " An exception occurred! ";//throwing a string object exception
	}

	return (i / j * 11.007); //returns a divition of i and j multiplying 11.007

}



int main()
{
	//declaring variables
	int passcode = 534;
	int i = 73.13, j = 51.01;
	double x = 0.12;

	cout << "\t\t\t C++ Exceptions \n\n\n"; 

	cout << " Introduction to application using exception-safe code in C++" << "\n\n";

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);

	cout << "  Sometimes executing C++ code, different errors can occur: \n coding errors made by the programmer, errors due to wrong input, or other unforeseeable things. \n\n When an error occurs, C++ will normally stop and generate an error message. \n The technical term for this is: C++ will throw an exception (throw an error). \n\n";

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200);
	
	cout << "\t\t\t C++ try and catch \n\n";

	cout << "  Exceptions provide a way to react to exceptional circumstances \n (like runtime errors) in programs by transferring control to special functions called handlers.\n\n";

	cout << "  To catch exceptions, a portion of code is placed under exception inspection. \n\n This is done by enclosing that portion of code in a try-block. \n \n";

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	cout << "\t\t C++ Try and Catch: What They Are and How to Use Them \n\n";

	cout << "  Try and catch blocks are a vital part of error handling in C++ programming.\n They are used to test code for errors and then handle them accordingly.\n\n  Try and catch blocks work by firstly executing the code within the try block.\n   If an error occurs, the control is then transferred to the catch block where the error is handled. \n\n";

	cout << " If i = 93.13 and j = 51.01, while x = 0.12 \n return (i divided by j) =  ";


	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200);


	try// to handle any errors
	{
		x = myNumb(i, j);
		cout << x << "\n\n";
	
    }

	    catch (const char* e) //exception handling
	    {
		   cout << e << endl;
	    }

		// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
		system("pause");

		cout << " Enter the Initials of your name to continue \n";

		string Initials;
		cin >> Initials;

		cout << " Thank You for your full attention " << Initials << "\n\n\n";

		// sleep with timming codition specify how fast or slow the console should load for a user
		Sleep(1000);


	try// to handle any errors
	{
		
		if (passcode >= 914) 
		{
			cout << " Pass Code Valid - Access granted :) \n";
		}

		else
		{
			throw (passcode); //throwing exception
		}

	}

		catch (int Numb)//exception handling
		{
			cout << " Access denied - You must have the right passcode. :( \n\n";
			cout << " Pass Code Validation Number is: " << Numb << " :) \n\n";
		}

		cout << " You are about to expericence catch in multiple uses " << Initials << "\n\n\n";

		// sleep with timming codition specify how fast or slow the console should load for a user
		Sleep(1300);

		int y = 0.1;

		try// to handle any errors
		{
			if (x <= 0.11)
				// throwing 505 as exception
				throw 505;

			else if (x >= 0.22)

				// throwing float value as exception
				throw 0.18f;
			else
				cout << " \t\t The Total Vlaue is " << x << Initials << "\n\n"; 
		}

		catch (int ex) // to catch Integer Exceptions
		{
			cout << " \t\t It is Integer Exception this time " << Initials << "\n\n"; 
		}

		catch (double ex) // to catch double Exceptions
		{
			cout << " \t\t It is double Exception this time " << Initials << "\n\n"; 
		}

		catch (float ex) // to catch Floating Exceptions
		{
			cout << " \t\t It is Float Exception this time " << Initials << "\n\n"; 
		}

		catch ( bool ex) // to catch bool Exceptions
		{
			cout << " \t\t It is bool Exception this time " << Initials << "\n\n";  
		}

	
		// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
		system("pause");


	return 0;// to close the console by pressing any key when debugger is done.

}