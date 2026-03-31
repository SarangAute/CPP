#include<iostream>
using namespace std;
class A{
	protected:
		int x;
	public:
		A():x(10){
			cout<<"Constructor-A"<<endl;
		}
		A(int a):x(a){
			cout<<"PARAMETRIZED CONSTRUCTOR -A "<<endl;
		}

		~A(){
			cout<<"Destructor - A"<<endl;
		}
};

class B:public A{
	int y;
	public:
		B():A(),y(20){
			cout<<"CONSTRUCTOR - B"<<endl;
		}
		B(int a, int b):A(a),y(b){
			cout<<"PARAMETRIZED CONSTRUCTOR -b"<<endl;
		}
		~B(){
			cout<<"Destructor - B"<<endl;
		}
		void print(){
			cout<<"x = "<<x<<" y = "<<y<<endl;
		}
};


int main(){
	B obj1, obj2(10,20);
	cout<<"object 1 data"<<endl;
	obj1.print();
	cout<<"object 2 data"<<endl;
	obj2.print();
}
