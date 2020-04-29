#ifndef _PEOPLE_H
#define _PEOPLE_H

#include <string>
#include "Birthday.h"
using namespace std;

class People
{
public:
	People(string n,Birthday dob);
	void printInfo();
private:
	string name;
	Birthday dateOfBirth;
	
};

#endif