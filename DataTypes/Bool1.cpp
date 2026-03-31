#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"ENTER A NUMBER "<<endl;
	cin>>n;

	bool res = (n>0);
	switch(res){
		case 0: cout<<"non-positive number"<<endl;
			break;

		case 1: cout<<"positive number"<<endl;
			break;
	}
}
