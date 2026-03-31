#include<iostream>
using namespace std;
class Base{
	public: 
		Base(){
			cout<<"CONSTRUCTOR - BASE "<<endl;
		}
		~Base(){
			cout<<"DESTRUCTOR - BASE"<<endl;
		}
};

class Der:public Base{
	public: 
		Der(){
		
			cout<<"CONSTRUCTOR - DERIVED "<<endl;
		}
		~Der(){
			cout<<"DESTRUCTOR - DERIVED"<<endl;
		}
};

int main(){
	Der d;
}

/*CONSTRUCTOR - BASE 
CONSTRUCTOR - DERIVED 
DESTRUCTOR - DERIVED
DESTRUCTOR - BASE
*/
