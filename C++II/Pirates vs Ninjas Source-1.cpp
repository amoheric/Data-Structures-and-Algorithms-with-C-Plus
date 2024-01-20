/*
Eric Amoh Adjei
04/01/2023
Assignment: Object Oriented Programming
*/


// including iostream directive tells the preprocessor to include other contents file.
#include <iostream>

// with the include String, we can not display a string output or alphabetical characters.
#include <string>

// windows.h library allow coders to do more like adding delays like sleep for some seconds
#include <windows.h>

// using namespace std to avoid std:: cout repetitions in our code
using namespace std;

//funtions that returns an integer, starting point

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
		cout << "Start New Game " << "\n\n";
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
			cout << " 10 hit points \n\n";
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
			cout << "I am throwing stars!" << "\n\n";
		}

		void Help()//overide
		{
			cout << "Ninja's are really cool, can you can use them to throw stars!" << "\n\n";
		}

		void Help(string helped)//polymorphish - overloads
		{
			cout << helped << "\n\n";
		}

		void Attack()
		{
			cout << " 25 hit points \n\n";
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
			cout << "Pirate's are really cool, can you can use them to Swoosh Swords!" "\n\n";
		}

		void Help(string helping)//polymorphish - overloads
		{
			cout << helping << "\n\n";
		}

		void Attack()
		{
			cout << " 25 hit points \n\n";
		}
	};

	//funtions that returns an integer, starting point
int main()
{
	cout << "\n"; //spacer

	cout << "  WELCOME TO PIRATE VS NINJAS WAR GAME \t\n\n" << endl;  //user greetings or intro
	cout << "Choose Any word as a password to begin \n\n"; // user input

	string password; //string specification holds the character i want my user to input

	// cin allow users to input data into the system or interact
	cin >> password;

	cout << "I can see your password, its : " << password << "\n\n";

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);

	cout << "  Warning: May Yell At Video Games!!! \n\n\n";

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

	// to close the console by pressing any key when debugger is done.
	return 0;
}



	
