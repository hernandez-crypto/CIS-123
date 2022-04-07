/*
Julio Hernandez
CIS 123 701
02/07/2022
chapter 3 question 30
This program determines if one integer is evenly divided by another integer
*/

#include <iostream> // required for cin() and cout()

using namespace std;

int main() { // init main function

    int first, second; // init variables for numbers

    cout << "Input first of two integers to see if the first is evenly divisible by the second" << '\n'; // print out to console string in parenthesis
    cin >> first; // input in console for first integer
    cout << "Input second integer" << '\n'; // print out on console string in parenthesis
    cin >> second; // input in console for second integer

    if((first %= second) == 0) cout << "True" << '\n'; // if the remainder of the first int being divided by the second int equals 0 print out true
    else cout << "False" << '\n'; // else print out false

    return 0; // return integer for function
}