/*
*******************************************************************************
    Author:                 Jacob Wunder
    Assignment Title:       Program 14
    Assignment Description: Class Average
                            This program reads an students' grades from a file
                            and calculates the student average, class average,
                            and highest and lowest scores for the class.
    Due Date:               03/01/18
    Date Created:           03/01/18
    Date Last Modified:     03/01/18
*******************************************************************************
    Data Abstraction:
        * int declared for students' grade, high and low grades, student count,
          class count, student total grade
        * char declared for students' middle initial
        * input file stream initialized for name and student files
        * strings declared for student first and last name, student file name,
          and input file name
        * doubles declared for student and class grade averages, class total
    Input:
        * Ask user for name of the data file
    Process:
        * User input is validated, if invalid, exit
        * Read student name, after student name is read, read the student's
          grades until the next name is read.
        * Calculate the average for each student, determine highest and lowest
          grades
        * If there are no more students, calculate the class average
    Output:
        *  Print the student's full name and their average, class average, and
           the min and max scores for the class
    Assumptions:
        * It is assumed that, having been prompted to do so, the user will
          correctly input data
        * It is assumed that there will be an input file ready for processing
        * It is assumed that each student will have at least one grade
*******************************************************************************
*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;


int main()
{
    // Data Abstraction
    ifstream namesFile, studentFile;
    string fileName, sFileName, fName, lName;
    char mInitial;
    int sGrade, sTotal = 0,maxGrade = 0, minGrade = 100, sCount = 0, cCount =0;
    double sAvg = 0, cAvg = 0, cTotal = 0;
    bool hasData = true;
    bool hasGrades = false;

    // Input
    cout << "Enter Name of Data File: ";
    cin >> fileName;
    cout << fileName << endl;

    namesFile.clear();
    namesFile.open(fileName.c_str());

    if (!namesFile) {
        cout << "ERROR: File Not Open.";
        exit(1);
    }

    // Process & Output
    cout << setprecision(2) << fixed;
    cout << setw(20) << left << "Student" << "Average" << endl;

    while(namesFile >> lName >> fName >> mInitial)
    {
        studentFile.clear();
        studentFile.open((fName + lName +".dat").c_str());
        sTotal = sCount = 0;
        if(!studentFile)
        {
            hasData = false;
        }

        while (studentFile >> sGrade)
        {
            hasGrades = true;

            if (sGrade > maxGrade){
                maxGrade = sGrade;
            }
            if (sGrade < minGrade){
                minGrade = sGrade;
            }

            sTotal += sGrade;

            sCount++;

        }

        studentFile.close();

        cTotal += sTotal / sCount;

        cCount++;

        sAvg = static_cast<double>(sTotal) / sCount;

        cout << setw(20) << left << fName + " " + mInitial + " " + lName;
        if(!hasData)
            cout << setw(20) << left << "No Data File" << endl;
        else if(!hasGrades)
            cout << setw(20) << left << "No Grades" << endl;
        else
            cout << setw(20) << left << sAvg << endl;
    }

    cAvg = cTotal/cCount;

    cout << setw(20) << left << "\n\nClass Average: " << cAvg << endl;
    cout << setw(20) << left <<  "Max Score: " << maxGrade << endl;
    cout << setw(20) << left <<  "Min Score: " << minGrade << endl;

    namesFile.close();
    return 0;
}
