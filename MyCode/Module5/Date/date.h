#ifndef POINTER_H
#define POINTER_H

#include <fstream>
#include <algorithm>
#include <String>
using namespace std; 
using namespace std;

class Date
{
private:
	// class state ...
	int m_month;
	int m_day;
	int m_year;

public:
	// behavior...

	Date(); // default ctor
	Date(const Date & other); // copy ctor
	Date(int month, int day, int year);

	virtual ~Date(); // destructor

	// additional methods
	string shortText() const;
	string longText() const;

	// operator overloads
	friend ostream & operator<<(ostream & os, const Date & x);
};

// prototype for the global operator<< function
ostream & operator<<(ostream & os, const Date & x);

#endif