/*
*******************************************************************************
    Author:                 Jacob Wunder
    Assignment Title:       Program 10
    Assignment Description: Min Max Sum Count Average
                            This program reads an unknown number of integers
							from data and reports the min, max, sum, count and
							average of the data.
    Due Date:               02/15/18
    Date Created:           02/14/18
    Date Last Modified:     02/14/18
*******************************************************************************
    Data Abstraction:
        * int declared for the value used to shift the characters in the file
        * char declared to use for reading individual characters from file
        * input and output file streams initialized
        * strings declared for error message, command input, and file names
        * stringstream declared to hold the encrypted or decrypted message
          until ready for printing to screen
    Input:
        * Reads file name and command from the user
    Process:
        * User input is validated
        * If input is valid and the file can be opened, the file will be ready
          and characters will undergo the shift according to the user's
          choice.
    Output:
        * The encrypted or decrypted message, depending on the user's input,
          will be printed to the screen and an output file named "message".
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

    int count = 0;
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
        c += shift;
        ss << c;
    }



      ////////////
     // OUTPUT //
    ////////////

    cout << ss.str() << endl;
    outFile << ss.str() << endl;


    outFile.close();
    inFile.close();
    
    return 0;
}
