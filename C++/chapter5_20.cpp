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
    ifstream dataFile; // syntax for getting a file opened
    dataFile.open("rocket1.txt"); // opening the rocket1.txt file..
    if(dataFile.fail()) {  // if rocket1.txt can not be opened due to error...
        cout << "rocket1.txt cannot be opened."; // print out to the console this string
        exit(1); // exit the program
    };

    int n(0); // n = number of entries
    dataFile >> n; // read the first line in the rocket1.txt file to determine number of entries

    double time(0), altitude(0), velocity(0), acceleration(0); // initialize variables of time altitude velocity and acceleration to double's set to 0
    double currentAlt(0), difference(0); // initialize variables of currentAlt and difference (of altitude and current altitude) to double's set to 0

    for (int i = 0; i < n; i++) {  // start a for loop that runs until i > n
        dataFile >> time >> altitude >> velocity >> acceleration; // temporarily map values from rocket1.txt onto these variables we have set 
        difference = altitude - currentAlt; // calculate the difference of altitude and current altitude to determine if the rocket had begun to fall
        if (difference < 0) { // if the rocket has begun to fall 
            cout << "Time at which rocket starts returning to Earth: " << time << endl; // print out the time onto the console
            break; // end for loop early
        }
        currentAlt = altitude; // set currentAlt to altitude if the rocket has not begun to fall
    };
    return 0;  // end main by returning int 0
};