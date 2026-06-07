/* 6.24 ne fund te kapitullit
6.24 (Separating Digits) Write program segments that accomplish each of the following:
a) Calculate the integer part of the quotient when integer a is divided by integer b.
b) Calculate the integer remainder when integer a is divided by integer b.
c) Use the program pieces developed in (a) and (b) to write a function that inputs an integer
between 1 and 32767 and prints it as a series of digits, each pair of which is separated
by two spaces. For example, the integer 4562 should print as follows:
4 5 6 2
*/


#include <iostream>

using namespace std;

//a
int integer_of_the_quotient(int a, int b) {
    return a / b;
}

//b
int integer_remainder(int a, int b) {
    return a % b;
}

//c
void series_of_digits(int number) {
    if (number < 1 || number > 32767) { // Changed 'n' to 'number'
        cout << "ERROR. Please make sure the input is a number between 1 and 32767." << endl;
        return;
    }

    while (number > 0) { // Changed 'n' to 'number'
        int digit = integer_remainder(number, 10); // Changed 'n' to 'number'
        cout << digit << " ";
        number = integer_of_the_quotient(number, 10); // Changed 'n' to 'number'
    }

    cout << endl;
}

int main() {

    int n = 4562;
    cout << "Original number is: " << n << endl;

    int quotient = integer_of_the_quotient(n, 10);
    cout << "Integer part of quotient is: " << quotient << endl;

    int remainder = integer_remainder(n, 10);
    cout << "Integer remainder is: " << remainder << endl;

    cout << "Digits with separation: ";
    series_of_digits(n); // Changed 'printDigitsWithSeparation' to 'series_of_digits'

    return 0;
}
