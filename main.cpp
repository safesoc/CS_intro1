/*
*******************************************************************************
* AUTHOR:                   JACOB WUNDER
* ASSIGNMENT TITLE:         PROGRAM 8
* ASSIGNMENT DESCRIPTION:   PROGRAM CALCULATES THE AVERAGE OF FIVE USER-INPUT
*                           VALUES AND ASSIGNS A LETTER GRADE TO THE SCORE,
*                           THEN PRINTS THE LETTER GRADE TO THE SCREEN.
* DUE DATE:                 02/08/2018
* DATE CREATED:             02/08/2018
* DATE LAST MODIFIED:       02/08/2018
*******************************************************************************
*******************************************************************************
* DATA ABSTRACTION:
*   * 6 double variables are initialized for use as input values and
*     calculating the average and letter grade.
*   * One char variable is initialized to store the letter grade
*   * An output file is initialized and opened
*******************************************************************************
* INPUT:
*   * The user is prompted to enter 5 scores while those scores are between
*     0 and 100.
*   * If the user enters an improper value, the user will be prompted again to
*     enter a proper value.
*******************************************************************************
* PROCESS:
*   * The average of the five scores is calculated and assigned a letter grade
*******************************************************************************
* OUTPUT:
*   * The average and letter grade are printed to the screen and to the output
*     file.
*******************************************************************************
* ASSUMPTIONS:
*   * It is assumed, that after having been prompted, the user will correctly
*     input data
*******************************************************************************
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    // Data Abstraction
    double s1, s2, s3, s4, s5, avg;
    char grade;
    ofstream outFile;

    outFile.open("Program8.txt");


    // Input
    do
    {
        cout << "Enter 5  Test Scores: ";
        cin >> s1 >> s2 >> s3 >> s4 >> s5;
        cout << s1 << " " << s2 << " "  << s3 << " " << s4 << " " << s5 <<
        endl;

        if (s1 < 1 || s2 < 1 || s3 < 1 || s4 < 1 || s5 < 1 ||
            s1 > 100 || s2 > 100 || s3 > 100 || s4 > 100 || s5 > 100)
        {
            cout << "Error: Data out of range.\n" << endl;
        }
        else
        {
            cout << "\nData: " << s1 << " " << s2 << " "  << s3 << " "
                 << s4 << " " << s5 << "\n\n";
        }
    } while (s1 < 1 || s2 < 1 || s3 < 1 || s4 < 1 || s5 < 1 ||
            s1 > 100 || s2 > 100 || s3 > 100 || s4 > 100 || s5 > 100);


    // Process
    avg = (s1 + s2 + s3 + s4 + s5) / 5;

    if (avg >= 89.5)
    {
        grade = 'A';
    }
    if (avg >= 79.5 && avg <= 89.49)
    {
        grade = 'B';
    }
    if (avg >= 69.5 && avg <= 79.49)
    {
        grade = 'C';
    }
    if (avg >= 59.5 && avg <= 69.49)
    {
        grade = 'D';
    }
    if (avg <= 59.49)
    {
        grade = 'F';
    }


    // Output
    cout << "Average = " << avg << endl;
    cout << "Grade = " << grade << endl;
    outFile << "Average = " << avg << endl;
    outFile << "Grade = " << grade << endl;


    outFile.close();
    return 0;
}
