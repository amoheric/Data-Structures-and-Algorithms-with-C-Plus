/*
Eric Amoh Adjei
03/018/2023
Assignment: Using References to Hack and Bankrupting the Terrorists

*/

// including iostream directive tells the preprocessor to include other contents file.
#include <iostream>


// with the include String, we can not display a string output or alphabetical characters.
#include <string>

// windows.h library allow coders to do more like adding delays like sleep for some seconds
#include <windows.h>

//
#include "swapHeader.h"



// using namespace std to avoid std:: cout repetitions in our code
using namespace std;




//funtions that returns an integer, starting point
int main()
{
    //declaring varibles

	int demoaccount = 1200;
	int HackersAcct = demoaccount;
	int SalvationArmy = 500;
	int i = HackersAcct;
	int j = SalvationArmy;
	string name;


	cout << " Using References to Hack and Bankrupting the Terrorists " << "\n\n";
	cout << "Whats is Your best name new CIA agent? \n";
	cin >> name;
	cout << "We will need to monitor these Hackers agent " << name << "\n\n";

	
	//declaring funtions
	NonswappingAcct(HackersAcct, SalvationArmy);

	
	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	//Hackers subtracting 200 from SalvationArmy
	cout << "Hackers Stealing all $500 from SalvationArmy Account balance: " << SalvationArmy << "\n\n";
	SalvationArmy -= 500;

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1500);
	cout << "SalvationArmy account balance is now left with: " << SalvationArmy << "\n\n";

	// ADDING SAD EMOJI
	cout << " \Y('M')Y  \Y('M')Y  \Y('M')Y / " << "\n";
	cout << " No No! " << endl;
	cout << " \\ ('H') /  \\ ('H') /  \\ ('H') /  :Q" << "\n\n";


	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	// Adding taking 500 from SalvationArmy to Hackers original account
	cout << " Hackers Acct. balance now added with $500 taking from SalvationArmy to their original: " << HackersAcct << "\n";
	HackersAcct += 500;

	cout << "HackersAcct Banlance is now showing: " << HackersAcct << "\n\n";

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1500);


	//Multipling with profit
	cout << " Hackers Acct. balance now added with 30% annual savings invested profit : " << HackersAcct << "\n";
	HackersAcct *= 3;

	cout << "HackersAcct Banlance with 30% profit is now showing: " << HackersAcct << "\n\n";

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1500);



	cout << name << " As a CIA watching every step what can you do to help? " << "\n\n";

	cout << "HackersAcct Banlance is now showing:" << HackersAcct << "\n\n";

	
    // Swaping account balances from both acccounts
	cout << " CIA have decided to Bankrupting the Terrorists account balance and shut down Hackers \n\n ";
	
	cout << " CIA have to Swap account balances from both acccounts and now \n\n ";

	// Swaping account funtion declaration
	AccountSwap( HackersAcct, SalvationArmy);

	cout << "Hackers Acct. Balance after CIA swap is now: " << HackersAcct << "\n\n";

	// sleep with timming codition specify how fast or slow the console should load for a user
	Sleep(1000);

	cout << "SalvationArmy Acct Balance saved by the CIA is now: " << SalvationArmy << "\n\n\n";

	// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
	system("pause");

	// Adding happy emoji
	cout << " \\ ('v') /  \\ ('v') /  \\ ('v') / " << endl;
	cout << " \\ ('N') /  \\ ('N') /  \\ ('N') / " << endl;
	cout << " \\ ('v') /  \\ ('v') /  \\ ('v') / " << endl;
	cout << " HeHeHe!!! --- THE END :D " << endl;


		return 0;

}





////// REFERENCE ///////

/*

int& dataaccount = demoaccount; // creating a reference

cout << "demoaccount is: " << demoaccount << "\n";
cout << "dataaccount is in ref to demo: " << dataaccount << "\n\n";

//subtracting 200 from demo
cout << "taking 200 from demoaccount to invest: " << demoaccount << "\n";
demoaccount -= 200;
cout << "demoaccount is now: " << demoaccount << "\n\n";

// refering data
cout << "Now dataaccount is also: " << dataaccount << "\n";

// sleep with timming codition specify how fast or slow the console should load for a user
Sleep(1500);

// Adding Invested amount back with profit
cout << "Profit showing invested amount added in dataaccount is: " << dataaccount << "\n";
dataaccount += 399;
cout << "dataaccount is now: " << demoaccount << "\n\n";

// system pause allow user to interact by hold the remaining code untill the user press a key on the keyboard
system("pause");

*/


/////////////  Balance SWAP             ////////