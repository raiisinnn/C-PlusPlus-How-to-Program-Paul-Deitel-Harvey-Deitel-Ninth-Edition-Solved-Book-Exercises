/*
Classwork:
Write a program that tests all the functions of the <cmath> library.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 9.0, y = 2.0;

    cout << "Testing <cmath> library functions:\n\n";
    cout << "sqrt(" << x << ") = " << sqrt(x) << endl;
    cout << "pow(" << x << ", " << y << ") = " << pow(x, y) << endl;
    cout << "cbrt(" << x << ") = " << cbrt(x) << endl;
    cout << "exp(" << y << ") = " << exp(y) << endl;
    cout << "log(" << x << ") = " << log(x) << endl;
    cout << "log10(" << x << ") = " << log10(x) << endl;
    cout << "fabs(-" << x << ") = " << fabs(-x) << endl;
    cout << "ceil(4.3) = " << ceil(4.3) << endl;
    cout << "floor(4.7) = " << floor(4.7) << endl;
    cout << "fmod(" << x << ", " << y << ") = " << fmod(x, y) << endl;
    cout << "sin(0) = " << sin(0) << endl;
    cout << "cos(0) = " << cos(0) << endl;
    cout << "tan(0) = " << tan(0) << endl;
    cout << "asin(1) = " << asin(1) << endl;
    cout << "acos(1) = " << acos(1) << endl;
    cout << "atan(1) = " << atan(1) << endl;
    cout << "hypot(3, 4) = " << hypot(3, 4) << endl;

    return 0;
}
