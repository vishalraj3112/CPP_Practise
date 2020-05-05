/*
 * Daughter.cpp
 *
 *  Created on: 29-Apr-2020
 *      Author: vishal
 */

#include "Mother.h"
#include "Daughter.h"
#include <iostream>

using namespace std;

Daughter::Daughter() {
	// TODO Auto-generated constructor stub
protectedv=1;//using the base class protected variable
cout<<"Daughter constructor"<<endl;
}

Daughter::~Daughter(){

	cout<<"Daughter deconstructor"<<endl;
}
