#include <iostream>

using namespace std;

int main() {
    // Intro part
    cout << "Welcom to my comedy show!\n";
    string firstName;
    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Hello, " << firstName << endl;
    cout << "Please take the action\n" << "1: Want to hear jokes\n" << "2: Please stop this program" << endl;
    int introChoice;
    cout << "Your Choice: ";
    cin >> introChoice;

    string answer;

    switch (introChoice) {
        case 1:
            cout << "Why American are bad at chess?" << endl;
            cin >> answer;
            cout << "I don't care your respond! I am no chat bot.\n" << "American are bad at chess becuase they already lost two towers!" << endl;
            break;
        case 2:
            cout << "Give me $10,0000\n" << "1: yes\n" << "2: no" << endl;
            cout << "Your Choice: ";
            cin >> introChoice;
            cout << "Just kindding!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please enter vaid option!" << endl;
            break;
    }

    return 0;
}