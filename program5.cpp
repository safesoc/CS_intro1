es/*
* Author: Jacob Wunder
* Assignment Title: Program 5
* Assignment Description: This program will ask the user to enter 5 integers
* and then calculate their arithmetic mean, geometric mean, harmonic mean,
* and standard deviation. The program will then print and label the
* original 5 numbers and the four statistics.
* Due Date: 01/30/2018
* Date Created: 01/30/2018
* Date Last Modified: 01/30/2018


* Data Abstraction:
*      5 integer variables, n1, n2, n3, n4, and n5 are initialized for use
*      with their counterparts in the formula
*      4 double variables, aM, gM, hM, and sDev are initialized to
*      store the value of the formulas
* Input:
* 		The program reads input in the format of 'n1, n2, n3, n4, n5' from the
*       user and assigns the integers to their respective variables
* Process:
* 		Arithmetic, Geometric, and Harmonic means are calculated using it's
*       respective formula. Then the Standard deviation is calculated.
* Output:
* 		The value of the arithmetic, geometric, and harmonic means, and
*       the standard deviation is printed to the screen
* Assumptions:
* 		It is assumed that the user only wants to solve all formulas at once
* 		It is assumed that the user only wants real solutions to the formula
* 		It is assumed that, having been prompted to do so, the user will
*       correctly input data
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Data Abstraction

    int n1, n2, n3, n4, n5;
    double aM, gM, hM, sDev;


    // Input

    cout << "Enter five numbers: " << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n5 << endl;
    // Echo Print


    // Process

    aM = (static_cast<double>(n1) + n2 + n3 + n4 + n5) / 5;
    // Calculate Arithmetic Mean

    gM = (pow((static_cast<double>(n1) * n2 * n3 * n4 * n5),0.2));
    // Calculate Geometric Mean

    hM = 5/ (1.0/static_cast<double>(n1) + 1.0/n2 + 1.0/n3 + 1.0/n4 + 1.0/n5);
    // Calculate Harmonic Mean

    sDev = sqrt( (pow(n1-aM, 2) + pow(n2-aM, 2) + pow(n3-aM, 2) + pow(n4-aM, 2)
           + pow(n5-aM, 2)  ) / 5);
    // Calculate Standard Deviation



    // Output

    cout << "\n\n\nResult:\n\nData:" << endl;
    cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n5 << endl;

    cout << setprecision(2) << fixed << endl;

    cout << "Arithmetic Mean    = " << aM << endl;
    cout << "Geometric Mean     = " << gM << endl;
    cout << "Harmonic Mean      = " << hM << endl;
    cout << "Standard Deviation = " << sDev << endl;


    return 0;
}
