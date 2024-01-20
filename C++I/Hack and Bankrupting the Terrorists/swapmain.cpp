// including iostream directive tells the preprocessor to include other contents file.
#include <iostream>


// with the include String, we can not display a string output or alphabetical characters.
#include <string>

// windows.h library allow coders to do more like adding delays like sleep for some seconds
#include <windows.h>


// using namespace std to avoid std:: cout repetitions in our code
using namespace std;

//
#include "swapHeader.h"



// using namespace std to avoid std:: cout repetitions in our code
using namespace std;

//Deploying and setting parameters for my functions

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