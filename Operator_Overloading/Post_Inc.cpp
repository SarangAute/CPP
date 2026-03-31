#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	A(){}
	A(int a, int b):x(a),y(b){}
	A operator++(int){
		A res;
		res.x=x++;
		res.y=y++;
		return res;
	}
	void print(){
		cout<<"x = "<<x<<" y = "<<y<<endl;
	}
};

int main(){
	A obj1(10,20),obj2;
	obj2=obj1++;
	cout<<"value of object1 : "<<endl;
	obj1.print();
	
	//obj2=obj1++;
	cout<<"value of object2 : "<<endl;
	obj2.print();
}
