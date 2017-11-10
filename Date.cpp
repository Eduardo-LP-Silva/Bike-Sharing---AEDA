#include"Date.h"


using namespace std;


void Date::setDay(int day)
{
	if ( day > 0 && day < 31)
	{
		this->day = day ;

	}
	else 
	{
		setMonth(this->month + 1);
		this->day = (day % 31) ;
	}
}

void Date::setMonth(int m)
{
	if (m == 0)
	{
		this->month = 1;
	}

else	if (m > 0 && m <= 12)
	{
		this->month = m;
	}
	else
		this->month = m % 12;

}

void Date::setHour(int h)
{
	if (h >= 24)
	{

		setDay(this->day + 1);
		this->hour = (h % 24) ;
	}
	else 
		this->hour = h;

}

void Date::setMinutes(int m)
{
	if (m >= 60)
	{

		setHour(this->hour + 1);
		this->minutes = m % 60;

	}
	else
		this->minutes = m;
}

Date::Date(int month, int day, int hour, int minutes)
{
	setMonth(month);
	setDay(day);
	setHour(hour);
	setMinutes(minutes);
	





}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getHour()
{
	return hour;
}

int Date::getMinutes()
{
	return minutes;
}

void Date::addHour(int h)
{
	setHour(this->hour + h);

}

int Date::operator-( Date &date1)
{
	int subtraction_result= 0;


	subtraction_result += 24 * (this->day - date1.getDay());
	subtraction_result += (this->month - date1.getMonth()) * 744;
	subtraction_result += this->hour - date1.getHour();


	return subtraction_result;

}