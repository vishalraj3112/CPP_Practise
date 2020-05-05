#include <iostream>

//*** Note1:-A template is a generic data type, which is used to substitute different data types, 
//to avoid multiple function overloading and reduce code size.

using namespace std;

template <class FIRST,class SECOND>

SECOND smaller(FIRST a, SECOND b){
	return(a<b?a:b);

}

//---------Class template------

template <class T>

class FirstClass{
	T first,second;

public:
	FirstClass(T a,T b){
		first=a;
		second=b;
	}

	T bigger();//return type function_name
};
//rule 1-template declaration required for every function
template <class T>
//rule 2-<type> needs to be specifyied in order to tell that function has same template as class.
T FirstClass<T>::bigger(){
	return(first>second?first:second);
}

//template specialization
template<> //this indicates template specialization
class FirstClass<char>{
	public:
		FirstClass(char x){
			cout<<"This is special class";
		}
};

int main(){
	int a=23;

	double b=56.85;

	cout<<smaller(a,b)<<endl;

	//for class template

	//While instantiating <data_type> needs to be specifyied.
	FirstClass <int> fc(250,100);
	cout<<fc.bigger()<<endl;

	//for special class template
	FirstClass<char> fc1('ch');//used for handling special type of data

	return 0;

}