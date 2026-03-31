#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	A(){}
	A(int a, int b):x(a),y(b){}
	A* operator->(){
		return this;
	}
	void print(){
		cout<<"x = "<<x<<" Y = "<<y<<endl;
	}
};

int main(){
	A obj(10,20);
	obj->print();
}
