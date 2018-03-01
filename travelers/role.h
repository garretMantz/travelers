#pragma once
#include <iostream>
#include <string>

using namespace std;
class role {

private:
	int health;
	int attack;
	int defence;
	int energy;
	string characterRole;



public:
	role() {
		health = 0;
		attack = 0;
		defence = 0;
		energy = 0;
	}

	role(string _role, int _health, int _attack, int _defence, int _energy) {

		characterRole = _role;
		health = _health;
		attack = _attack;
		defence = _defence;
		energy = _energy;


	}

};
