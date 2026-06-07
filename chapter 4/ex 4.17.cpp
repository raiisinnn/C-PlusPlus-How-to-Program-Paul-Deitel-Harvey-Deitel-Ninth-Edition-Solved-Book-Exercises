#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    int max;

    while (i <= 10)
    {
        cout << "Enter number #" << i << endl;
        cin >> n;
        if (n > max)
            max = n;
        i++;
    }

    cout << "The largest number is: " << max << endl;
}
