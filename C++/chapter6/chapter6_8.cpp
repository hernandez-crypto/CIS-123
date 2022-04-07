/*
Julio Cesar Hernandez
CIS 123 701
April 7th 2022

This program calculates the percentage points that lie outside of a critical radius.

*/

#include <iostream> // required for cin, cout
#include <fstream> // required for file input
#include "Point.h" // programmer defined type
using namespace std;

int main() {
    // declare objs
    const Point ORIGIN(0,0);

    Point p;
    int pointCount(0), outside(0);
    double x,y,criticalRad;
    double dist, radiusOuter, radiusInner;

    // open input file
    ifstream fin("compositeMaterialsSim1.dat");
    if (fin.fail()) 
    {
        cerr << "Could not open data file compositeMaterialSim1.dat \n";
        exit(1);
    }

    // input critical radius from user
    cout << "Enter critical radius ";
    cin >> criticalRad;

    // input radius of outer and inner cylinders
    fin >> radiusOuter >> radiusInner;

    // while not end of file input point data
}