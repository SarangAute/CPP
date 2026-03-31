#include<iostream>
using namespace std;

class A{
    int x,y;
public:
    A(int a, int b):x(a),y(b){
        //x = a;
        //y = b;
    }

    friend ostream& operator<<(ostream &, const A &);
};

ostream& operator<<(ostream &out, const A &ob){
    out << "x = " << ob.x << " y = " << ob.y<<endl;
    //return out;
}

int main(){
    A obj1(10,20);
    cout << obj1;
}

