#include <iostream>

using namespace std;

int max(int num1, int num2);
double max(double num1, double num2);
double max(double num1, double num2, double num3);

int main (){

    cout << "The maximum between 3 and 4 is " << max(3,4) << endl;
    cout << "The maximum between 3.0 and 5.4 is " << max(3.0,5.4) << endl;
    cout << "The maximum between 3.0 ,5.4 and 10.14 is " << max(3.0,5.4,10.14) << endl;
}

int max(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

double max(double num1, double num2) {
    return num1 > num2 ? num1 : num2;
}

double max(double num1, double num2, double num3) {
    return max(max(num1, num2),num3);
}