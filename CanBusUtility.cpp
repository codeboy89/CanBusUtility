#include "CanBusUtility.h"
#include <DataWorldUtils\DataWorldUtils\FileReader.h>
CanBusUtility::CanBusUtility()
{
	FileReader * fileReader = new FileReader("C:\\dev\\j1939.csv");
	for (int i = 1; i < fileReader->getVector().size(); i++)
	{
		if (i != 0) {
			std::string t = fileReader->getVector().at(i);
			std::stringstream lineStream(t);
			std::string cell;
			std::vector<std::string> row;
			while (std::getline(lineStream, cell, ','))
			{
				row.push_back(cell);
			}
			j1939Configs[i-1] = new J1939Config(
				std::stoi(row.at(0)),
				std::stoi(row.at(1)),
				std::stoi(row.at(2)),
				std::stoi(row.at(3)),
				std::stoi(row.at(4)),
				std::stoi(row.at(5)),
				std::stoi(row.at(6)),
				row.at(7),
				row.at(8),
				std::stod(row.at(9)),
				std::stod(row.at(10)),
				std::stod(row.at(11)),
				std::stoi(row.at(12)),
				std::stoi(row.at(13)),
				row.at(14)
			);
		}
	}
	for (int i = 0; i < fileReader->getVector().size()-1; i++) {
		j1939Configs[i]->print();
	}
}

CanBusUtility::~CanBusUtility()
{
	//std::cout << "deleting: CanbusUtitlity " << std::endl;
	//for (int i = 0; i < numberOfModels; i++)
	//{
	//	delete pgnModels[i];
	//}
	//delete [] pgnModels;
}


bool CanBusUtility::isBusConnected()
{
	return this->busConnectedState;
}

bool CanBusUtility::connect()
{
	this->busConnectedState = true;
	return this->busConnectedState;
}
void CanBusUtility::print() {
	//for (int i = 0; i < numberOfModels; i++) {
	//	std::cout << "PGN: " << pgnModels[i]->getPgnNumber() << std::endl;
	//	for (int j = 0; j < pgnModels[i]->getSpnCount(); j++) {
	//		Spn** spnArray = pgnModels[i]->getSpns();
	//		std::cout << "PGN: " << pgnModels[i]->getPgnNumber() << " SPN:" << spnArray[j]->getSpnNumber() << std::endl;
	//	}

	//}

}