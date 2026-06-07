/*
Write a program that reads from the keyboard:
- the dimensions of a painting (width and height),
- the price per linear meter of the frame, and
- the frame thickness.

The program should display the total cost of the frame 
(taking into account the corners as well).

The program must also display error messages 
if the user enters negative values.
*/

#include <iostream>
using namespace std;

int main() {
    double width, height, pricePerMeter, thickness;

    cout << "Enter the width of the painting (in meters): ";
    cin >> width;

    cout << "Enter the height of the painting (in meters): ";
    cin >> height;

    cout << "Enter the price per linear meter of the frame: ";
    cin >> pricePerMeter;

    cout << "Enter the frame thickness (in meters): ";
    cin >> thickness;

    // Error check
    if (width <= 0 || height <= 0 || pricePerMeter <= 0 || thickness <= 0) {
        cout << "Error: Values must be positive numbers!" << endl;
        return 1; // Stop program
    }

    // The frame goes around the painting, so total length = perimeter of outer rectangle
    double outerWidth = width + 2 * thickness;
    double outerHeight = height + 2 * thickness;
    double framePerimeter = 2 * (outerWidth + outerHeight);

    // Calculate total cost
    double totalCost = framePerimeter * pricePerMeter;

    cout << "\nTotal cost of the frame: $" << totalCost << endl;

    return 0;
}
