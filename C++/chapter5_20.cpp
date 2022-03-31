/*
CIS 123 701
Julio Cesar Hernandez
March 31th, 2022

This program imports a file which contains data points for a rocket such as time, meters, meters/second, and meter/seconds^2.
The program reads the data points and determines at which point the rocket has begun falling back to earth.
*/

#include <iostream> // required for cout/cin/endl
#include <fstream> // required for ifstream/.open

using namespace std;

int main() {
    ifstream dataFile;
    dataFile.open("rocket1.txt");
    if(dataFile.fail()) {
        cout << "rocket1.txt cannot be opened.";
        exit(1);
    };

    int n(0);
    dataFile >> n;
    cout << n << endl;

    return 0;
};