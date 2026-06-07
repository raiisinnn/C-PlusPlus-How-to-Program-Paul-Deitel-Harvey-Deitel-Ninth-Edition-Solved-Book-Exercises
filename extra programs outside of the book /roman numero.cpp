/*
Roman Numbers

A Roman numeral is made up of characters with the following values:
I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000

The letters are arranged from largest to smallest and are added together.
Example: MDCCCLXVII = 1000 + 500 + 100 + 100 + 100 + 50 + 10 + 5 + 1 + 1 = 1867

If an I, X, or C appears before one of the next two larger symbols, it is subtracted first.
Examples:
IV = 4 (5 - 1)
MCMXC = 1990 (1000 + (1000 - 100) + (100 - 10))

A valid Roman numeral can have up to four identical characters in a row and at most one smaller digit before a larger one.
Therefore, it’s enough to check at most two characters at a time.

Program requirements:
- Read a Roman numeral string (max length 15).
- Calculate its decimal (Arabic) representation.
- Output: "The Arabic number is x."
- Handle both uppercase and lowercase.
- If an invalid character is entered, terminate the program without output.
*/

#include <iostream>
#include <string>
using namespace std;

// Convert a single Roman numeral character to its decimal value
int romanToDecimal(char c) {
    switch (c) {
        case 'I': case 'i': return 1;
        case 'V': case 'v': return 5;
        case 'X': case 'x': return 10;
        case 'L': case 'l': return 50;
        case 'C': case 'c': return 100;
        case 'D': case 'd': return 500;
        case 'M': case 'm': return 1000;
        default: return -1; // Invalid character
    }
}

int main() {
    string romanNumber;
    cout << "Please enter a Roman number: ";
    cin >> romanNumber;

    int total = 0;
    int previousValue = 0;

    for (char c : romanNumber) {
        int value = romanToDecimal(c);

        // Invalid input check
        if (value == -1)
            return 0;

        // If the previous numeral is smaller, subtract it twice (since we already added it)
        if (previousValue < value)
            total += value - 2 * previousValue;
        else
            total += value;

        previousValue = value;
    }

    cout << "The Arabic number is " << total << "." << endl;
    return 0;
}
