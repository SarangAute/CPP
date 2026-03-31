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
			cout<<"Destructor - A"<<endl;
		}
};

class B{
	protected:
		int y;
	public:
		B():y(20){
			cout<<"constructor - B"<<endl;
		}
		B(int b):y(b){
			cout<<"parametrized constructor - B"<<endl;
		}
		~B(){
			cout<<"Destructor - B"<<endl;
		}
};

class C:public A, public B{
	private:
	       int z;
	public:
	       C():z(30){
	       		cout<<"constructor - C"<<endl;
	       }
	       C(int a, int b, int c):A(a),B(b),z(c){
	       		cout<<"parametrized constructor - C"<<endl;
	       }
	       ~C(){
	       		cout<<"destructor - C"<<endl;
	       }
	       void print(){
	       		cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
	       }
};

int main(){
	C obj1, obj2(11,22,33);
	cout<<"object - 1 data <without args..>"<<endl;
	obj1.print();
	cout<<"object - 2 data <with args..>"<<endl;
	obj2.print();

}

