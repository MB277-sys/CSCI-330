#include <iostream>
#include "Date.h"
using namespace std;
#include <iostream>
#include "Date.h"

using namespace std;

const string SLASH("/");
const string MONTHS[] = 
{
	"January", "February", "March", "April",
	"May", "June", "July", "August",
	"September", "October", "November", "December"
};

// default ctor
Date::Date() :
	m_month(1), m_day(1), m_year(2000)
{

}

// copy ctor
Date::Date(const Date & other) :
	m_month(other.m_month), m_day(other.m_day), m_year(other.m_year)
{

}

Date::Date(int month, int day, int year) : 
	m_month(month), m_day(day), m_year(year)
{
}

// dtor...
Date::~Date()
{

}

// other methods...
//...
string Date::shortText() const
{	
	return to_string(m_month) + SLASH + to_string(m_day) + 
		SLASH + to_string(m_year);
}

string Date::longText() const
{
	return MONTHS[m_month-1] + " " + to_string(m_day) + 
		", " + to_string(m_year);
}

ostream & operator<<(ostream & os, const Date & x)
{
	os << x.longText();
	return os;
}