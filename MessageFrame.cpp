#include "MessageFrame.h"

MessageFrame::MessageFrame()
{
	this->priority = 0;
	this->pgn = new Pgn(12345, 8);
	this->sourceAddress = 123;
}

MessageFrame::MessageFrame(uint8_t sourceAddress)
{
	this->priority = 0;
	this->pgn = new Pgn(12345, 8);
	this->sourceAddress = sourceAddress;
}

MessageFrame::MessageFrame(uint8_t priority, Pgn* pgn, uint8_t sourceAddress)
{
	this->priority = priority;
	this->pgn = pgn;
	this->sourceAddress = sourceAddress;
}

void MessageFrame::setPriority(uint8_t priority)
{
	this->priority = priority;
}

void MessageFrame::setPGN(Pgn* pgn){
	this->pgn = pgn;
}

void MessageFrame::setSourceAddress(uint8_t sourceAddress){
	this->sourceAddress = sourceAddress;
}

uint8_t MessageFrame::getPriority()
{
	return this->priority;
}

Pgn* MessageFrame::getPGN()
{
	return this->pgn;
}

uint8_t MessageFrame::getSourceAddress()
{
	return this->sourceAddress;
}
