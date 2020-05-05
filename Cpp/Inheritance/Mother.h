/*
 * Mother.h
 *
 *  Created on: 29-Apr-2020
 *      Author: vishal
 */

#ifndef MOTHER_H_
#define MOTHER_H_

class Mother {
public:
	Mother();
	void printSurname();
	~Mother();
protected:
	int protectedv;//this can be inherited
private:
	int privatev;//this cannot be inherited by derived class
};

#endif /* MOTHER_H_ */
