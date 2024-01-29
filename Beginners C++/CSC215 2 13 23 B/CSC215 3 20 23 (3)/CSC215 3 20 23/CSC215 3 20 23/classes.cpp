
#include <string>
#include <iostream>
#include "classes.h"
using namespace std;

Charcter::Charcter(string Name, int Strength, int Health)
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

void Charcter::display()
{
	cout << "name = " << name << endl;
	cout << "strength = " << strength << endl;
	cout << "health = " << health << endl;
}


Enemy::Enemy(string Name, int str, int Health, int wait) : Charcter(Name, str, Health)
{
	Charcter::Charcter(Name, str, Health);
	if (wait > 0)
	{
		waitToSpawn = wait;
	}
	else
	{
		cout << "your spawn time is too low - set to 5" << endl;
		waitToSpawn = 5;
	}
}

void Enemy::display()
{
	Charcter::display();
	cout << "time to spawn = " << waitToSpawn << endl;
}


Player::Player(string Name, int str, int Health, int lives) : Charcter(Name, str, Health)
{
	Charcter::Charcter(Name, str, Health);
	if (lives < 0)
	{
		cout << "lives must be >0, set to 3" << endl;
		numLives = 3;
	}
	else
	{
		numLives = lives;
	}
}

void Player::display()
{
	Charcter::display();
	cout << "lives = " << numLives;
}