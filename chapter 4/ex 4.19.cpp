#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    int max;
    int submax;

    while (i <= 10)
    {
        cout << "Enter number # " << i << endl;
        cin >> n;
        if (n > max) {
            submax = max;
            max = n;
        }
        else if (n > submax)
            submax = n;
        i++;
    }
    cout << "The largest number is: " << max << endl;
    cout << "The second largest number is: " << submax << endl;
}
