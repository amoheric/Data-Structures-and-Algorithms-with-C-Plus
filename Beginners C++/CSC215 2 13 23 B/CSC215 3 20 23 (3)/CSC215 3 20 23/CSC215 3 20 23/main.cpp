#include  <iostream>
#include <string>
#include "classes.h"

using namespace std;





int main()
{
	int i;
	Charcter char1("jill", 5, 0);
	char1.display();

	Enemy enemy1("Rob", 7, 12, -1);
	enemy1.display();

	Player player1("Fred", 50, 0, -3);
	player1.display();
	return 0;
}
