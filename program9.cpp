/*
*******************************************************************************
    Author:                 Jacob Wunder
    Assignment Title:       Program 9
    Assignment Description: Caesar Cipher
                            This program uses a basic 3-character shift to
                            encrypt and decrypt a message. The user is prompted
                            to enter the name of a file and choose between
                            encrypting and decrypting. Then, the input will
                            undergo the selected shift. After the shift, the
                            output will be printed to the screen and output
                            file.
    Due Date:               02/13/18
    Date Created:           02/13/18
    Date Last Modified:     02/13/18
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
#include <sstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{

      //////////////////////
     // DATA ABSTRACTION //
    //////////////////////

    int shift;
    char c;
    string inFileName;
    string outFileName = "message";
    string command;
    string error;
    ifstream inFile;
    ofstream outFile;
    stringstream ss;
    
    
      ///////////
     // INPUT //
    ///////////

    cout << "Enter File Name: ";
    cin >> inFileName;
    cout << inFileName << endl;

    cout << "Enter encrypt or decrypt: ";
    cin >> command;
    cout << command << endl;


      /////////////
     // PROCESS //
    /////////////

    if(command == "encrypt")
    {
        shift = 3;
    }
    else if (command == "decrypt")
    {
        shift = -3;
    }
    else
    {
        cout << "Error: Bad Command." << endl;
        exit(1);
    }


    inFile.open(inFileName.c_str());
    outFile.open("message");

    while (inFile.get(c))
    {
        c += shift;
        ss << c;
    }

    if(inFile)
    {
        cout << "Error: File did NOT open." << endl;
        exit(1);
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
