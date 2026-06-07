/* 3.14 (Employee Class)
Create a class called Employee that includes three pieces of information as
data members: a first name (string), a last name (string), and a monthly salary (int).
If the monthly salary is not positive, set it to 0.

The program demonstrates:
- Constructors
- Getter and setter methods
- Salary validation
- A raise method that increases salary by a given percentage
*/

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string firstName;
    string lastName;
    int monthlySalary;

public:
    // Constructor
    Employee(string first, string last, int salary) {
        firstName = first;
        lastName = last;
        setMonthlySalary(salary);
    }

    // Setters
    void setFirstName(const string& first) {
        firstName = first;
    }

    void setLastName(const string& last) {
        lastName = last;
    }

    void setMonthlySalary(int salary) {
        monthlySalary = (salary > 0) ? salary : 0;
    }

    // Getters
    string getFirstName() const {
        return firstName;
    }

    string getLastName() const {
        return lastName;
    }

    int getMonthlySalary() const {
        return monthlySalary;
    }

    int getYearlySalary() const {
        return monthlySalary * 12;
    }

    // Raise salary by a given percentage
    void raise(float percent) {
        double increase = monthlySalary * percent / 100.0;
        monthlySalary += static_cast<int>(increase);
    }
};

// Main program
int main() {
    Employee e1("Akira", "Toriyama", 3000);
    Employee e2("Reiko", "Mori", 4000);

    cout << "Yearly salary of " << e1.getFirstName() << " " << e1.getLastName()
         << ": $" << e1.getYearlySalary() << endl;
    cout << "Yearly salary of " << e2.getFirstName() << " " << e2.getLastName()
         << ": $" << e2.getYearlySalary() << endl;

    e1.raise(10);
    e2.raise(10);

    cout << "\nAfter a 10% raise:" << endl;
    cout << "Yearly salary of " << e1.getFirstName() << " " << e1.getLastName()
         << ": $" << e1.getYearlySalary() << endl;
    cout << "Yearly salary of " << e2.getFirstName() << " " << e2.getLastName()
         << ": $" << e2.getYearlySalary() << endl;

    return 0;
}
