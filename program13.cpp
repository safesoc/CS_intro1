/*
*******************************************************************************
    Author:                 Jacob Wunder
    Assignment Title:       Program 13 - Multiplication Table
    Assignment Description: The program asks the user to enter parameters to
                            view a multiplication table between those bounds.
                            The table is printed to the screen and an output
                            file.
    Due Date:               02/27/18
    Date Created:           02/26/18
    Date Last Modified:     02/27/18
*******************************************************************************
    Data Abstraction:
        * integers initialized for column and row min and max, line value,
          number value, difference values, and a header value
    Input:
        * Ask user for R1, R2, C1, C2
    Process:
        * Assign difference value counter
        * Create loop for header values
        * Create formatting loop
        * Create loop for column values
        * Nest loop within column for printing rows
        * Copy formatting loop
    Output:
        * Output header values
        * Output column and rows with formatting
    Assumptions:
        * User will correctly input values
*******************************************************************************
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Data Abstraction
    int h, n1, n2, m1, m2, line, p, pdif = 1, dif = 1;


    // Input
    cout << "Please Enter Four Integers R1 R2 C1 C2: ";
    cin >> n1 >> n2 >> m1 >> m2;
    cout << n1 << " " << n2 << " " << m1 << " " << m2 << endl;

    // Process & Output

    if (n1 > n2){
        dif = -1;
    }
    if (m1 > m2){
        pdif = -1;
    }

    cout << setw(5) << left;
    cout << "       ";
    for(h = m1; h <= m2; h += pdif){
        cout << setw(5) << left << h;
    }
    cout << endl;

    for (p = m1; p <= m2 + 1; p += pdif)
    {
        cout << "-----|";
    }
    cout << endl;

    for (line = n1; line <= n2; line += dif)
    {
        cout << setw(5) << left<< line;

        for (p = m1; p <= m2; p += pdif)
        {
            cout << setw(5) << left << line * p ;
        }
        cout << endl;

        for (p = m1; p <= m2 + 1; p += pdif)
        {
            cout << "-----|";
        }
        cout << endl;

    }

    return 0;
}
