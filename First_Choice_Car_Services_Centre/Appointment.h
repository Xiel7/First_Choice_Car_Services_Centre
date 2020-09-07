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

	void dateValidation(int d, int m, int y, int* valid);
	void timeValidation(int inHr, int inMin, int* valid);
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