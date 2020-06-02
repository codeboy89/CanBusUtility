#pragma once
#include <string>
#include <iostream>
#include <CanBusUtility\CanBusUtility\Spn.h>
using namespace std;
class Pgn
{
private:
	int spnCount;
	Spn** spnModels;
	string name = "PGN_TEST!!!";
	double valueRaw = 1;
	double valueOverridden = 2;
	int pgnNumber = 3;
public:
	Pgn(int pgn_number, int spnCount);
	~Pgn();
	int getSpnCount();
	void setName(string name);
	double getValueRaw();
	double getValueOverridden();
	int getPgnNumber();
	void print();
	Spn** getSpns();
};

