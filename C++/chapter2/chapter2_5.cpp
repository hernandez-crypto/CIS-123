/*
Program 2_5 

Julio Hernandez
CIS 123 701
02/07/2022

This program computes the area of a circle with hardcoded variables.
Results are displayed with two decimal digits
to the right of the decimal point.
*/

#include <iostream> // Required for cout, endl
#include <iomanip> // Required for setw(), setprecision(), fixed.
#include <cmath> // Required for acos().

using namespace std;

const double PI = acos(-1.0);

int main() {
    // Declare and initialize objects
    double radius{10}, area;
    area = PI*radius*radius;
    
    cout << fixed << setprecision(2); // output into console radius and area
    cout << "The radius of the circle is: "
    << setw(10) << radius << " centimeters" << endl;
    cout << "The area of the circle is: " << setw(10) << area
    <<" square centimeters" << endl;

    return 0; // function returns an integer 
}
