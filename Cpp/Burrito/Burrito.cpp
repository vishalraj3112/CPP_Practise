#include <iostream>
#include "Burrito.h"

//***Note 1:A deconstructor cannot have a return type and overloading is not possible like a constructor
//***Note 2:Declaring a function constant is necessary for constant object
using namespace std;

int b;

Burrito::Burrito()
:constVar(b)

{//this is a constructor, class::constructor
	
	cout<<"I am a constructor"<<endl;

}

Burrito::~Burrito(){

	cout<<"I am a deconstructor"<<endl;

}

//Adding second constructor-constructor overloading
Burrito::Burrito(int a , int b)
:regVar(a),
constVar(b)
{

}

void Burrito::print(){
	cout<<"regular variable:"<<regVar<<"Constant variable:"<<constVar<<endl;
}

void Burrito::printSomething(){//class:: function, in order to tell which class it belongs to

	cout<<"Printing something"<<endl;
}

//-------------constant function---------------

void Burrito::constFunction() const{
	
	cout<<"I am a constant function"<<endl; 

}