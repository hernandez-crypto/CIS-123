/*
Program chapter1_1
This program computes the distance between two points
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
 	// Declare and initialize objects
	double side1, side2, distance, x1, y1, x2, y2;
	// Compute the sides of a right triangle
	cin >> x1 >> y1 >> x2 >> y2;
	side1 = x2 - x1;
	side2 = y2 - y1;
	distance = sqrt(side1 * side1 + side2 * side2);
	// Print distance.
	cout << "The distance between the two points is "
		<< distance << endl;
	// Exit program.
	return 0;
}