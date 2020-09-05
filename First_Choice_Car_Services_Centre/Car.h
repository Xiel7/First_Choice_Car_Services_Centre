#pragma once
#include <string>

using namespace std;

class Car {

private:
	string crNo;
	string crMode;
	string crColor;

public:
	Car();
	Car(string crNo, string crMode, string carColor);

	void printInfo();
	void registerCar();

	//set get for crNo
	void setCrNo(string crNo);
	string getCrNo();
	void setCrMode(string crMode);
	string getCrMode();
	void setCrColor(string crColor);
	string getCrColor();
};