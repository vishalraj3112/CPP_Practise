#include <iostream>

using namespace std;
 
 class StankFist{
 	public :
 		StankFist(){
 			stankVar=0;
 		}
 	private:
 		int stankVar;

 	friend void StankFunction(StankFist &sfo); //This is a friend function the reference of the class needs to be passed
 												//using an object.

 };

 void StankFunction(StankFist &sfo){//This function can access all memebers of class Stanfirst now

 	sfo.stankVar=99;
 	cout<<sfo.stankVar<<endl;

 }


int main(){

	StankFist bob;  
	StankFunction(bob);//only function needs to be called nothing else.

	return 0;

}
