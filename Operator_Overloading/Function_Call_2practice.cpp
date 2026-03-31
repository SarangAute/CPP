#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	A(){}
	A(int a, int b):x(a),y(b){}
	void operator()(int a,int b){
		x=a,y=b;
	}
	void print(){
		cout<<"x = "<<x<<" y = "<<y<<endl;
	}
};

int main(){
	A obj1(10,20);
	cout<<"object 1 data : "<<endl;
	obj1.print();
	
	obj1(20,30);
	cout<<" after updating object 1 data : "<<endl;
	obj1.print();
	
	obj1(30,40);
	cout<<"after 2nd upadtion object 1 data : "<<endl;
	obj1.print();
}
