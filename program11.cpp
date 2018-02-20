/*
*******************************************************************************
    Author:                 Jacob Wunder
    Assignment Title:       Program 11
    Assignment Description: GPS
                            This program reads from GPS data file and reports
                            the final location, distance traveled, and the
                            distance to starting point.
    Due Date:               02/20/18
    Date Created:           02/20/18
    Date Last Modified:     02/20/18
*******************************************************************************
    Data Abstraction:
        * double variables declared to hold the x-pos, y-pos, starting x-pos,
          starting y-pos, final x-pos, final y-pos, total distance
        * string declared for command and file name
        * input and output streams initialized
    Input:
        * Reads file name from the user
    Process:
        * User input is validated
        * If input is valid and the file can be opened, the first two header
          lines of the file will be skipped
        * Lines of the file are read until "START" is read, then the positions
          are stored in xStart, yStart, xPrev, yPrev
        * The input file continues to be read until "START" is read, then the
          final data is calculated
    Output:
        * The final data is reported to the screen and to GPS.report output
          file
    Assumptions:
        * It is assumed that, having been prompted to do so, the user will
          correctly input data
        * It is assumed that there will be an input file ready for processing
*******************************************************************************
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

      //////////////////////
     // DATA ABSTRACTION //
    //////////////////////


    string inFileName;
    ifstream inFile;


      ///////////
     // INPUT //
    ///////////

	do
	{
    cout << "Enter File Name: ";
    cin >> inFileName;
    cout << inFileName << endl;

	inFile.clear();
    inFile.open(inFileName.c_str());

    if(!inFile)
    {
        cout << "Error: File did NOT open." << endl;
    }
	while {!infile);


      /////////////
     // PROCESS //
    /////////////

    while (inFile.get(c))
    {

    }



      ////////////
     // OUTPUT //
    ////////////

    cout << << endl;
    outFile << << endl;

    inFile.close();

    return 0;
}
