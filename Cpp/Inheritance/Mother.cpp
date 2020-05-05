/*
 * Mother.cpp
 *
 *  Created on: 29-Apr-2020
 *      Author: vishal
 */

#include "Mother.h"
#include "Daughter.h"
#include <iostream>

using namespace std;

Mother::Mother() {
	// TODO Auto-generated constructor stub
cout<<"Mother constructor"<<endl;
}

void Mother::printSurname(){
	cout<<"My surname is Singh"<<endl;
}

Mother::~Mother(){
	cout<<"Mother Deconstructor"<<endl;
}
