#include "Year.h"
#include <cstring>
#include<iostream>
using namespace std;
Year::Year(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;

    int Month[12]  = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    memcpy(MonthLib, Month, 12 * sizeof(int));
}


bool Year::LeapYear()
{
    if (year % 400 == 0 ||(year % 4 == 0 && year % 100 != 0))
        return true;
    else
        return false;
}
int Year::Verify()
{
	int count = day;

	if (LeapYear());
	{
		MonthLib[1] = 29;
	}
	for (int i = 0; i < month - 1 && i < 12 ; i++)
	{
		count += MonthLib[i];
	}

	return count;
}

