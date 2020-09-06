#pragma once
#include "Services.h"

#include <string>

using namespace std;

class Appointment {
private:
	Services* services;
	int day;
	int month;
	int year;
	int startHr;
	int startMin;
	

public:

	Appointment();
	Appointment(int day, int month, int year, int startHr, int startMin, Services* services);
	Appointment(Services* services);

	void appointmentSet();
	void printAppointment();

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

	void setServices(Services* services);
	Services* getServices();

};