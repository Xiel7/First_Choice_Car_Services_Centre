#pragma once
#include "Person.h"
#include <string>

using namespace std;


class Technician : public Person {
private:

public:
	Technician();
	Technician(string firstName, string lastName, string techID);

	void printInfo();
};
