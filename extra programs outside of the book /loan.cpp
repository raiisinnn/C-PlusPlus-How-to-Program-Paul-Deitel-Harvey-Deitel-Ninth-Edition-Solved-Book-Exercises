/*
Write a program that reads from the keyboard the amount of credit (loan) a company will take from the bank 
and the annual interest rate. The program should display:
- the total amount the company must pay after one year, and
- the monthly payment.
*/

#include <iostream>
using namespace std;

int main() {
    double loanAmount, annualInterestRate;
    
    cout << "Enter the loan amount: ";
    cin >> loanAmount;
    
    cout << "Enter the annual interest rate (in %): ";
    cin >> annualInterestRate;

    // Calculate total amount after one year
    double totalAmount = loanAmount + (loanAmount * annualInterestRate / 100);

    // Calculate monthly payment
    double monthlyPayment = totalAmount / 12;

    cout << "\nTotal amount to be paid after one year: $" << totalAmount << endl;
    cout << "Monthly payment: $" << monthlyPayment << endl;

    return 0;
}
