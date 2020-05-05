#include<iostream>
#include<fstream>

using namespace std;

int main(){

	ifstream FileReadObject("Custom Text.txt");//ifstream for reading object.

	int idNumber;
	string name;
	float money;

	while(FileReadObject>>idNumber>>name>>money){
		cout<<idNumber<<","<<name<<","<<money<<","<<endl;

	}

	return 0;

}

