/*
Eric Amoh Adjei
02/18/2023
Assignment: C++ Input / Output with Interactive Fiction
*/

// Collecting user input from the console.
// Output to the console


// including iostream directive tells the preprocessor to include other contents file.
#include <iostream>

// with the include String, we can not display a string output or alphabetical characters.
#include <string>

// windows.h library allow coders to do more like adding delays like sleep for some seconds
#include <windows.h>



// using namespace std to avoid std:: cout repetitions in our code
using namespace std;


//funtions that returns an integer, starting point
int main()
{
	//variable declarations
	int number = 5; //integer with initialization
	int guess = 0;
	bool Unicorns = true; //boolen is true or false statement
	number = rand() % 10; // rand is for randomization of numbers or creating a random number

	cout << "  WELCOME TO HUNTING UNICORNS BY Chandler Groover - A FICTION WITH A MIXTURE OF FUN" << endl << endl;



	cout << "Enter your favourite book you read to continue this game " << endl; 

	// string specification holds the character i want my user to imput.
	string Book;  

	// cin allow users to input data into the system or interact
	cin >> Book;   
	cout << "Your Book cant be found in any library are you sure you read " << Book <<"?" << endl << endl; // using the double << endl << endl; to create a space between my output


	cout << " okay, let's try something different, What is your name? " << endl << endl;
	string name;
	cin >> name;
	cout << " Sounds like your parents gave you that beautiful name " << name << " dont lie i know your parents did." << endl << endl; //again using double << endl << endl; to create a space between my output
    
	
    // system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");


	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000); 


	cout << " To award you for telling the truth, here is the story I want to share with you." << endl << endl; // using the double << endl << endl; to create a space between my outputHUNTING UNICORN \n";
	
    // system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	cout << " HUNTING UNICORN By Chandler Groover \n";

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");


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
	cout << " every future course had been outlined. It could no more be altered than" << endl << endl;
	cout << " a quill could blot the sun with an inkspot." << endl << endl;

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200); 

	cout << " Stars whose distant patterns formed strange monsters in the sky" << endl << endl;
	cout << " if you could only squint to see them properly." << endl << endl;

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");


	cout << " Something tells me you are not reading my story, are you? Please say YES " << endl;
	string Yes;
	cin >> Yes;
	cout << " Did you say yes? " << Yes << " Because No also means Yes to me" << endl << endl;


	cout << " Before the story continues less do a small guessing game hehe " << endl << endl;  


	

	// using do > while (Unicorns) loop
	do
	{

		//creating a random number

		cout << "random # = " << number << endl;

		cout << "please enter a guess number";
		cin >> guess;
		cout << "You guessed " << guess << endl;

		if (guess > number) // if the guess number is grater than the random number
		{
			cout << "guess is above the limit" << endl;
		}
		else if (guess == number) //else if the guess number is equal to the random number
		{
			cout << "you guessed right" << endl;
			Unicorns = false; // end boolean unicorn
		}
		else // else let the user know the number is low or under the sea
		{
			cout << "guess is under the sea" << endl;
		}

	} while (Unicorns);//end while unicorns

	//using swith, case and brake together.
	

	// the statement that allows a variable to be tested against a list of values for equality.
	switch (guess)  
	{

	// case is used test variable equality for a list of values,in switch statements
	case 1: 
		cout << "you chose an angle number " << endl;

        //break statement ends execution of the nearest enclosing loop 
		break;  

	// case is used test variable equality for a list of values,in switch statements
	case 3:
		cout << "you picked a some how a lucky number " << endl;
		//break statement ends execution of the nearest enclosing loop 
		break;

	// case is used test variable equality for a list of values,in switch statements
	case 7:
		cout << "you chose a number at the buttom of the sea " << endl;

		//break statement ends execution of the nearest enclosing loop 
		break;

	// default is called when a function does not pass any value to an argument.
	default:
		cout << " I think you deserve to be on the space shuttle for your greate work " << endl;
	}

   
	cout << "You Are Awesome, Buckel Your Seat Belt And Get Ready To Travel To Mars" << endl;


	// using for loop - for (initial cond; continue untill; incremental)
	for (int i = 8; i > 0; i--) // i -- = i-1;
	{

		/*if, else if and else are use in the argument of a loop statements*/
		if (i < 3)
		{
			cout << "Warning Did you chang Your Mind Yet? - Jet time left to Space " << i << endl;
		}
		else
			cout << "Jet Getting Ready To Mars = " << i << endl;
		Sleep(1000);
	}
	cout << "You Are Awesome See You in Mars" << endl;

	


	return 0; // to close the console by pressing any key when debuggong is done.

}