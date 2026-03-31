#include<iostream>
using namespace std;
class A{
	int x, y;
	public:
	A(int a, int b):x(a),y(b){
	}
	void operator--(int){
		x--;
		y--;
	}
	void print(){
		cout<<"x = "<<x<<" y = "<<y<<endl;
	}
};

int main(){
	A obj(21,22);
	obj--;	//obj.operator--(int)
	cout<<"object 1 data"<<endl;
	obj.print();
}
