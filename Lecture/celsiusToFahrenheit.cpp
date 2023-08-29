#include <iostream>
using namespace std;

int main() {

    double celsius =0;

    cout << "Enter the degree in Celsius: " ;
    cin >> celsius;

    double fahrenheit = (9.0/5.0)*celsius + 32;
    cout << "Celsius " << celsius << " is " << fahrenheit << " in Fahrenheit" << endl;

    return 0;
}