// thinking of using an upgrading class system.
// e.g. thief->bandit->trickster->ninja->shadow etc.
// had way more but ive been up for 3 hours messing with fucking git.
#include <string>
#include <iostream>
#include <cctype>
using namespace std;

class character {
	friend ostream& operator << (ostream &left, character right);
private: 
	//character attributes
	int attack;
	int hitPoints;
	int totalHitPoints;
	int level;
	int experience;
	int experienceNeeded;
	int stamina;
	int totalStamina;
	int defence;
	//strings
	string playerClass;
	string playerName;
	
	
public:
	
	character();
	//functions, item usage.
	void useHealthPotion();
	void useManaPotion();
	void checkStats();
	void setPlayerClass();
	void setPlayerName();
	void checkInventory();
	void characterCreation();

	//combat
	
	

};

ostream& operator << (ostream &left, character right) {

	left << "Character Level: " << right.level << endl;
	left << "Total HitPoints: " << right.totalHitPoints << endl;
	left << "Attack Value: " << right.attack << endl;
	left << "Defence Value: " << right.defence << endl;
	left << "Total Stamina: " << right.totalStamina << endl;

	return left;

}