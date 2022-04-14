/*
Julio Cesar Hernandez
CIS 123 701
April 14th 2022

This program computes a set of statistical measurements from a speech signal.
*/

#include<iostream> //Required for cin, cout.
#include<fstream> //Required for ifstream.
#include<string> // Required for string
#include<cmath> //Required for abs ()
using namespace std;

//Declare function prototypes and define constants.
double ave_power (double x[],int n);
double ave_magn (double x [], int n);
int crossings(double x[], int n);

double mean(int n, double data[]);
double variance(int n, double data[]);
double std_dev (int n, double data[]);
double min_value(int n, double data[]);
double median(int n, double data[]);
double max_value(int n, double data[]);
void sort(int n, double data[]);


int main()
{
    // Declare objects
    const int MAXIMUM = 2500;
    int npts(0);
    double speech[MAXIMUM];
    string filename;
    ifstream file_1;

    // Prompt user for file name and open file.
    cout << "Enter filename ";
    cin >> filename;
    file_1.open (filename);
    if (file_1.fail())
    {
        cout << "error opening file " << filename << endl;
        return 0;
    };

    // read information from a data file
    while(npts<= MAXIMUM-1 && file_1 >> speech[npts])
    {
        npts++;
    } // end while

    // Compute and print statistics,
    cout << "Digit Statistics \n";
    cout << "\tmean: " << mean(npts, speech) << endl;
    cout << "\tstandard deviation: " << std_dev(npts, speech) << endl;
    cout << "\tvariance: " << variance(npts, speech) << endl;
    cout << "\taverage power: " << ave_power(speech, npts) << endl;
    cout << "\taverage magnitude: " << ave_magn(speech, npts) << endl;
    cout << "\tzero crossings: " << crossings(speech, npts) << endl;

    // close file and exit program.
    file_1.close();
    return 0;
}

// this function returns the average power of an array x with n elements
double ave_power(double x[], int n) 
{
    // declare and initialize objs
    double sum(0);

    // determine ave. power
    for(int k=0; k<n; ++k)
    {
        sum += x[k] * x[k];
    }
    return sum/n;
}

// this function returns the average magnitude of an array x with n values
double ave_magn(double x[], int n) 
{
    // decalre and init objs
    double sum(0);

    // determine ave magnitude
    for(int k=0; k<n; ++k) 
    {
        sum += abs(x[k]);
    }

    // return average magnitude
    return sum/n;
}

// this function returns a count of the number of zero crossings in an array x with n values
int crossings(double x[], int n)
{
    // declare and init objs
    int count(0);

    // determine number of zero crossings
    for (int k=0; k<(n-1); ++k)
    {
        if (x[k]*x[k+1] < 0) count++;
    }
    // return number of zero crossings
    return count;
}

double mean(int n, double data[])
{
    int i;
    double mean;
    double sum = 0;

    for (i=0;i<n;i++)
    {
        sum += data[i];
    }

    mean = sum / n;

    return mean;


}

double variance(int n, double data[])
{
    int i;
    double meanResult, temp, squared, total = 0, variance;

    meanResult = mean(n, data);


    for (i=0; i<n; i++)
    {
            temp = (data[i]-meanResult);
            squared = (temp * temp);
            total += squared;
    }

    variance = total / (n - 1);
    return variance;

}


double std_dev (int n, double data[])
{
    double varianceResult, stdDev;
    varianceResult = variance(n, data);
    stdDev = sqrt(varianceResult);
    return stdDev;
}


double min_value(int n, double data[])
{
    int i;
    double minValue;

    sort(n, data);
    minValue = data[0];

    return minValue;
}

double median(int n, double data[])
{
    double medianVal;
    if(n % 2)
        medianVal = data[n/2];
    else
        medianVal = (data[n/2 - 1] + data[n/2]) / 2.0;

    return medianVal;
}


double max_value(int n, double data[])
{

    double maxValue;

    sort(n, data);
    maxValue = data[n-1];
    return maxValue;
}

void sort(int n, double data[])
{
    int i, j;
    double temp;

    for(i=0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(data[i] > data[j]){
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
            }
        }
    }

}

