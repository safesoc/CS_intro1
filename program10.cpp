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
        * int declared for all values except a double for average
        * input file stream initialized
        * strings declared for file name and skipping lines.
    Input:
        * Reads file name and  from the user in a loop until a proper file name
          is read.
    Process:
        * The first two lines of the file are skipped.
        * Integers are read from the file in a loop until all data is collected
          and all values are calculated.
    Output:
        * All values are printed to the screen
    Assumptions:
        * It is assumed that, having been prompted to do so, the user will
          correctly input data
        * It is assumed that there will be an input file ready for processing
        * It is assumed that the first two lines will always need to be skipped
*******************************************************************************
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{

      //////////////////////
     // DATA ABSTRACTION //
    //////////////////////

    int count = 0, sum = 0;
    int n, min, max;
    double avg = 0;
    string inFileName;
    string skipLine;
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
            cout << "Error: File Not Open.\n" << endl;
        }
	}
	while (!inFile);


      /////////////
     // PROCESS //
    /////////////

    while(inFile)
    {
        getline(inFile,skipLine);
        getline(inFile,skipLine);

        min = n;
        max = n;

        while (inFile >> n)
        {
            count++;
            sum += n;

            if (n > max)
            {
                max = n;
            }

            if (n < min)
            {
                min = n;
            }

        }
    }

    avg = static_cast<double>(sum) / count;


      ////////////
     // OUTPUT //
    ////////////

    cout << setprecision(3) << fixed << endl;
    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;
    cout << "Sum = " << sum << endl;
    cout << "Count = " << count << endl;
    cout << "Average = " << avg << endl;

    inFile.close();

    return 0;
}
