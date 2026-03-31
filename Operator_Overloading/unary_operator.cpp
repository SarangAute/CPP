#include<iostream>
using namespace std;

class A{
	int x,y;
	public:
	A(){}
	A(int a, int b):x(a),y(b){}

	A operator-(){
		A res;
		res.x = -x;
		res.y = -y;
		return res;
	}
	void print(){
		cout<<"x = "<<x<<" y = "<<y<<endl;
	}
};

int main(){
	A obj1(11,12),obj2;
	cout<<"object 1 data : "<<endl;
	obj1.print();
	obj2=-obj1;
	cout<<"after obj2=-obj1 obj2: "<<endl;
	obj2.print();
}
