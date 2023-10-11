#include <iostream>

using namespace std;

void t1();

int main() {
    t1();
    t1();

    return 0;
}

int y = 1;

void t1() {
    int x = 1;
    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;
    x++;
    y++;


}