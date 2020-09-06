#pragma once
#include "Person.h"
#include <string>

using namespace std;


class Technician : public Person {
private:
	string abbrev = "TC";
	int results;
public:
	Technician();
	Technician(string firstName, string lastName, string techID);
	void printInfo();
	void registerTechnician(int size);
	void search_by_FName();
	void search_by_LName();
	void search_by_ID();
	void print_grade(int result);
};
