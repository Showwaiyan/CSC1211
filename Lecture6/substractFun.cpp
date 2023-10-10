#include <iostream>
using namespace std;

int substract(int num1, int num2) {
    return num1-num2;
}

int main() {

    int x = 0;
    cin >> x;

    int y = 0;
    cin >> y;

    cout << substract(x,y) << endl;

    return 0;
}