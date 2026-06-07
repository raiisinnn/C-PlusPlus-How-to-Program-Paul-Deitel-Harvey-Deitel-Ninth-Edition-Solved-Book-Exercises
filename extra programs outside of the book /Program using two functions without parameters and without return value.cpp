/*
Classwork:
Write a program that prints your name and address using two functions 
without parameters and without return value.
*/

#include <iostream>
using namespace std;

void printName() {
    cout << "Name: John Doe" << endl;
}

void printAddress() {
    cout << "Address: 123 Main Street, Tirana, Albania" << endl;
}

int main() {
    printName();
    printAddress();
    return 0;
}
