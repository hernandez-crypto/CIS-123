#include <iostream>

using namespace std;

int main() 
{
    int i1, i2;
    int *p1, *p2;
    i1 = 5;
    p1 = &i1;
    i2 = *p1/2 + 10;
    p2 = p1;

    // #9
        cout << "i1: " << i1 << endl; // 5
    // #10
        cout << "i2: " << i2 << endl; // (5 / 2) + 10 = either 12 or 13 or error becuase the result isn't an integer
    // #11
        cout << "*p1: " << *p1 << endl; // 5
    // #12
        cout << "*p2: " << *p2 << endl; // 5
}