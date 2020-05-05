#include<iostream>

using namespace std;

int main(){

	try{
		int num1,num2;
		
		cout<<"Enter First number:";
		cin>>num1;

		cout<<"Enter Second number";
		cin>>num2;

		if(num2==0){
			throw 0;
		}

		cout<<"Ans:"<<(num1/num2);
	}catch(int x)/*catch(...) for all types of errors*/{
		cout<<"Divide by zero error!";

	}
}