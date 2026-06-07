#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter the lengths of the 3 segments: " << endl;
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0) {
        if (a + b > c && a + c > b && c + b > a) {
            cout << "Yes, the segments can be the sides of a triangle" << endl;
        } else {
            cout << "No, the segments cannot be the sides of a triangle" << endl;
        }
    }
}
