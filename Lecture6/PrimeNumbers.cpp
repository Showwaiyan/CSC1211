#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << "Find all prime numbers <= n, enter n: ";
    int n;
    cin >> n;

    const int NUMBER_PER_LINE = 10;
    int count = 0;
    int number = 2;

    cout << "The prime numbers are:" << endl;

    while (number <= n)
    {
        bool isPrime = true;

        for (int divisor=2; divisor <= sqrt(number*1.0); divisor++) {
            if (number % divisor == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            count++;

            if (count % NUMBER_PER_LINE == 0) {
                cout << number << endl;
            }
            else cout << number << " ";
        }

        number++;
    }

    cout << "\n" << count << " number of primes <= " << n << endl;

    return 0;

}