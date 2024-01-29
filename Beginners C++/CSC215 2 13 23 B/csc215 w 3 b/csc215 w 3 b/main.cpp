


#include <array>

#include <cstdlib>

#include <iostream>

#include <string>

#include <time.h>

#include <vector>
#include <algorithm>

using namespace std;


 

int main() {

	string words[] = { " one", "two", "three", "four" , "five", "six" , "seven", "eight", "nine", "ten"};
	string words2[2][2] = { { " one", "one before 2" }, {"two", "one before 3"} };
	// seed random number generator with current time
	srand(time(NULL));
	


	int randNum;
	string roundWords[3];
	do {
		for (int i = 0; i < 2; i++) {
			// random number from 0 to 9
			randNum = rand() % 10;
			string s = roundWords[i];
			//s = wordsAndHints[1, 0];
			
			roundWords[i] = words[randNum];

		}
	} while (roundWords[0] == roundWords[1] || roundWords[0] == roundWords[2] || roundWords[1] == roundWords[2]);

	string first = roundWords[0];
	string firstScramble = roundWords[0];
	cout << "first random word:  " << first << endl;
	random_shuffle(firstScramble.begin(), firstScramble.end());
	cout << "shuffled letters" << firstScramble;
	char guess;

	string result = first;

	// to changie the 0 index (i.e H) of the string to T
	

	int countGuess = 0;
	for (int i = 0; i < result.length(); i++) {


		result[i] = '*';


	}
	do {
		cout << "enter a letter";
		cin >> guess;
		
		cout << "result ** string = " << result << endl;
			countGuess++;
			for (int i = 0; i < result.length(); i++) {
				if (first[i] == guess)
				{
					result[i] = guess;
					cout << "one guess correct  " << result << endl;
				}
				

			}
	} while (countGuess < 3);
	cout << "result after 3 guesses " << result << endl;


	return 0;
}
