/*
Eric Amoh Adjei
03/03/2023
Assignment: Assignment: Keywords - Building Code Breaker
Training Simulation Program for CIA Recruits
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


// using namespace std to avoid std:: cout repetitions in our code
using namespace std;



//funtions that returns an integer, starting point
int main()
{
	// Created a collection of 10 words I wrote down manually
	string keyWords[] = { "lotion", "turkey", "soap", "cake", "suncream", "facemask","shampoo", "perfume", "beverage","cheese" };

	/*Our random low - tech scrambled keywords for decoding
	Created a collection of 10 words and hint*/ 
	string Hint[10][2] =
	{
	{ "lo", "This norishes the body." },
	{ "tu", "I remember my last thanks giving" },
	{ "so", "Cleans the body after hard day assigments." },
	{ "ca", "This is a desert." },
	{ "su", "Can prevent skin burns." },
	{ "fa", "Prevent Corona Virus." },
	{ "sh", "Cleans the Hair." },
	{ "pe", "Somebody is smelling good." },
	{ "be", "Usually taken in the morning." },
	{ "ch", "Both humans and mouse love this." }
	};

	// Create an int var to count the number of simulations being run starting at 1
	int ranNum1;  //interger to hold our random numbers

	// Pick new 3 random words from your collection as the secret code word the recruit has to guess. 
	string thekeyWords[3]; // holds number of words to guess
	string theHints[3];  // holds the hints


	// using do > while (parameter) loop
	do 
	{
		for (int j = 0; j < 2; j++)
		{
			//rand() is used to generate a series of random numbers HERE random numbers from 0 to 9
			int ranNum1 = rand() % 10;
			

			thekeyWords[j] = keyWords[ranNum1];// random words to guess
			theHints[j] = Hint[ranNum1][1];// random hint for keyWord

		}
	} while (thekeyWords[0] == thekeyWords[1] || thekeyWords[0] == thekeyWords[2] || thekeyWords[1] == thekeyWords[2]);

	/*
\t is used for a tab space in program
\n is used for entering into a new line
\b is used for moving the cursor
*/

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



	// Holding the recruit's name in a var, and address them by it throughout the simulation.
	cout << "\n We are please to welcome you to our CIA new recruit  " << userName << endl;


	/*Pause the Simulation with press any key to continue
	system pause allow user to interact by hold the
	remaining code untill the user press a key on the keyboard */
	system("pause");



	// Displaying an overview of what Keywords II is to the recruit 
	cout << "\nHere you will Decode enemy transmissions used to signal other enemies to start attacks. \n\n";
	cout << "  Please remember to use only lower letter or characters.\n\n ";


	// Displaying a directions to the recruit on how to use Keywords
	cout << "  Enter '#' for a Hint.\n\n ";
	//cout << "  Enter '*' to Quite decryption program. \n\n ";
	cout << "  And remember you only have 3 attempts.\n\n ";


	/*Pause the Simulation with press any key to continue
	system pause allow user to interact by hold the
	remaining code untill the user press a key on the keyboard */
	system("pause");


	string Code_Breaker = thekeyWords[0]; //

	string solve = thekeyWords[0]; //

// Display the simulation # is staring to the recruit. 
	// Displaying an overview of what Keywords II is to the recruit 
	cout << "first random word:  " << Code_Breaker << endl;

	random_shuffle(solve.begin(), solve.end()); //

	cout << "shuffled letters  " << solve << endl;//

	char guess;//char to hold our user input that is the guessing letters

	string result = Code_Breaker;// this will let user know the input results


	// Created an int var to count the number of simulations being run starting at 1
	int Guess_count = 0;// guess counter starting at o before it get to 3 attempts

	for (int j = 0; j < result.length(); j++) //
	{


		result[j] = '#';


	}


	do {
		cout << "enter a letter - # for hint    ";
		cin >> guess;
		if (guess == '#')
		{
			cout << endl << "Hint:  " << theHints[0] << std::endl;

		}
		else
		{

			Guess_count++;
			for (int j = 0; j < result.length(); j++) {
				if (Code_Breaker[j] == guess)
				{
					result[j] = guess;

					// While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word
					//     Tell recruit how many incorrect guesses he or she has left
					//Congratulate the recruit on guessing the secret words
					cout << "one guess correct  " << result << endl;
				}


			}
		}
	} while (Guess_count < 3);

	// Show recruit the letters he or she has guessed
	cout << "result after 3 guesses " << result << endl;

	cout << "TRY AGAIN" << (Guess_count < 3) <<endl;
	string YesNo;
	cin >> YesNo;

	//if (cin = Yes)
	//{

	//}

	 //Display End of Simulations to the recruit
	cout << "THE END of Simulations !!! " << endl;


	cout << "\t\t\t Thank You For Your Time. \n" << userName;



	return 0;

}