#include <iostream>
#include "Birthday.h"
//*** Note-This keyword is a special pointer which points to the current object.
using namespace std;

Birthday::Birthday(){

}

Birthday::Birthday(int a){

	num=a;
}

Birthday Birthday::operator+(Birthday bo){
	Birthday newObject;
	newObject.num=num+bo.num;

	return(newObject);

	
}