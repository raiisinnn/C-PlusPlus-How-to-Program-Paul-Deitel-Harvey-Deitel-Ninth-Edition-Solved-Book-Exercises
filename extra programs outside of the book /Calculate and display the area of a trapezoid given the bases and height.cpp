/*
Homework:
Write a program that calculates and displays the area of a trapezoid 
given its bases and height. Use a function with return value and three parameters.
*/

#include <iostream>
using namespace std;

double trapezoidArea(double base1, double base2, double height) {
    return ((base1 + base2) / 2) * height;
}

int main() {
    double a, b, h;
    cout << "Enter the first base: ";
    cin >> a;
    cout << "Enter the second base: ";
    cin >> b;
    cout << "Enter the height: ";
    cin >> h;

    if (a <= 0 || b <= 0 || h <= 0)
        cout << "Error: All values must be positive!" << endl;
    else
        cout << "The area of the trapezoid is: " << trapezoidArea(a, b, h) << endl;

    return 0;
}
