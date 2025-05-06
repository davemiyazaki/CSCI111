#include <iostream>
using namespace std;

int main() {
    int grade, sum = 0, count = 0;

    cout << "Enter a numeric grade (enter a negative number to stop): ";
    while (cin >> grade && grade >= 0) {
        sum += grade;
        count++;
        cout << "Enter a numeric grade (enter a negative number to stop): ";
    }

    if (count > 0) {
        cout << "The average grade is " << static_cast<double>(sum) / count << endl;
    } else {
        cout << "No grades entered." << endl;
    }

    return 0;
}
