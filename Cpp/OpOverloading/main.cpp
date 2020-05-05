#include <iostream>
#include "Birthday.h"

using namespace std;


int main(){

	Birthday bo(20);  //first making object with int type constructor
	Birthday ao(30);  //making object with int type const
	Birthday co;	  //making object with no parameter constructor

	co=ao+bo;//operator overloading function is used

	cout<<co.num<<endl;
	



	return 0;
}