/*
	Eric Amoh Adjei
	04/08/2023
	Assignment: File I/O Google Home
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

int main()
{
	//declaring variables
	string name;

	cout << "  WELCOME TO C++ File I/O Home - Persisting data With Professor Rawad Habib" << "\n\n";

	cout << " File I/O Home is a virtual App made to compete with Alexa & Siri. \n\n";

	cout << "Please, type your favourite C++ Topic you like most to unlock this TextBook App \n\n";

	// string specification holds the character i want my user to input.
	string Topic;

	// cin allow users to input data into the system or interact
	cin >> Topic;

	cout << "Your Name? \n";
	cin >> name;

	// using the double << endl << endl; to create a space between my output
	cout << "\n Sorry but your choosen topic: " << Topic <<" cant be found in any C++ library, \n are you sure this topic is real " << name << " ? " << endl << endl;


	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	cout << "Here we go, lets start to collect and save some Persisting data  " << endl << endl;

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);

	// Create a text file

	ofstream MyTextWrite("C++ Overview.txt");

	// Open the txt.file
	if (MyTextWrite.is_open())
	{

		// Write to the file
		MyTextWrite << "\n Remembering and recalling files for the First time can be tricky, but it is so fun!\n\n";

		MyTextWrite << "\n File I/O Home App.\n"; 

		MyTextWrite << "\n Hey! I/O Home, Please remember the story I am about to tell you.\n\n";

		MyTextWrite << "\n I/O Home, remember, Today is not today." << name << endl << endl;

		MyTextWrite << "\n Today is another day, sometime ago, centuries past, when there were kingsand castlesand dragons And unicorns...\n";

		// sleep with timming codition specify how fast or slow the console should load for a user
		Sleep(1500); 
		
		MyTextWrite << "\n A traveling mendicant once lectured you, when you were still a little girl" << endl << endl; 

		MyTextWrite << "\n whose duties entailed scouring chamberpots and sweeping hearths," <<"\n"; 

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
	

	// to close the console by pressing any key when debugger is done.
	return 0;

}