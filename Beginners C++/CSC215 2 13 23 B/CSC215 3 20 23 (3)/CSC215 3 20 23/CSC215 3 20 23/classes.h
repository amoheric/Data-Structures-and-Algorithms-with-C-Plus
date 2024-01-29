#include <string>
#include <iostream>
using namespace std;

class Charcter
{
private:
	string name;
	int strength;
	int health;

public:
	Charcter(string Name, int Strength, int Health);
	
	void display();
	
};

class Enemy : public Charcter
{
private:
	int waitToSpawn;
public:
	Enemy(string Name, int str, int Health, int wait);
	

	void display();
	
};

class Player : Charcter
{
private:
	int numLives;
public:

	Player(string Name, int str, int Health, int lives);
	
	void display();
	


};

#pragma once
