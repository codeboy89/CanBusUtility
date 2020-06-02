#include "Pgn.h"

Pgn::Pgn(int pgn_number, int spnCount) {
	this->pgnNumber = pgn_number;
	this->spnCount = spnCount;
	spnModels = new Spn * [spnCount];
	for (int i = 0; i < spnCount; i++) {
		spnModels[i] = new Spn(i + 234);
	}
}

Pgn::~Pgn()
{
	//std::cout << "pgn deleting: " << pgnNumber << std::endl;
	for (int i = 0; i < spnCount; i++)
	{
		delete spnModels[i];
	}
	delete[] spnModels;
}

int Pgn::getSpnCount()
{
	return this->spnCount;
}

void Pgn::setName(string name) {
	this->name = name;
}

double Pgn::getValueRaw()
{
	return 0.0;
}

double Pgn::getValueOverridden()
{
	return this->valueOverridden;
}

int Pgn::getPgnNumber()
{
	return this->pgnNumber;
}

void Pgn::print() {
	cout << "Pgn " << this->pgnNumber << endl;
}

Spn** Pgn::getSpns()
{
	return spnModels;
}
