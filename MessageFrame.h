#pragma once
#include "Pgn.h"
class MessageFrame
{
private:
	// Can Identifier Ext.
	uint8_t priority;
	Pgn* pgn;
	uint8_t sourceAddress;

public:
	//Constructors
	MessageFrame();
	MessageFrame(uint8_t sourceAddress);
	MessageFrame(uint8_t priority, Pgn* pgn, uint8_t sourceAddress);
	//Setters
	void setPriority(uint8_t priority);
	void setPGN(Pgn* pgn);
	void setSourceAddress(uint8_t sourceAddress);
	//Getters
	uint8_t getPriority();
	Pgn* getPGN();
	uint8_t getSourceAddress();
};

