#include "Appointment.h"

#include <iostream>
#include <string>


Appointment::Appointment()
{

}

Appointment::Appointment(int day, int month, int year, int startHr, int startMin, Services* services): services(services)
{
	this->day = day;
	this->month = month;
	this->year = year;
	this->startHr = startHr;
	this->startMin = startMin;
}

void Appointment::appointmentSet()
{
	cout << "Enter the date of the appointment :" << endl;
}
//set gets

void Appointment::setDay(int d)
{
	day = d;
}


int Appointment::getDay()
{
	return day;
}

void Appointment::setMonth(int m)
{
	month = m;
}

int Appointment::getMonth()
{
	return month;
}

void Appointment::setYear(int y)
{
	year = y;
}

int Appointment::getYear()
{
	return year;
}
void Appointment::setStartHr(int hr)
{
	startHr = hr;
}

int Appointment::getStartHr()
{
	return startHr;
}

void Appointment::setStartMin(int min)
{
	startMin = min;
}

int Appointment::getStartMin()
{
	return startMin;
}

