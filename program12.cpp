/*
*******************************************************************************
* AUTHOR:                   JACOB WUNDER
* ASSIGNMENT TITLE:         PROGRAM 12 - GUESSING GAME
* ASSIGNMENT DESCRIPTION:   PROGRAM ASKS THE USER TO ENTER TWO INTEGERS, THE
*                           PROGRAM THEN WILL SELECT A RANDOM NUMBER BETWEEN
*                           THE TWO INTEGERS. THE USER IS THEN PROMPTED TO
*                           GUESS THE RANDOM NUMBER. THE RESULT OF THE GUESS
*                           WHETHER HIGH OR LOW, OR CORRECT, WILL BE PRINTED TO
*                           THE SCREEN.
* DUE DATE:                 02/22/2018
* DATE CREATED:             02/21/2018
* DATE LAST MODIFIED:       02/21/2018
*******************************************************************************
*******************************************************************************
* DATA ABSTRACTION:
*   * 4 int variables initialized for the user's entered values, min and max
*     values, the user's guess, the number the program selected and the
*     number of tries it took the user to guess
*******************************************************************************
* INPUT:
*   * The user is prompted to enter the minimum and maximum value
*******************************************************************************
* PROCESS:
*   *
*******************************************************************************
* OUTPUT:
*   *
*******************************************************************************
* ASSUMPTIONS:
*   * It is assumed, that after having been prompted, the user will correctly
*     input data
*******************************************************************************
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    // DATA ABSTRACTION //
    int x, y, minVal, maxVal, guess, number, tries = 0;


    // INPUT //

    cout << "Please enter 2 integers: ";
    cin >> x >> y;
    //cout << x << " " << y << endl;

    // ASSIGN MIN & MAX VALUES
    if (x < y) {
        minVal = x;
        maxVal = y;}
    else {
        minVal = y;
        maxVal = x;}

    cout << "I'm thinking of a number between " << minVal << " and "
         << maxVal << "." << endl;


    // PROCESSING & OUTPUT //

    srand(time(0));

    // CALCULATE THE NUMBER TO BE GUESSED
    number == rand() % (maxVal - minVal + 1) + minVal;

    do
    {
        cout << "Enter guess: ";
        cin >> guess;
        //cout << guess;

        if (guess == number)
        {
            cout <<"\nCorrect, it took you " <<tries<< " to guess my number.";
        }
        else if (guess < number)
        {
            cout << " - Too Low" << endl;
            tries++;
        }
        else if (guess > number)
        {
            cout << " - Too High" << endl;
            tries++;
        }
    } while (guess != number);

    return 0;
}
