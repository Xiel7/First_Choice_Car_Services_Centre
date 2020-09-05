#pragma once
#include "Person.h"
#include <string>

using namespace std;


class Technician : public Person {
private:
	string abbrev = "TC";
public:
	Technician();
	Technician(string firstName, string lastName, string techID);
	void printInfo();
	void registerTechnician(int size);

};
