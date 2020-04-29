#include <iostream>
#include <string>

class ClassOne
{
private:
	string name;

public:
	ClassOne(string z){
		setName(z);
	}

	string getNamevariable(){
		return name;
	}

	// void setName(string x){
	// 	name=x;
	// }

	


	
};

int main(){

	ClassOne co("First constructor");
	cout<<co.getNamevariable();

	// ClassOne co1("Second Constructor");
	// cout<<co.getNamevariable();


	return 0;
}