#include <iostream>
using namespace std;

int main() {
    double radius = 0;
    double area = 0;

    cout << "Enter the radius: ";
    cin >> radius;
    
    area = radius * radius * 3.14159;

    cout << "The area is " << area <<"\n";
    return 0;
}