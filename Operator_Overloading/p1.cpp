#include<iostream>
using namespace std;
class A{
	int x;
	int y;
	public:
	A(){
	}
	A(int a, int b):x(a),y(b){
	}
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
	A obj1(10,20),obj2;
	obj2=obj1;	//obj1.operator-()
	cout<<"object 1 data"<<endl;
	obj1.print();
	cout<<"object 2 data"<<endl;
        obj2.print();
}
