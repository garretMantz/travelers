#include "stdafx.h" 
#include <string>
#include <iostream>
#include "character.h"


using namespace std;

character::character() {
	hitPoints = 100; //sets player's current health.
	totalHitPoints = 100; //sets player's current maximum health.
	level = 1; // sets players base level.
	experience = 0; //sets player's current experience.
	experienceNeeded = 50; //sets the amount needed for a player to level up.
}
void character::characterCreation() {
	setPlayerName();
}
void character::setPlayerName() { //sets player's name.
	cout << "What is your name, traveler?" << endl;
	cin >> playerName;
	system("cls");
	setPlayerClass();
}

void character::setPlayerClass() {
	bool validClass = false;
	int i = 0;
	while (!validClass) {
		cout << "Welcome to Travelers, " << playerName << ". We've been waiting for someone like you." << endl;
		cout << "What is your job?" << endl << endl;
		cout << "Farmer" << endl;
		cout << "Magician" << endl;
		cout << "Thief" << endl << endl;
		cin >> playerClass;
		tolower(playerClass[i]);
		if ((playerClass == "farmer") || (playerClass == "magician") || (playerClass == "thief")) {
			validClass = true;
		}
		
		system("cls");
	}
}

void character::useHealthPotion() {

}

void character::useManaPotion() {

}

void character::checkStats() {

}

void character::checkInventory() {

}