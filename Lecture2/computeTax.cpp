#include <iostream>
using namespace std;

int main() {
    cout << "O-single filer\n"
    << "1-married jointly, or qualifying widow(er)\n"
    << "2-married separately\n"
    << "3-head of household\n"
    << "Enter the filing status: ";

    int status;
    cin >> status;

    cout << "Enter the eaxable income: ";
    double income;
    cin >> income;

    double tax = 0;

    if (status == 0) {
        if (income <= 6000) tax = income * 0.10;
        else if (income <= 27950) 
            tax = 6000 * 0.10 + (income - 6000) * 0.15;
        else if (income <= 67700) 
            tax = 6000 * 0.10 + (27950 - 6000) * 0.15 + 
            (income - 27950) * 0.27;
        else if (income <= 141250)
            tax = 6000 * 0.10 + (27950 - 6000) * 0.15 + 
            (67700 - 27950) * 0.27 + 
            (income - 67700) *0.30;
        else if (income <= 307050)
            tax = 6000 * 0.10 + (27950 - 6000) * 0.15 + 
            (67700 - 27950) * 0.27 + 
            (141250 - 67700) * 0.30 +
            (income - 141250) * 0.35;
        else
            tax = 6000 * 0.10 + (27950 - 6000) * 0.15 + 
            (67700 - 27950) * 0.27 + 
            (141250 - 67700) * 0.30 +
            (307050 - 141250) * 0.35 +
            (income - 307050) * 0.386;
    }

    else if (status == 1) {

    }

    else if (status == 2) {

    }
    
    else if (status == 3) {

    }

    else {
        cout << "Error: invalid stauts";
        return 0;
    }

    cout << "Tax is " << static_cast<int>(tax * 100) / 100.0 << endl;:wcerr

    return 0;
}