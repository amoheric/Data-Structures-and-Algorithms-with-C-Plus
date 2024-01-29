#include  <iostream>
#include <string>

using namespace std;

class Charcter
{
private:
	string name;
	int strength;
	int health;

public:
	Charcter(string Name, int Strength, int Health)
	{
		name = Name;
		if (Strength < 20)
		{
			cout << "strength too low - set to 25" << endl;
			strength = 25;
		}
		else
		{
			strength = Strength;
		}

		if (Health < 1)
		{
			cout << "health too low for starting, set to 10" << endl;
			health = 10;
		}
		else
		{
			health = Health;
		}

	}
	void display()
	{
		cout << "name = " <<  name << endl;
		cout << "strength = " << strength << endl;
		cout << "health = " << health << endl;
	}
};

int main()
{
	int i;
	Charcter char1("jill", 5, 0);
	char1.display();
	return 0;
}
