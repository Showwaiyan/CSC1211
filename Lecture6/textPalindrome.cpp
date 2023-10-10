#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter a string: ";
    string s;

    getline(cin,s);

    bool isPalindrome = false;

    for (int i=0,j=s.length()-1; i != j; i++,j--) {
        if (s[i] != s[j]) {
            isPalindrome = true;
            break;
        }
    }

    if (isPalindrome) cout << s << " is a palindrome" << endl;
    else cout << s << " is not a palindrome" << endl;

    return 0;
}