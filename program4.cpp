/*
 * Author: Jacob Wunder
 * Assignment Title:  Program 4
 * Assignment Description: Reads an integer  between 0 and 999 and sums the
			              digits in the integer.
 * Due Date: 01/25/2018
 * Date Created: 01/25/2018
 * Date Last Modified: 01/28/2018
*/

/*
 * Data Abstraction:
 * 		5 variables, 'o','t','h', 'n', 'sum', are initialized for use to
 *          calculate the sum of the entered number
 * Input:
 * 		The program reads numerical input from the user and
 *      assigns it to 'n'
 * Process:
 *      The digit in the ones, tens, and hundreds places is determined by
 *      taking 'n' and subsequently using modulus 10 to obtain the remainder.
 *      For the tens place, 'n' is divided by 10, and for hundreds it is
 *      divided by 100. Then both values are again modulus 10. All of the
 *      digits are then summed and assigned to 'sum'.
 * Output:
 * 		The sum of the digits is printed
 * Assumptions:
 * 		It is assumed that, having been prompted to do so, the user will
 *      correctly input data
 */

 #include <iostream>

 using namespace std;

 int main()
 {
	 // Data Abstraction

	 int o, t, h, n, sum = 0;

	 // Input
	 cout << "Enter an integer between 0 and 999: ";
	 cin >> n;
	 cout << n << endl;

	 // Process
	 o = n % 10;
	 t = (n / 10) % 10;
	 h = (n / 100) % 10;
	 sum = o + t + h;

	 // Output
	 cout << "The sum of the digits is "<< sum << "." << endl;

	 return 0;
 }
