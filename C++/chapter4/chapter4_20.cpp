/*

CIS 123 701
Julio Cesar Hernandez
February 8th, 2021

This program generates a table of conversions from mph to ft/s. It starts at 0mph and increments by 5
to 65mph.

*/

#include<iostream> // required for cout
#include <iomanip> // required for setw

using namespace std;

int main ()
{
    // setting up table. Making headers for table.
    using std::setw;
	std::cout << std::left;
	std::cout <<
	    setw(5) << "i" << setw(5) << "mph" << setw(5) << "ft/s" << '\n';
    // from 0 to 65 incrementing by 5 do this
      for(int i=0; i <= 65; i += 5) {
        // convert mph to ft/s by multiplying by conversion factor 
        double fts = i * 1.466667;
        // setting up data included in the table
        using std::setw;
	    std::cout << std::left;
	    std::cout <<
        //  insert 5 spaces, insert the iteration number, insert 5 spaces, then insert mph, after insert 5 spaces, then insert ft/s, after insert 5 spaces
	        setw(5) << i/5 << setw(5) << i << setw(5) << fts << '\n';
    }

}