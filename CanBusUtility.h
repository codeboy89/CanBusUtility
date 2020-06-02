#pragma once
#include <sstream>
#include <CanBusUtility\CanBusUtility\J1939Config.h>

class CanBusUtility
{
private:
	J1939Config** j1939Configs = new J1939Config*[100];
	int numberOfModels = 4000;
	//Pgn** pgnModels;
	bool busConnectedState = false;
	static CanBusUtility* instance;
	
public:
	CanBusUtility();
	~CanBusUtility();
	bool isBusConnected();
	bool connect();
	void print();
};

