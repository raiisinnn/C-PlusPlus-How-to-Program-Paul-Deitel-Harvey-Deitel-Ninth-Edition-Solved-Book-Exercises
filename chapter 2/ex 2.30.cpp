#include <iostream>
using namespace std;

int main()
{
    double weight, height;

    cout << "Enter your weight (in kilograms): " << endl;
    cin >> weight;
    cout << "Enter your height (in meters): " << endl;
    cin >> height;

    double bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi << endl;

    if (bmi >= 25) {
        cout << "Overweight" << endl;
    }
    else if (bmi < 25 && bmi > 18.5) {
        cout << "Normal" << endl;
    }
    else {
        cout << "Underweight" << endl;
    }

    return 0;
}
