/*
Julio Cesar Hernandez
CIS 123 701
April 7th 2022

This program calculates the percentage points that lie outside of a critical radius.

*/

#include <iostream>
#include <fstream>
using namespace std;

// function prototypes
double distance(double x1, double y1, double x2, double y2);

int main() 
{
    // declare objs
    int pointCount(0), outside(0);
    double x,y,criticalRad;
    const double xORIGIN(0), yORIGIN(0);
    double dist, radiusOuter, radiusInner;

    // open input file
    ifstream fin("compositeMaterialSim1.dat");
    if(fin.fail()) 
    {
        cout << "Could not open data file compositeMaterialSim1.dat \n";
        exit(1);
    }

    // input critical radius from user
    cout << "Enter critical radius ";
    cin >> criticalRad;

    // input radius of outer and inner cylinders
    fin >> radiusOuter >> radiusInner;

    // while not end of file, input point data
    fin >> x >> y;
    while(!fin.eof())
    {
        ++pointCount; // increment point count
        dist = distance(x,y,xORIGIN,yORIGIN);
        if(dist > criticalRad)
        {
            ++outside; // increment outside counter
        }
        fin >> x >> y;
    }
    // print results
    // premultiply by 100.0 to force floating point arithmetic
    cout << (100.0*outside/pointCount)
         << "% lie outside the critical radius \n";
         return 0;
}

#include <cmath> // required for sqrt and pow
double distance(double x1,double y1, double x2, double y2)
{
    double d1,d2,d;
    d1 = x2-x1;
    d1 = y2-y1;
    d=sqrt(pow(d1,2)+pow(d2,2));
    return d;
}