// thinking of using an upgrading class system.
// e.g. thief->bandit->trickster->ninja->shadow etc.
// had way more but ive been up for 3 hours messing with fucking git.
#include <string>
#include <iostream>
using namespace std;

class character {
private: 
	int health, attack, defense, energy;
	string role,name;
public:
	void characterCreation() {
		cout << "What is your name, traveler?" << endl;
		cin >> name;
		cout << "Welcome to Travelers, " << name << ". We've been waiting for someone like you." << endl;
	}

};

