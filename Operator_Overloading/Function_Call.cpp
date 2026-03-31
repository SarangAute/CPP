#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	A(){}
	A(int a, int b):x(a),y(b){}
	void operator ()(int a, int b){
		x=a;y=b;
	}
	void print();
};

void A:: print(){
	cout<<"x = "<<x<<" y = "<<y<<endl;
}

int main(){
	A obj(10,20);
	cout<<"initial object data "<<endl;
	obj.print();

	obj(30,40);
	cout<<"after modification1"<<endl;
	obj.print();

	obj(50,60);
	cout<<"after modification2"<<endl;
	obj.print();
}
