/*
CIS 123 701
Julio Cesar Hernandez
March 15th, 2022

This program generates a file of height and velocity values for a weather balloon.

*/

#include <iostream> // required for cin, cout
#include <fstream> // required for ofstream
#include <iomanip> // required for setw()
#include <cmath> // required for pow()
#include <string> // required for string

using namespace std;

int main() {
    // declare and init objects
    double initial, increment, final, time, height, velocity, acceleration, max_time{0}, max_height{0};
    int loops, itime;
    string filename;
    ofstream balloon;

    // prompt user for name of output file
    cout << "Enter name of the output file \n";
    cin >> filename;

    // open output file
    balloon.open(filename);

    // get user input
    cout << "Enter initial value for table (in hours) \n";
    cin >> initial;
    cout << "Enter increment between lines (in hours) \n";
    cin >> increment;
    cout << "Enter final value for table (in hours) \n";
    cin >> final;

    // set format flags for standard output
    cout.setf(ios::fixed);
    cout.precision(2);

    // set format flags for file output
    balloon.setf(ios::fixed);
    balloon.precision(2);

    // print report heading
    cout << "\n\nWeather Balloon Information \n";
    cout << "Time    Height    Velocity     Acceleration\n";
    cout << "(hrs)   (meters)  (meters/s)   (meters/s^2)";

    // determine number of iterations required
    // use integer index to avoid rounding error
    loops = (int) ( ( final - initial ) / increment );
    for(itime=0; itime <= loops; itime++) 
    {
        time = initial + itime * increment;

        height = -0.12*pow(time,4) + 12*pow(time,3) - 380*time*time + 4100*time + 220;
        velocity = -0.48*pow(time,3) + 36*time*time - 760*time + 4100;
        acceleration = -1.44*pow(time,2) + 72*time + 720;

        // print report information to screen
        cout << setw(6) << time << setw(10) << height << setw(10) << velocity/3600 << setw(10) << acceleration / 3600 << '\n';

        // write report information to a file
        balloon << setw(6) << time << setw(10) << height << setw(10) << velocity/3600 << setw(10) << acceleration / 3600 << '\n';

        if (height > max_height)
        {
            max_height = height;
            max_time = itime;
        }
    }

    // report max height and corresponding time
    cout << "\nMax balloon height was " << setw(8) << max_height << " meters\n and it occured at " << setw(6) << max_time << "\n";

    // close file and exit program
    balloon.close();
    return 0;
}