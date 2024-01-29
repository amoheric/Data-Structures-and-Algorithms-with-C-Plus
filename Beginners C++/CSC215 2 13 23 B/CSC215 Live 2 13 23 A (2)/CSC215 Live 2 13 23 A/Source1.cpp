// comments - 1 line

/*
multi 
line 
comment
*/
//include libraries
#include <iostream>
#include <string>

using namespace std;

int main() // function that returns an integer, starting point
{
	// variable declarations
	int number = 3;// integer with initialization
	int guess = 0;
	bool notDone = true;
	number = rand() % 5;
	do
	{
		
		cout << "random # = " << number << endl;
		cout << "please enter a guess ";
		cin >> guess;
		cout << "You guessed " << guess << endl;

		if (guess < number)
		{
			cout << "guess is too low" << endl;
		}
		else if (guess == number)
		{
			cout << "you guessed right" << endl;
			notDone = false;
		}
		else
		{
			cout << "guess is too high" << endl;
		}
	} while (notDone); // end while (notDone)

	switch (guess)
	{
	case 1:
		cout << "you chose a low number" << endl;
		break;
	case 3:
		cout << "you picked a lucky number" << endl;
		break;
	case 7:
		cout << "you picked a high number" << endl;
		break;
	default:
		cout << "your number is nothing special" << endl;
	}
	
	return 0;
}



