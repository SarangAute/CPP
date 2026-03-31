#include<iostream>
using namespace std;
class A{
	int x,y;
	public:
	void print(){
		cout<<"x="<<x<<" y="<<y<<endl;
	}
	friend istream& operator>>(istream &, A &);
};

istream& operator>>(istream &in, A &ob){
	cout<<"ENTER X AND Y"<<endl;
	in>>ob.x>>ob.y;
//	return in;
}

int main(){
	A obj1;
	cin>>obj1;
	obj1.print();
}
