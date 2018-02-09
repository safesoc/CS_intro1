/*
*******************************************************************************
    Author:                 Jacob Wunder
    Assignment Title:       Program 6
    Assignment Description: Program calculates roots of a quadratic equation by
                            asking the user values for a, b, and c. The roots,
                            if existent, are printed to the screen in order
                            from least to greatest.
    Due Date:               02/01/18
    Date Created:           02/01/18
    Date Last Modified:     02/01/18
*******************************************************************************
    Data Abstraction:
        * Output file opened
        * Five double variables initialized for a,b,c,root1,root2
    Input:
        * Reads a, b, c from user and assigns to int variables
    Process:
        * The discriminant is calculated to determine if the roots are real
        * Then the roots are calculated, if they exist
    Output:
        * The roots are printed both to the screen and to the file
          'program6.txt'
        * If the roots are identical, only one is printed
        * If the roots do not exist, "NO REAL ROOTS" is printed
    Assumptions:
        * It is assumed that the user only wants real solutions to the formula
        * It is assumed that, having been prompted to do so, the user will
          correctly input data
*******************************************************************************
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Data Abstraction

    double a, b, c, root1, root2;

    ofstream outFile;
    outFile.open("program6.txt");

    // Input

    cin >> a >> b >> c;

    // Process & Output

    if (b * b - 4 * a * c < 0)
    {   // Check if roots are real
		cout    << "NO REAL ROOTS" << endl;
		outFile << "NO REAL ROOTS" << endl;
	}
	else
	{ // Calculate Root 1 & 2
		root1 = ((-b) - sqrt(b * b - (4.0 * a * c))) / (2.0 * a);
		root2 = ((-b) + sqrt(b * b - (4.0 * a * c))) / (2.0 * a);

		if (root1 == root2)
		{   // Check if roots are equal
		    cout    << setprecision(2) << fixed;
		    outFile << setprecision(2) << fixed;

			cout    << root1 << endl;
			outFile << root1 << endl;
		}
		else if (root1 < root2){ // Print roots in order least to greatest
                cout    << setprecision(2) << fixed;
                outFile << setprecision(2) << fixed;

                cout    << root1 << "   " << root2 << endl;
                outFile << root1 << "   " << root2 << endl;
		}
		else {
                cout    << setprecision(2) << fixed;
                outFile << setprecision(2) << fixed;

                cout    << root2 << "   " << root1 << endl;
                outFile << root2 << "   " << root1 << endl;
		}
	}

    outFile.close();
    return 0;
}
