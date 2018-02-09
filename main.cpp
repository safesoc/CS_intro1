/*
* Author: Jacob Wunder
* Assignment Title: Program 2
* Assignment Description: Calculates and prints two approximations of pi.
* Due Date: 01/19/18
* Date Created: 01/18/18
* Date Last Modified: 01/18/18
 */

 #include <iostream>

using namespace std;



int main()
{
    // Data Abstraction
    double pi_approx1, pi_approx2;

    // Input

    // Process
    pi_approx1 = 4 * (1.0 - 1.0/3 + 1.0/5 - 1.0/7 + 1.0/9 - 1.0/11);
    pi_approx2 = 4 * (1.0 - 1.0/3 + 1.0/5 - 1.0/7 + 1.0/9 - 1.0/11 + 1.0/13);

    // Output
    cout << "PI = " << pi_approx1 << endl;
    cout << "PI = " << pi_approx2 << endl;

    return 0;
}
