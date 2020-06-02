#include "Spn.h"
#include <iostream>

Spn::~Spn()
{
	//std::cout << "spn deleting: " << spnNumber << std::endl;
}

Spn::Spn(int spnNumber)
{
	this->spnNumber = spnNumber;
}

int Spn::getSpnNumber()
{
	return this->spnNumber;
}
