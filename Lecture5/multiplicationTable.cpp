#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << "Multiplication Table\n";
    cout << "-----------------------" << endl;

    cout << setw(2) << "|";

    for (int i=1;i<=9;i++) {
        cout << setw(3) << i;
    }
    cout << "\n";

    for (int i = 1; i <= 9; i++) {
        cout << i << "|";
        
        for (int j = 1; j <= 9; j++) {
            cout << setw(3) << i * j;
        }

        cout << "\n";
    }

    return 0;
}