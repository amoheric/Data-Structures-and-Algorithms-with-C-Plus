


#include <array>

#include <cstdlib>

#include <iostream>

#include <string>

#include <time.h>

#include <vector>
#include <algorithm>

using namespace std;




int main()
{

	string words[] = { " one", "two", "three", "four" , "five", "six" , "seven", "eight", "nine", "ten" };
	string words2[10][2] = { { " one", "one before 2" }, {"two", "one before 3"}, {"three", "one before 4 " }, {"four", "one before 5"},
	{"five", "one before 6"},{"seven", "one before 8",}, {"nine", "one before 10"}, {"ten", "one before 10"
} };

	/*for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
		{
			
			
			cout << words2[i][j] << std::endl;
	

		}
	*/
	

		// seed random number generator with current time
	//	srand(time(NULL)); 



		int randNum;
		string roundWords[3];
		string roundHints[3];

		do {
			for (int i = 0; i < 2; i++) {
				// random number from 0 to 9
				int randNum = rand() % 10;
				//string s = roundWords[i];
				//s = wordsAndHints[1, 0];

				roundWords[i] = words[randNum];
				roundHints[i] = words2[randNum][1];

			}
		} while (roundWords[0] == roundWords[1] || roundWords[0] == roundWords[2] || roundWords[1] == roundWords[2]);

		string first = roundWords[0];
		string firstScramble = roundWords[0];
		cout << "first random word:  " << first << endl;
		random_shuffle(firstScramble.begin(), firstScramble.end());
		cout << "shuffled letters  " << firstScramble << endl;
		char guess;

		string result = first;

		int countGuess = 0;
		for (int i = 0; i < result.length(); i++) {


			result[i] = '*';


		}

	
		do {
			cout << "enter a letter - * for hint    "  ;
			cin >> guess;
			if (guess == '*')
			{
				cout << endl << "Hint:  " << roundHints[0] << std::endl;
		
			}
			else
			{

				countGuess++;
				for (int i = 0; i < result.length(); i++) {
					if (first[i] == guess)
					{
						result[i] = guess;
						cout << "one guess correct  " << result << endl;
					}


				}
			}
		} while (countGuess < 3);
		cout << "result after 3 guesses " << result << endl;



	

		return 0;

}
