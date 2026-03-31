#include<iostream>
using namespace std;

class A{
	protected:
		int x;
	public:
		A():x(10){
			cout<<"constructor-A"<<endl;
		}
		A(int a):x(a){
			cout<<"PARAMETRIZED CONSTRUCTOR -A"<<endl;
		}
		~A(){
			cout<<"DESTRUCTOR -A"<<endl;
		}
};

class B:public A{
	protected:
		int y;
	public:
		B():A(),y(20){
			cout<<"constructor-B"<<endl;
		}
		B(int a, int b):A(a),y(b){
			cout<<"PARAMETRIZED CONSTRUCTOR -B"<<endl;
		}
		~B(){
			cout<<"DESTRUCTOR -B"<<endl;
		}
};

class C:public B{
	protected:
		int z;
	public:
		C():B(),z(30){
			cout<<"constructor-C"<<endl;
		}
		C(int a, int b, int c):B(a,b),z(c){
			cout<<"PARAMETRIZED CONSTRUCTOR -C"<<endl;
		}
		~C(){
			cout<<"DESTRUCTOR -C"<<endl;
		}
		void print(){
			cout<<"x=" <<x<<" y= "<<y<<" z= "<<z<<endl;
		}
};
int main(){
	C obj1, obj2(11,22,33);
	cout<<"obj1 data"<<endl;
	obj1.print();
	cout<<"obj2 data"<<endl;
	obj2.print();
}
