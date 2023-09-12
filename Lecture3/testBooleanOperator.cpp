#include <iostream>

using namespace std;

int main() {

    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num%2==0 && num%3==0) cout << num << " is divisible by 2 and 3." << endl;

    if (num%2==0 || num%3==0) cout << num << " is divisble by 2 or 3." << endl;

    if ((num%2==0 || num%3==0) && !(num%2==0 && num%3==0)) cout << num << " is divisible by 2 or 3, but not both." << endl;

    return 0;
}