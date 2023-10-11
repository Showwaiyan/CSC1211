#include <iostream>

using namespace std;

void printGrade(double score) {
    if (score >= 90.00) cout << 'A' << endl;
    else if (score >= 80.00) cout << 'B' << endl;
    else if (score >= 70.00) cout << 'C' << endl;
    else if (score >= 60.00) cout << 'D' << endl;
    else cout << 'F' << endl;
}

int main() {
    cout << "Enter a score: ";
    double score;
    cin >> score;

    cout << "The grade is ";
    printGrade(score);

    return 0;
}