#pragma once

#include <string>

using namespace std;

class Appointment {
private:
	int day;
	int month;
	int year;
	int startHr;
	int startMin;
	string serviceType;

public:

	Appointment();
	Appointment(int d, int m, int y, int hr, int min, string serviceType);

	void appointmentSet();

	//set gets
	void setDay(int d);
	int getDay();
	void setMonth(int m);
	int getMonth();
	void setYear(int y);
	int getYear();
	void setStartHr(int hr);
	int getStartHr();
	void setStartMin(int min);
	int getStartMin();
	void setServiceType(string srvcType);
	string getServiceType();

};