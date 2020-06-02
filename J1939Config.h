#pragma once
#include <iostream>
#include <string>
class J1939Config
{
private:
	int spnNumber;
	int pgnNumber;
	int spnIndex;
	int dlc;
	int bitCount;
	int startByte;
	int startBit;
	std::string multiplierBytesToValue;
	std::string multiplierValueToBytes;
	double offset;
	double lowerRange;
	double upperRange;
	int txRate;
	int sa;
	std::string extendedID;


public:
	J1939Config(int spnNumber, int pgnNumber, int spnIndex, int dlc, int bitCount, int startByte, 
		int startBit, std::string multiplierBytesToValue, std::string multiplierValueToBytes, double offset,
		double lowerRange, double upperRange, int txRate, int sa, std::string extendedID);
	~J1939Config();
	void print();
};

