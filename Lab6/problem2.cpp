#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number between 1 and 100: ";
    while (!(cin >> num) || num < 1 || num > 100) {
        cout << "Invalid input!\nEnter a number between 1 and 100: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    cout << "The first 20 multiples of " << num << " are: ";
    for (int i = 1; i <= 20; i++) {
        cout << num * i << " ";
    }
    cout << endl;

    return 0;
}