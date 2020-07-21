/*
 * =====================================================================================
 *
 *       Filename:  conditionalStatements.cpp
 *
 *    Description: Conditional Statements Sandbox
 *
 *        Version:  1.0
 *        Created:  07/19/2020 10:46:26 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dylan Balagtas,
 *   Organization:
 *
 * =====================================================================================
 */
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n = 2;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    if (n >= 1 && n <= 9) {
        if (n == 1) {
            cout << "one" << endl;
        } else if (n == 2) {
            cout << "two" << endl;
        } else if (n == 3) {
            cout << "three" << endl;
        } else if (n == 4) {
            cout << "four" << endl;
        }
        else if (n == 5) {
            cout << "five" << endl;
        }
        else if (n == 6) {
            cout << "six" << endl;
        }
        else if (n == 7) {
            cout << "seven" << endl;
        }
        else if (n == 8) {
            cout << "eight" << endl;
        }else if (n == 9){
          cout << "nine" << endl;
        }


    } else {
        cout << "Greater than 9" << endl;
    }

    return 0;
}

