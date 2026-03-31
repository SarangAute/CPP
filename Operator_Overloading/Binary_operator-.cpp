#include<iostream>
using namespace std;

class A{
	int x,y;
	public:
	A(){}
	A(int a, int b):x(a),y(b){}
	
	A operator-(A &ob){
		A res;
		res.x = x-ob.x;
		res.y = y-ob.y;
		return res;
	}
	void print(){
		cout<<"x = "<<x<<" y = "<<y<<endl;	
	}
};

int main(){
	A obj1(20,30),obj2(10,30),obj3;
	cout<<"object 1 values: "<<endl;
	obj1.print();
	cout<<"object 2 values: "<<endl;
	obj2.print();

	obj3 = obj1-obj2;
	cout<<"object 3 values: "<<endl;
	obj3.print();
}
