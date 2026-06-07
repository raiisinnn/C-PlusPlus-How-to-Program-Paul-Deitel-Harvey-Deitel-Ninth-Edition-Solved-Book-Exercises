//U.4.34 at the end of chapter 4.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // a) Write a program that reads a nonnegative integer and computes and prints its factorial.
    /*
    int n;
    int r = 1;
    // n is the variable for the number we will enter.
    // r is the variable that will store the result.
    
    cout << "Enter the number you want: " << endl;
    cin >> n;
    
    while (n > 0) {
        r = r * n;
        n--;
    }
    
    cout << r << endl;
    */

    // b) Write a program that estimates the value of the mathematical constant e by using the formula: e = 1 + 1/1! + 1/2! + 1/3! + ...
    /*  
    int n = 0;
    double e = 1.0, f = 1.0;
    // n stores the counting order (1,2,3,....).
    // e will be the variable that stores the result.
    // f will be the variable that stores n-factorial.

    while (true) // the loop will repeat until we use break.
    {
        f *= n == 0 ? 1 : n;
        e += 1.0 / f;
        n++;

        if (n > 10) {
            break;
        }
    }

    cout << "The value of e: " << e << endl;
    */

    // c) Write a program that computes the value of e^x by using the formula: e^x = 1 + x/1! + x^2/2! + x^3/3! + ...
    /*
    double x, t = 1, s = 1;
    int i = 1, f = 1;
    // x stores the value entered by the user.
    // t stores the term part (1 + x/1!, x^2/2!, x^3/3!, ...).
    // s will store the sum (1 + x/1! + x^2/2! + x^3/3! + ...).
    // i stores the counting order (1,2,3,...).
    // f will be the variable that stores n-factorial.

    cout << "Enter a value: ";
    cin >> x;

    while (t > 0.0001) {
        f *= i;
        t = (x * t) / f;
        s += t;
        i++;
    }

    cout << "e^" << x << " = " << s << endl;
    */
    
    return 0;
}
