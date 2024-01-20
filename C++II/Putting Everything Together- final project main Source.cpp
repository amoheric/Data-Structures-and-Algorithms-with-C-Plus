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





//funtion that returns to main menu, starting point
int Home()
{
	

	

								int MenuOptions;

								cout << "                 Main Company Menu \t\t\t\n\n";
								cout << "1  Functions, Local vs Global Variables In C++ " << "\n\n";
								cout << "2  File input and output processing " << "\n\n";
								cout << "3  Exception handling " << "\n\n";
								cout << "4  Multi-Threading  " << "\n\n";
								cout << "5  References & Swapping in C++ " << "\n\n";
								cout << "6  Smart Pointers in C++  " << "\n\n";
								cout << "7  C++ Object Oriented Programming " << "\n\n";
								cout << "8  Simulator " << "\n\n";
								cout << "9  Blast Off " << "\n\n";
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
	return 99 + x;
}



// void funtion that calls a count
void Counting()
{
	// using for loop - for (initial cond; continue untill; incremental)
	for (int i = 7; i > 0; i--) // i -- = i-1;
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




void Simulator()
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
	cout << "\t\t\t Welcome to Code Breaker Text Simulation Program for New C++ Recruits! \n\n";


	// Asking the recruit to login using thier name
	cout << "Login with your Student User Name to continue..\n\n ";
	string userName;
	cin >> userName;


	/*Pause the Simulation with press any key to continue system pause allow user to interact by hold the
	remaining code untill the user press a key on the keyboard */
	system("pause");



	// Hold the recruit's name in a var, and address them by it throughout the simulation.
	cout << "\n We are please to welcome you to our C++ new recruit  " << userName << endl;


	/*Pause the Simulation with press any key to continue system pause
	allow user to interact by hold the remaining code untill the user press a key on the keyboard */
	system("pause");


	// Display an overview of what Keywords II is to the recruit 
	cout << "\nHere you will Decode enemy transmissions used to signal other enemies to start attacks. \n\n";


	cout << "  Please remember to use only lower letter or characters.\n\n ";


	// Display an directions to the recruit on how to use Keywords
	cout << "  Enter '#' for a Hint.\n\n ";


	cout << "  Enter '*' to Quite decryption program. \n\n ";


	cout << "  And remember you only have 3 attempts.\n\n ";



	/*Pause the Simulation with press any key to continue system pause allow user to interact by hold the
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
			// Holding the recruit's name in a var, and address them by it throughout the simulation.
			cout << "\n Sorry you got it wrong, try again" << userName;

		}

		cout << "\n\n Your guess";
		cin >> guess;

		
	}

	if (guess == theKeyWord)
	{
		cout << "\n You are genuins, You broke the record and pass with a flying colors. \n" << userName << endl;

		// Holding the recruit's name in a var, and address them by it throughout the simulation.
		cout << "\n You are now qualified to join the CIA " << userName << endl;
	}

	//Displaying End of Simulations to the recruit
	cout << "THE END of Simulations !!! " << endl;

	cout << "\t\t\t Thank You For Your Time. \n";
}




//class

	//funtions that returns an integer, starting point

void OOpClas()
{


	//base class 
	class GameStructure
	{

	private:
		string GameTitle;
		int Strenght;


		//exposing public methods
	public:

		GameStructure() // construtors with no parameters
		{
			this->GameTitle = GameTitle; 
			this->Strenght = Strenght; 
		}

		void Help() //virtual method
		{
		}

		void start()
		{
			cout << "Start A New Game " << "\n\n";
		}

		void End()
		{
			cout << "Game Over " << "\n\n";
		}

		//setter and getter
		void setstrenght(int setstrenght)
		{ // Encapsulation 

			Strenght = setstrenght;

			if (Strenght < 10)
			{
				cout << "strenght too low _ set to 20 \n";
				Strenght = 20;
			}
			else
			{
				Strenght = setstrenght;
			}
		}
		//getter
		int getstrenght()
		{
			cout << "Your Strenght is " << Strenght << "\n\n";
			cout << " Character has Strenght... \n\n\n";
			return Strenght;
		}
	};


	//subclass with inheritance
	class Character : public GameStructure
	{
	private:
		int health;

	public:
		string Name;

		//setter and getter
		void setHealth(int setHealth) { // Encapsulation 
			health = setHealth;

			if (health < 0)
			{
				cout << " Character has Expired... \n";
				health = 0;
			}
			else
			{
				health = setHealth;
			}
		}
		//getter
		int getHealth()
		{
			cout << "Your Health is " << health << "\n\n";
			cout << " Character has Expired... \n\n\n";
			return health; 
		}


		void Talk(string stuffToSay) // method signature
		{
			cout << stuffToSay << "\n\n";
		}

		void Talk(string name, string stuffToSay) // method signature with name
		{
			cout << name << " " << stuffToSay << "\n\n";
		}

		void Help()
		{
		}

		virtual void Attack()
		{
			cout << " 1000x hit points \n\n";
		}


	};


	//inheritance
	class Ninja : public Character
	{
	public:

		Ninja() : Character() //constructor
		{

		}

		void ThrowStars() //methods
		{
			cout << "I am throwing stars like a ninja!" << "\n\n";
		}

		void Help()//overide
		{
			cout << "Ninja's are really cool, can you can use them to throw stars that hang in the skies?" << "\n\n";
		}

		void Help(string helped)//polymorphish - overloads
		{
			cout << helped << "\n\n";
		}

		void Attack()
		{
			cout << " 125x hit points \n\n";
		}
	};

	//inhertance
	class Pirate : public Character
	{
	public:
		Pirate() : Character() //constructor
		{

		}

		void UseSword() //methods
		{
			cout << "I am Swooshing my Sword!" "\n\n";
		}
		void Help()//overides
		{
			cout << "Pirate's are really cool, can you can use them to Swoosh Swords to find Treasures?" "\n\n";
		}

		void Help(string helping)//polymorphish - overloads
		{
			cout << helping << "\n\n";
		}

		void Attack()
		{
			cout << " 250 hit points score \n\n";
		}


	};
	GameStructure gameStrc;
	gameStrc.start();

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);

	gameStrc.setstrenght(9);
	gameStrc.getstrenght();

	cout << "\n";

	Character chrt1;
	chrt1.setHealth(0);
	chrt1.getHealth();

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);


	chrt1.Talk("Everybody wants to be a ninja but Pirate has lots of gold and stuffToSay ");// method signature

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);

	chrt1.Talk("Eric", "knows everybody wants to be a ninja but Pirate has lots of gold and stuffToSay");// method signature with name
	chrt1.Attack();

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	cout << "\n";

	Ninja ninja1;
	ninja1.ThrowStars();
	ninja1.Help();

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);

	ninja1.Help("This time I overide Ninjas Help ");
	ninja1.Attack();

	cout << "\n";

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	Pirate pirate1;
	pirate1.UseSword();

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);

	pirate1.Help();
	pirate1.Help("Other time I overide Help ");

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);

	pirate1.Attack();
	pirate1.End();

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);


}





void SmartPointers()
{

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


	cout << "\n\n";


	//  demonstrating smart pointers 
	cout << " \t\t\t/// smart pointers /// " "\n\n\n";



	//unique pointers
	cout << "\t\t\t Unique pointers assigment " << "\n\n\n";

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

	
	//share pointer
	cout << " \t\t\t Shared pointers assigment " << "\n\n\n";
	
	shared_ptr <African_dish> sharedFoodPtr(new African_dish());
	cout << "Created a shared food pointer object \n\n";
	sharedFoodPtr->print();

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1200);

	cout << "\n\n";

	//weak pointer
	cout << " \t\t\t Weak pointers assigment " << "\n\n\n";

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


}



void FileIO()
{
	//declaring variables
	string name;

	cout << "  WELCOME TO C++ File I/O Home" << "\n\n";

	cout << " File I/O Home is a virtual App made to compete with Alexa & Siri. \n\n";

	cout << "Please, type your favourite C++ Topic you like most to unlock this TextBook App \n\n";

	// string specification holds the character i want my user to input.
	string Topic;

	// cin allow users to input data into the system or interact
	cin >> Topic;

	cout << "Your Programming Language Name? \n";
	cin >> name;

	// using the double << endl << endl; to create a space between my output
	cout << "\n Sorry but your choosen topic: " << Topic << " cant be found in any C++ library, \n are you sure this topic is real " << name << " ? " << endl << endl;


	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	cout << "Here we go, lets start to collect and save some Persisting data  " << endl << endl;

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);

	// Create a text file

	ofstream MyTextWrite("C++ Fileview.txt");

	// Open the txt.file
	if (MyTextWrite.is_open())
	{

		// Write to the file
		MyTextWrite << "\n Remembering and recalling files for the Final project can be tricky, but it is so fun!\n\n";

		MyTextWrite << "\n File I/O Home App.\n";

		MyTextWrite << "\n Hey! I/O Home, Please remember the story I am about to tell you.\n\n";

		MyTextWrite << "\n I/O Home, remember, Today is not today." << name << endl << endl;

		MyTextWrite << "\n Today is another day, sometime ago, centuries past, when there were kingsand castlesand dragons And unicorns...\n";

		// sleep with timming codition specify how fast or slow the console should load for a user
		Sleep(1500);

		MyTextWrite << "\n A traveling mendicant once lectured you, when you were still a little girl" << endl << endl;

		MyTextWrite << "\n whose duties entailed scouring chamberpots and sweeping hearths," << "\n";

		MyTextWrite << "\n about how every human's fate could be read in the stars. " << endl << endl;

		MyTextWrite << "\n File I/O can truelly recall everything.\n";

		MyTextWrite << "\n End of Text Book." << endl << endl;;


		// Close the file
		MyTextWrite.close();

	}
	else
	{
		cout << "Unable to open file ";
	}

	cout << "\n";

	// Create a text string, which is used to output the text file
	string TextBook;

	// Read from the text file
	ifstream ReadText("C++ Overview.txt");


	// Use a while loop together with the getline() function to read the file line by line
	while (getline(ReadText, TextBook))
	{
		// Output the text from the file
		cout << TextBook;

	}

	// Close the file
	ReadText.close();


	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1500);

	cout << "\n";

	// Adding happy emoji
	cout << " \\ ('v') /  \\ ('v') /  \\ ('v') / " << endl << endl;
	cout << " \\ ('N') /  \\ ('N') /  \\ ('N') / " << endl << endl;


	cout << "\n End of File I/O Home App Experimentation. \n Thank You " << name << endl << endl;
}




// exception handling 

void Excep()
{
	//declaring variables
	int passcode = 534;
	int i = 73.13, j = 51.01;
	double p = 0.12;
	//int myNumb(int i, int j); // a double funtion that returns a decimal result, starting point
	


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
			p = 0.12; // myNumb(i, j);
			cout << p << "\n\n";

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
			if (p <= 0.111)
				// throwing 505 as exception
				throw 505;

			else if (p >= 0.222)

				// throwing float value as exception
				throw 0.98f;
			else
				cout << " \t\t The Total Vlaue is " << p << Initials << "\n\n";
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

		catch (bool ex) // to catch bool Exceptions
		{
			cout << " \t\t It is bool Exception this time " << Initials << "\n\n";
		}


		// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
		system("pause");

}






//void funtion that returns with parameters
void Multithrd(int j)
{
	
	class Multithrd    // base class
	{
	public:

		void operator() (int x) // funtions in class
		{

			cout << "Next to come is the Multithrd() class with funtion will keep reapting 3 times as declared\n\n";

			for (int i = 0; i < x; i++)
				cout << "My favourite Multithrd \n\n";
			cout << " \n\n";
		}

	};
	thread Three(Multithrd(), 3);

	// Wait for thread three to finish
	Three.join(); 
};





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


