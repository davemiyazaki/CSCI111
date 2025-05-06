#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number between 10 and 20: ";
    cin >> num;

    if (num < 10 || num > 20) {
        cout << "Program ending..." << endl;
        return 0;
    }

    for (int i = 0; i < num; i++) {
        cout << (i % 2 == 0 ? '^' : '*');
    }
    cout << endl;

    return 0;
}
