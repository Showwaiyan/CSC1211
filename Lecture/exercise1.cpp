#include <iostream>
using namespace std;

int main() {
    int num1 = 0,num2 = 0, num3 = 0;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    int average = (num1+num2+num3)/3;

    cout << "The average value of three number: ";
    cout << average << "\n";

    return 0;
}