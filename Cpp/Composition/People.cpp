#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;

People::People(string n,Birthday dob)
:name(n),dateOfBirth(dob)            // the members need to be initilized using ":" because another class needs to be initilized
{
}

void People::printInfo(){

	cout<<name<<" was born on:";
	dateOfBirth.printDate();
}