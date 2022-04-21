/*
Julio Cesar Hernandez
CIS 123 701
April 21th 2022

This program determines the locations of peaks in an elevation grid of data.
*/

#include <iostream> // required for cin & cout
#include <fstream> // required for ifstream
#include <string> // required for string
using namespace std;

// function prototype
bool isPeak(const double grid[][N], int r, int c);

int main() 
{
    // declare objects
    int const N(25);
    int nrows, ncols;
    double elevation[N][N];
    string filename;
    ifstream file1;

    // prompt user for file name and open file for input
    cout << "Enter name of input file.\n";
    cin >> filename;
    file1.open(filename);
    if(file1.fail())
    {
        cerr << "Error opening input file\n";
        exit(1);
    }
    file1 >> nrows >> ncols;
    if(nrows > N || ncols > N) 
    {
        cerr << "Grid is too large, adjust program.";
        exit(1);
    }
    // read information from data file into array
    for(int i=0; i<nrows; ++i)
    {
        for(int j=0; j<ncols; ++i)
        {
            file >> elevation[i][j];
        }
    }
    // determine and print peak locations
    cout << "top left point defined as row 0, column 0\n";
     for(int i=0; i<nrows-1; ++i)
    {
        for(int j=0; j<ncols-1; ++i)
        {
            if(isPeak(elevation, i, j)) 
            {
                cout << "Peak at row: " << i 
                     << " column: " << j << endl;
            }
        }
    }
    
    //mclose file
    file1.close();
    // exit program
    return 0;
}

bool isPeak(const double grid[][N], int i, int j)
{
    if
    (
    (grid[i-1][j] < grid[i][j]) &&
    (grid[i+1][j] < grid[i][j]) &&
    (grid[i][j-1] < grid[i][j]) &&
    (grid[i][j+1] < grid[i][j]) &&
    )
    {
        return true;
    } else return false;
}