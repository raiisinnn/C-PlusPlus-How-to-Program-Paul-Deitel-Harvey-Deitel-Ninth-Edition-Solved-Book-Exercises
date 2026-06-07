#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a 5-digit number" << endl;
    cin >> x;

    cout << x / 10000 << "   ";
    x = x % 10000;

    cout << x / 1000 << "   ";
    x = x % 1000;

    cout << x / 100 << "   ";
    x = x % 100;

    cout << x / 10 << "   ";
    x = x % 10;

    cout << x << endl;

    return 0;
}
