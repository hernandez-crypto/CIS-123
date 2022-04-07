/*
Julio Cesar Hernandez
CIS 123 701
April 7th 2022

Making definitions for Point.h file
*/

#include "Point.h" // required for Point
#include <iostream> // required for cout, endl
#include <cmath> // required for sqrt() and pow()
using namespace std;

// parameterized constructor
Point::Point(double x, double y)
{
    cout << "Constructing Point object, parameterized: \n";
    cout << "input parameters: " << x << " ," << y << endl;
    xCord = x;
    yCord = y;
}
// default constructor
Point::Point() 
{
    cout << " Constructing Point object, default: \n";
    cout << " initializing to zero \n";
    xCord = 0.0;
    yCord = 0.0;
}
// distance formula
double Point::operator -(const Point& rhs) const
{
    double t1, t2, d;
    t1 = rhs.xCord - xCord; // x2 - x1
    t2 = rhs.yCord - yCord; // y2 - y1
    d = sqrt(pow(t1,2) + pow(t2,2));
    return d;
}

bool Point::operator ==(const Point& rhs) const
{
    if(rhs.xCord == xCord && rhs.yCord == yCord) {
        return true;
    } else {
        return false;
    }
}

void Point::setX(double xVal) 
{
    xCord = xVal;
}

void Point::setY(double yVal) 
{
    yCord = yVal;
}
