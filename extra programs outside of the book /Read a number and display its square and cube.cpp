/*
Homework:
Write a program that reads a number and displays its square and cube 
using two functions with arguments and no return value.
*/

#include <iostream>
#include <cmath>
using namespace std;

void printSquare(double n) {
    cout << "Square of " << n << " is: " << pow(n, 2) << endl;
}

void printCube(double n) {
    cout << "Cube of " << n << " is: " << pow(n, 3) << endl;
}

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    printSquare(num);
    printCube(num);

    return 0;
}
