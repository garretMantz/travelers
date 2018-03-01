#pragma once
#include <iostream>
#include <string>
using namespace std;

class traveler {
private:
	string name;
public:
	void play() {
		cout << "What is your name, traveler?" << endl;
		cin >> name;
		cout << "Welcome to Travelers, " << name << ". We've been waiting for someone like you." << endl;
	}

};