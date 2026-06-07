/*
Homework:
Write a program that reads the radius of a circle and prints its area.
Use a function with arguments and no return value.
*/

#include <iostream>
#include <cmath>
using namespace std;

void printCircleArea(double r) {
    double area = M_PI * pow(r, 2);
    cout << "The area of the circle is: " << area << endl;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if (radius <= 0)
        cout << "Error: radius must be positive!" << endl;
    else
        printCircleArea(radius);

    return 0;
}
