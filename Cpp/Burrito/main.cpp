#include <iostream>
#include "Burrito.h"

using namespace std;

int main(){

	Burrito bo;//constructor is going to be called
	Burrito *boPointer=&bo;

	bo.printSomething(); //object.function
	boPointer->printSomething(); //using pointer
	
//-------------------Constant objects------------------------------------
	const Burrito constObject;   // declaring a constant object

	constObject.constFunction();

//-----------------Creating object for constant variable-----------------
	Burrito bo1(3,14);
	bo1.print();//printing passed varibles to the constructor
	

	return 0;
}