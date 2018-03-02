#pragma once
#include <string>
#include "character.h"
using namespace std;

class traveler {
private:
	
public:
	void play() {
		character player = character();

	//intro begin
		player.characterCreation();

		player.checkStats();

		system("pause");
	}

};

ostream& operator << (ostream &left, character right) {

	left << "Character Level: " << right.level << endl;
	left << "Total HitPoints: " << right.totalHitPoints << endl;
	left << "Attack Value: " << right.attack << endl;
	left << "Defence Value: " << right.defence << endl;
	left << "Total Stamina: " << right.totalStamina << endl;

	return left;

}