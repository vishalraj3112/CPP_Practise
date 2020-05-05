#include <iostream>
#include "Birthday.h"
//*** Note-This keyword is a special pointer which points to the current object.
using namespace std;

Birthday::Birthday(int d, int m, int y){
	day=d;
	month=m;
	year=y;

}

void Birthday::printDate(){

	cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;//this->points to the current object can also be written as
															//(*this).variable/(*this.object)
}