#include "J1939Config.h"

J1939Config::J1939Config(int spnNumber,
	int pgnNumber,
	int spnIndex,
	int dlc,
	int bitCount,
	int startByte,
	int startBit,
	std::string multiplierBytesToValue,
	std::string multiplierValueToBytes,
	double offset,
	double lowerRange,
	double upperRange,
	int txRate,
	int sa,
	std::string extendedID)
{
	this->spnNumber = spnNumber;
	this->pgnNumber = pgnNumber,
	this->spnIndex = spnIndex;
	this->dlc = dlc;
	this->bitCount = bitCount;
	this->startByte = startByte;
	this->startBit = startBit;
	this->multiplierBytesToValue = multiplierBytesToValue;
	this->multiplierValueToBytes = multiplierValueToBytes;
	this->offset = offset;
	this->lowerRange = lowerRange;
	this->upperRange = upperRange;
	this->txRate = txRate;
	this->sa = sa;
	this->extendedID = extendedID;
	//std::cout << "Created J1939Config: " << cspnNumber << std::endl;
}

J1939Config::~J1939Config()
{
}

void J1939Config::print()
{
	std::cout << std::endl;
	std::cout << "cspnNumber                " << spnNumber << std::endl;
	std::cout << "cpgnNumber                " << pgnNumber << std::endl;
	std::cout << "cspnIndex                 " << spnIndex << std::endl;
	std::cout << "cdlc                      " << dlc << std::endl;
	std::cout << "cbitCount                 " << bitCount << std::endl;
	std::cout << "cstartByte                " << startByte << std::endl;
	std::cout << "cstartBit                 " << startBit << std::endl;
	std::cout << "cmultiplierBytesToValue   " << multiplierBytesToValue << std::endl;
	std::cout << "cmultiplierValueToBytes   " << multiplierValueToBytes << std::endl;
	std::cout << "coffset                   " << offset << std::endl;
	std::cout << "clowerRange               " << lowerRange << std::endl;
	std::cout << "cupperRange               " << upperRange << std::endl;
	std::cout << "ctxRate                   " << txRate << std::endl;
	std::cout << "csa                       " << sa << std::endl;
	std::cout << "cextendedID               " <<extendedID << std::endl;
}
