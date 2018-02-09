/*
*******************************************************************************
    Author:                 Jacob Wunder
    Assignment Title:       Program 7
    Assignment Description: Program determines if a user-inputted point lies
                            within the bounds of a 2-dimensional triangle using
                            barycentric coordinate method.
    Due Date:               02/06/18
    Date Created:           02/06/18
    Date Last Modified:     02/06/18
*******************************************************************************
    Data Abstraction:
        * Output file opened
        * 6 int variables initialized for the three defined points of the
          triangle, and 2 int variables for the user-defined point.
        * 3 float variables initialized for storing the value of the scalars
        * 1 string initialized to hold point location status
    Input:
        * Reads x & y coordinate from user and assigns to int variables pX, pY
    Process:
        * Scalars a, b, c are calculated using the pre-defined triangle
          coordinates and the user-defined coordinates
        * a, b, and c are checked to ensure that they fall within the
          parameters
    Output:
        * The determination of the location of the point is printed to both
          the screen and to the file 'pointLocation.txt'
    Assumptions:
        * It is assumed that, having been prompted to do so, the user will
          correctly input data
*******************************************************************************
*/

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    // Data Abstraction

    int x1 = 0,   y1 = 0; // Defined Point 1
    int x2 = 0,   y2 = 100; // Defined Point 2
    int x3 = 200, y3 = 0; // Defined Point 3
    int pX, pY; // User-inputted points
    float a, b, c; // Barycentric Coordinates
    string pointLoc = "NOT "; // Point Location Status

    // Initialize & Open File
    ofstream outFile;
    outFile.open("pointLocation.txt");


    // Input
    cout << "Enter a point's x- and y- coordinates: ";
    cin >> pX >> pY;
    cout << pX << pY << endl;


    // Process
    // Calculate Barycentric Coordinates (Scalars)
    a = ((y2 - y3) * (pX - x3)  + (x3 - x2) * (pY  - y3))/
        ((y2 - y3) * (x1 - x3)  + (x3 - x2) * (y1  - y3));

    b = ((y3 - y1) * (pX - x3)  + (x1 - x3) * (pY  - y3))/
        ((y2 - y3) * (x1 - x3)  + (x3 - x2) * (y1  - y3));

    c = 1 - a - b;

    // Check Barycentric Coordinates
    if (0 <= a && a <=1 && 0 <= b && b <=1 && 0 <= c && c <=1)
    {
        pointLoc = "";
    }

	// Output
	cout << "The point (" << pX << ", " << pY << ") is " << pointLoc
         << "in the" << " triangle." << endl;
    outFile << "The point (" << pX << ", " << pY << ") is "
            << pointLoc << "in the" << " triangle." << endl;

    outFile.close();
    return 0;
}
