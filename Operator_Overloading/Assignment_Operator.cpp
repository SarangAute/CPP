#include<iostream>
using namespace std;
class A{
	int x;
	public:
	A(){}
	A(int a):x(a){}
	void operator = (A &ob){
		x=ob.x;
	}
	void print();
};

void A::print(){
	cout<<"x = "<<x<<endl;
}

int main(){
	A obj1(10), obj2;
	obj2 = obj1;		//obj2.operator=(obj1)
	cout<<"obj1.x = 10"<<endl;
	cout<<"obj2 = obj1"<<endl;
	cout<<"obj2.";
	obj2.print();
}
