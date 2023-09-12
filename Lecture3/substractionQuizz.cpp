#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    //generate two random sigle-digit integers
    srand(time(0));
    int num1 = rand()%10;
    int num2 = rand()%10;

    //swap number if num1 < num2
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    //prompt the student to answer "What is num1-num2?"
    cout << "What is " << num1 << "-" << num2 << "? : ";
    int answer;
    cin >> answer;

    //Grade the answer and display the result
    if ((num1 - num2) == answer) cout << "You are correct!" << endl;
    else cout << "Your ansewr is wrong.\n" << num1 << "-" << num2 << " should be " << (num1-num2) << endl;

    return 0;
}