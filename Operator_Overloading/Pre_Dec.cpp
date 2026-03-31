#include<iostream>
using namespace std;
class A{
	int x, y;
	public:
	A(int a, int b):x(a),y(b){
	}
	void operator--(){
		--x;
		--y;
	}
	void print(){
		cout<<"x = "<<x<<" y = "<<y<<endl;
	}
};

int main(){
	A obj(21,22);
	--obj;	//obj.operator--()
	cout<<"object 1 data"<<endl;
	obj.print();
}
