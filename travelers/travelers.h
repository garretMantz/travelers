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
		player.checkEquipment();

		system("pause");
	}

};

