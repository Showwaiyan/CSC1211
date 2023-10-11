#include <iostream>

using namespace std;

char printGrade(double score) {
    if (score >= 90.00) return 'A';
    else if (score >= 80.00) return 'B';
    else if (score >= 70.00) return 'C';
    else if (score >= 60.00) return 'D';
    else return 'F';
}

int main() {
    cout << "Enter a score: ";
    double score;
    cin >> score;

    cout << "The grade is ";
    cout << printGrade(score) << endl;

    return 0;
}