/* 
Julio Hernandez
CIS 123 701
02/07/2022
Chapter 2 Problem 29

This program computes the area of a triangle. It can compute the area of an
equilateral triangle or a right triangle.
*/

#include <iostream> //Required for cin and cout
#include <cmath> //Required for sqrt() and pow()

using namespace std;

int main() { // initialize main function

    string triangleType; // initialize string triangleType
    cout << "What type of triangle? Input \"Right\" or \"Equilateral\" " << '\n'; // Print out instructions onto console
    cin >> triangleType; // input for triangleType

    if(triangleType == "Equilateral") {
        double sideLength, area; // Initialize variable sideLength
        cout << "Enter side length for equilateral triangle" << '\n'; // Print out onto console
        cin >> sideLength; // Input for side length of triangle
        area = (sqrt(3)/4) * pow(sideLength, 2); // formula for equilateral triangle
        cout << "Area of equilateral triangle = " << area << '\n'; // output for area
    }
    
    if(triangleType == "Right") {
        double base, height, area; // initializing variables base, height, and area as type double 
        cout << "Enter base of right triangle:" << '\n'; // print in console and start a new line
        cin >> base; // input in console for base of triangle
        cout << "Enter height of right triangle:" << '\n'; // print in console and start a new line
        cin >> height; // input for height of triangle
        area = (base * height)/2; // formula for a triangle
        cout << "Area of right triangle = " << area << '\n'; // output for area
    }

    return 0; // return integer, hence int main()
}