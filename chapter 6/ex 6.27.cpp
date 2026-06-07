/*6.27 (Find the Minimum)
Write a program that inputs three double-precision, floating-point
numbers and passes them to a function that returns the smallest number.*/

#include <iostream>
using namespace std;

// n1 is the first number
// n2 is the second number
// n3 is the third number
double minimum(double n1, double n2, double n3)
{
    double min_value = n1;

    if (n2 < min_value) {
        min_value = n2;
    }

    if (n3 < min_value) {
        min_value = n3;
    }

    return min_value;
}

int main() {
    double n1, n2, n3;

    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    cout << "Enter the third number: ";
    cin >> n3;

    double min_value = minimum(n1, n2, n3);

    cout << "The smallest number is: " << min_value;

    return 0;
}
