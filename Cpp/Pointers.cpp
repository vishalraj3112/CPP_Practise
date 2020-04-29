#include <iostream>

using namespace std;

int main(){

	int variable=5;
	int *pointer;

	pointer= &variable; // here '*pointer' is not requried only 'pointer' is required since compiler knows it is a pointer,only 
						//required during initialization

	cout<<"Pointer value:"<< pointer <<endl;
	cout<<"Value pointed by pointer:"<<*pointer << endl;

}