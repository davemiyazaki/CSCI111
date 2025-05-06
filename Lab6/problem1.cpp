#include <iostream>
using namespace std;

bool containsFive(int num) {
    while (num > 0) {
        if (num % 10 == 5) {
            return true;
        }
        num /= 10;
    }
    return false;
}

int main() {
    int num;
    
    cout << "Enter a positive integer: ";
    while (!(cin >> num) || num <= 0) {
        cout << "Bad input! Try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    if (containsFive(num)) {
        cout << "The number contains the digit 5." << endl;
    } else {
        cout << "The number does not contain the digit 5." << endl;
    }

    return 0;
}