#pragma once
#include <string>

using namespace std;

class Car {

private:
	string crNo;

public:
	Car();
	Car(string crNo);
	void setcrNo(string crNo);
	string getcrNo();
};