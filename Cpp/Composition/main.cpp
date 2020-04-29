#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;


int main(){

	Birthday bo(31,12,1997);  //first making object of inner class

	People peep("Vishal",bo); //second making object of outer class

	peep.printInfo();



	return 0;
}