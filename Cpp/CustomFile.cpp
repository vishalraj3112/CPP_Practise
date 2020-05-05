#include<iostream>
#include<fstream>

using namespace std;

int main(){

	ofstream fileObject("Custom Text.txt");

	cout<<"Enter player id,name,money:";

	int idNumber;
	string name;
	float money;

	while(cin>>idNumber>>name>>money){//this loop will break when ctrl+z is pressed
		fileObject<<idNumber<<' '<<name<<' '<<money<<endl;
	}


	return 0;
}