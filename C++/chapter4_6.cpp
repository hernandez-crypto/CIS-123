/*

CIS 123 701 
Julio Cesar Hernandez
February 8th 2022

This program finds the average of a set of exam scores.

*/ 

#include <iostream> // required for cin, cout
using namespace std;

int main()

{
// declare and initialize objects
double exam_score, sum(0), average;
int counter;

// prompt user for input 
cout << "Enter the number of exam scores to be read ";
cin >> counter;
cout << "Enter " << counter << " exam scores separated by white space \n";

// input exam scores using conter-controlled loop
for(int i=1; i<=counter; i++) {
    cin >> exam_score;
    sum += exam_score;
}

// calculate average exam score
average = sum/counter;
cout << counter << " students took the exam. \n";
cout << "The exam average is " << average << endl;

// exit program 
return 0;
}