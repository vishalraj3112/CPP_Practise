#ifndef _BIRTHDAY_H_
#define _BIRTHDAY_H_

class Birthday
{

public:
	int num;
	Birthday();//blank constructor
	Birthday(int);//int passed constructor
	Birthday operator+ (Birthday);//This is a function of return type birthday name(operator+) and argument Birthday object.


};

#endif