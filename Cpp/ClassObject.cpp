#include <iostream>
#include <string>
//***Note 1:Object.variable can be done but is a bad practise, hence it is important to set class variables private and use
//getter setter meathods to access these variables inside the class.

//***Note 2:Constructors with same name as that of the class are used for initialization, 
using namespace std;

class ClassOne
{
public:
	ClassOne(string z){   //constructor
		setName(z);
	}
	void FirstFunction(){
		cout<<"Printing something"<<endl;
	}
	void setName(string x){
		name=x;				//setting the passed varible to x.
	}
	string getName(){
		return name;		//returning the name variable using this function.
	}
private:
	string name;
	
};

int main(){

	ClassOne classOneObject("Initialization");
	cout<<classOneObject.getName();
	classOneObject.FirstFunction();

	classOneObject.setName("My name is Vishal");//calling setter
	cout<<classOneObject.getName();				//calling getter




	return 0;


}