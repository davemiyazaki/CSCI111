#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number greater than 100: ";
    while (!(cin >> num) || num <= 100) {
        cout << "Invalid input!\nEnter a number greater than 100: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }

    for (int i = 1; i * i < num; i++) {
        cout << i << " " << i * i << endl;
    }

    return 0;
}