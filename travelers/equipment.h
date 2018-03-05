#pragma once
#include <string>
#include <iostream>

using namespace std;

class equipment {
	friend ostream & operator << (ostream &left, equipment right);


private:
	int attackValue;
	int defenceValue;
	string equipmentName;
	



public:

	equipment() {
		attackValue = 0;
		defenceValue = 0;
		equipmentName = "Default";


	}
	equipment(int _attackValue, int _defenceValue, string _equipmentName) {
		attackValue = _attackValue;
		defenceValue = _defenceValue;
		equipmentName = _equipmentName;


	}

	






};

ostream & operator << (ostream &left, equipment right) {
	


	left << right.equipmentName;

	

	return left;

}