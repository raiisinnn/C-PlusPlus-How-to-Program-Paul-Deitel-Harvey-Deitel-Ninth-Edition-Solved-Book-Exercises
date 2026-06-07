#include <iostream>
using namespace std;

int main() 
{
    double r;
    double d;
    double per;
    double s;
    const double p = 3.14;

    cout << "Enter the value of your circle's radius: " << endl;
    cin >> r;
    d = 2 * r;
    cout << "The value of the diameter is: " << d << endl;
    per = 2 * p * r;
    cout << "The value of the perimeter is: " << per << endl;
    s = p * (r * r);
    cout << "The value of the surface area is: " << s << endl;

    return 0;
}
