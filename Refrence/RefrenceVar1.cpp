#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &ref = a;

    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;

    return 0;
}

