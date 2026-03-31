#include<iostream>
using namespace std;
class A{
	protected:
		int x;
	public:
		A():x(10){
			cout<<"constructor - A"<<endl;
		}
		A(int a):x(a){
			cout<<"parametrized constructor - A"<<endl;
		}
		~A(){
			cout<<"destructor - A"<<endl;
		}
};
class B:virtual public A{
	protected:
		int y;
	public:
		B():y(20){
			cout<<"constructor - B"<<endl;
		}
		B(int a, int b):A(a),y(b){
			cout<<"parametrized constructor - B"<<endl;
		}
		~B(){
			cout<<"destructor - B"<<endl;
		}
};
class C:virtual public A{
	protected:
		int z;
	public:
		C():z(30){
			cout<<"constructor - C"<<endl;
		}
		C(int a, int c):A(a),z(c){
			cout<<"parametrized constructor - C"<<endl;
		}
		~C(){
			cout<<"destructor - C"<<endl;
		}
};
class D:public B,public C{
	protected:
		int s;
	public:
		D():s(40){
			cout<<"constructor - D"<<endl;
		}
		D(int a, int b, int c, int d):B(a,b),C(a,c),s(d){
			cout<<"parametrized constructor - D"<<endl;
		}
		~D(){
			cout<<"destructor - D"<<endl;
		}
		void print(){
			cout<<"x="<<x<<" y="<<y<<" z="<<z<<" s="<<s<<endl;
		}
};

int main(){
	D obj(11,22,33,44);
	obj.print();
}
