
/*6.50 (Pass-by-Value vs. Pass-by-Reference) Write a complete C++ program with the two alternate
functions specified below, each of which simply triples the variable count defined in main. Then
compare and contrast the two approaches. These two functions are
a) function tripleByValue that passes a copy of count by value, triples the copy and returns
the new value and
b) function tripleByReference that passes count by reference via a reference parameter
and triples the original value of count through its alias (i.e., the reference parameter).
*/

#include <iostream>
using namespace std;

// a) Function that passes a copy of the variable (pass-by-value)
int tripleByValue(int count)
{
    return count * 3;
}

// b) Function that passes the variable by reference (pass-by-reference)
void tripleByReference(int &count)
{
    count *= 3;
}

int main()
{
    int count;

    cout << "Enter an integer value: ";
    cin >> count;

    cout << "\nInitial value of count: " << count << endl;

    // Using tripleByValue
    cout << "Value returned by tripleByValue: " << tripleByValue(count) << endl;
    cout << "Value of count after tripleByValue: " << count << " (unchanged)" << endl;

    // Using tripleByReference
    tripleByReference(count);
    cout << "Value of count after tripleByReference: " << count << " (changed)" << endl;

    return 0;
}
