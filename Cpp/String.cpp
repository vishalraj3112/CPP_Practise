#include<iostream>
#include<string>

using namespace std;

int main(){

string s1("I am ham yada yada");//s1= I am ham yada yada

string s2;

s2.assign(s1);


s1.substring('from','till');

s2.swap(anotherString);//s2 swaps with anotherString

s1.find(yada);//returns index of 1st yada.
s1.rfind(yada);//returns index of 1st yada from reverse. 

s1.erase(4);//erases everything from 'ham...'

s1.replace(5,7,'Jam');//Replaces ham with Jam,replace(from,till,'with what');

s1.insert(5,'Jam'); //new sentence -I am Jam ham yada yada ,replace(position, 'With what'), usually used with s2.find();


}
