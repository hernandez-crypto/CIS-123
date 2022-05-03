#include <iostream>

using namespace std;

int main(){
    double name, x(20.5);
    double *a = &x;
    name = *a;
    cout << "name: " << name << endl; // 20.5
    //cout << "*name: " << *name << endl; // error, value at value of a
    cout << "a: " << a << endl; // 14 or pointer address for x
    cout << "*a: " << *a << endl; // 20.5 or value at x

    return 0;
}