/*
Write a program that initializes an array with 15 decimal (floating-point) numbers
and prints all values greater than 20.
*/

#include <iostream>
using namespace std;

int main() {
    // With predefined values in the code
    double arr[15] = {14.9, 22.1, 19.5, 29.08, 33.3, 88.8, 19.9, 21.4, 17.7, 16.86, 0.779, 12.21, 29.3, 10.9, 4.44};

    cout << "Values greater than 20 are: ";
    for (int i = 0; i < 15; i++) {
        if (arr[i] > 20) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    // With values entered by the user
    double ary[15];

    cout << "Enter 15 decimal values to store in the array: ";
    for (int j = 0; j < 15; j++) {
        cin >> ary[j];
    }

    cout << "Values greater than 20 are: ";
    for (int j = 0; j < 15; j++) {
        if (ary[j] > 20) {
            cout << ary[j] << " ";
        }
    }
    cout << endl;

    return 0;
}
