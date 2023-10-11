#include <iostream>
using namespace std;

void increasement(int n) {
    n++;
    cout << "\t inside the funtion is " << n << endl;
}


int main(void) {
    int x = 1;
    cout << "Before the call, x is " << x << endl;
    increasement(++x);
    cout << "After the call, x is " << x << endl;
}