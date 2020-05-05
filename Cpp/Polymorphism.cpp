#include <iostream>

using namespace std;

class Enemy
{
public:
	virtual void attack()=0;  //function template
	
};

class Ninja :public Enemy  //inheriting
{
public:
	void attack(){			//overriding function-polymorphism
		cout<<"Ninja attack!"<<endl;
	}
};

class Monster :public Enemy
{
public:
	void attack(){		  //overriding function-polymorphism
		cout<<"Monster attack!"<<endl;
	}
};

int main(){

	Ninja n;
	Monster m;

	Enemy *enemy1=&n;
	Enemy *enemy2=&m;

	enemy1->attack();
	enemy2->attack();

}