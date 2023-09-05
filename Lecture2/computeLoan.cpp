#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << "Enter yearly interest rate, for example 8.25: ";
    double annualInterestRate = 0;
    cin >> annualInterestRate;

    double monthlyInterestRate = annualInterestRate / 1200;
    
    cout << "Enter number of years as an integer, or example 5: ";
    int numberOfyear = 0;
    cin >> numberOfyear;

    cout << "Enter loan amount, for example 120000.95: ";
    double loanAmount = 0;
    cin >> loanAmount;

    double monthlyPayment = loanAmount * monthlyInterestRate / (1 -1 / pow(1+monthlyInterestRate, numberOfyear * 12));
    double totalPayment = monthlyPayment * numberOfyear *12;

    monthlyPayment = static_cast<int>(monthlyPayment * 100) / 100.0;
    totalPayment = static_cast<int>(totalPayment * 100) / 100.0;

    cout << "The monthly payment is " << monthlyPayment << "\n" << "The total payment is " << totalPayment << endl;

    return 0;
}