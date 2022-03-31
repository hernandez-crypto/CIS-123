#include <iostream>
#include <fstream>

using namespace std;
int main()
{

    ifstream inputfile;
    inputfile.open("rocket1.txt", ios::in);
    if (inputfile.fail())
    {
        cout << "Datafile rocket1.txt cannot be opened. Exiting program." << endl;
        exit(1);
    }
    //Determine the number of data points
    int numEntries(0);
    inputfile >> numEntries;

    double time(0), altitude(0), velocity(0), acceleration(0);
    double maximum(0);
    double maximum_time(0);

    for (int i = 0; i < numEntries; i++)
    {
        // Reading values
        inputfile >> time >> altitude >> velocity >> acceleration;
        if (altitude > maximum)
        {
            maximum_time = time;
        }
    }
    cout << "Time for maximum altitude occurs at " << maximum_time << "s." << endl;
    inputfile.close();
}