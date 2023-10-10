#include <iostream>
using namespace std;

int max(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

int main() {

    int i = 5;
    int j = 2;
    int k = max(i,j);

    cout << "The maximun between " << i << " and " << j << " is " << k << endl;

    return 0;
}