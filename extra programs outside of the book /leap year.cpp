/*
Write a program that reads a year from the keyboard and displays whether it is a leap year 
(February has 29 days). A year is considered leap if it is divisible by 4 
(e.g., 2004, 2008, 2012 are leap years). 
However, if the year is divisible by 100, then it is not a leap year — 
except when it is also divisible by 400.
For example, 2100, 2200, 2300 are not leap years, 
whereas 2400 and 2800 are leap years.
*/

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
