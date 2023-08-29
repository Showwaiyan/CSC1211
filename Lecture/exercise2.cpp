#include <iostream>
using namespace std;

int main() {
    int seconds = 0, minutes = 0,hours = 0;
    
    cout << "Enter an integear for seconds: ";
    cin >> seconds;

    hours = seconds/3600;
    minutes = (seconds%3600)/60;
    seconds = seconds%60;

    cout << hours << " Hours " << minutes << " Minutes " << seconds << " Seconds" << endl;

    return 0;
}