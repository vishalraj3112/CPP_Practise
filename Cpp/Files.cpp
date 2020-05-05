#include<iostream>
#include<fstream>

using namespace std;

int main(){

	ofstream fileObject("NewFile.txt"); // file obect is of type ofstream, if 'NewFile.txt' is not created it will make one
										//and open.

	if(fileObject.is_open()){//just used to check if the object associated with file is open
		cout<<"File is open";
		fileObject<<"Writing some text.";
	}else{
		cout<<"File not open, something is wrong.";
	}

	fileObject.close();//necessary to close file to deallocate resources.


	return 0;

}