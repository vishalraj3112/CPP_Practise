#ifndef _BURRITO_H_
#define _BURRITO_H_

class Burrito{

public:
	Burrito();//constructor
	~Burrito();//deconstructor
	Burrito(int a , int b); // constructor overloading
	void print();
	void printSomething();
	void constFunction() const;  // declaring a constant function prototype
private:
	int regVar;
	const int constVar;  //now many rules to be followed for initializing this !

};


#endif