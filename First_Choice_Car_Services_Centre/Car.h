#pragma once
#include <string>

using namespace std;

class Car {

private:
	string crNo;

public:
	Car();
	Car(string crNo);

	//set get for crNo
	void setCrNo(string crNo);
	string getCrNo();
};