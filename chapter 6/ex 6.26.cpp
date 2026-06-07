/*6.26 (Celsius and Fahrenheit Temperatures)
Implement the following integer functions:
a) Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
c) Use these functions to write a program that prints charts showing the Fahrenheit equivalents
of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents of
all Fahrenheit temperatures from 32 to 212 degrees. Print the outputs in a neat tabular
format that minimizes the number of lines of output while remaining readable.*/

#include <iostream>
#include <iomanip>
using namespace std;

// c for Celsius
double celsius_to_fahrenheit(double c)
{
    return (c * 9 / 5) + 32;
}

// f for Fahrenheit
double fahrenheit_to_celsius(double f)
{
    return (f - 32) * 5 / 9;
}

int main()
{
    cout << "Celsius\t\tFahrenheit" << endl;

    for (int c = 0; c <= 100; c++) {
        double f = celsius_to_fahrenheit(c);
        cout << setw(4) << c << "\t\t" << setw(10) << fixed << setprecision(3) << f << endl;
    }

    cout << "\n\n" << endl;

    cout << "Fahrenheit\tCelsius" << endl;

    for (int f = 32; f <= 212; f++) {
        double c = fahrenheit_to_celsius(f);
        cout << setw(4) << f << "\t" << setw(14) << fixed << setprecision(2) << c << endl;
    }

    return 0;
}
