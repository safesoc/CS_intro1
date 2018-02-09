
/*
* Author: Jacob Wunder
* Assignment Title: Program 3
* Assignment Description: Reads a temperature input (in Fahrenheit) from
*             console, then converts to Celsius and displays the result.
* Due Date: 01/23/18
* Date Created: 01/22/18
* Date Last Modified: 01/23/18
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Data Abstraction
    double C, F; // Declares a variable for degrees Celsius and Fahrenheit

    // Input
    cout << setprecision(2) << fixed; // Rounds all values to two decimal places
    cout << "Enter a degree in Fahrenheit: ";
    cin >> F; // Asks for a degree input in Fahrenheit

    // Process
    C = (F - 32) / 1.8; // Converts Fahrenheit to Celsius

    // Output
    cout << F << " Fahrenheit is " << C << " Celsius." << endl; // Prints the conversion

    return 0;
}
