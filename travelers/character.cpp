#pragma once
#include "stdafx.h" 
#include <string>
#include <iostream>
#include "character.h"



using namespace std;

character::character() {
	attack = 10;
	defence = 10;
	stamina = 50;
	totalStamina = 50;
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

	if (playerClass == "farmer") {

		

	}
}

void character::useHealthPotion() {
	//enum Potion {small, regular, max};
}

void character::useManaPotion() {

}

void character::checkStats() {

	std::cout << "Player stats" << endl;
	//not sure how to access the character we made in play?
	cout << character(); 
	

}

void character::checkEquipment() {

	std::cout << "Player Equipment" << endl;
	//for (int equipSlot = 0; equipSlot < 2; equipSlot++) {

		std::cout << equipment();
	//}
}

void character::checkInventory() {

}

