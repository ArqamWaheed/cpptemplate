#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    int largest = numbers[0];
    int location = 0;
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
            location = i;
        }
    }

    cout << "Largest number is: " << largest << endl;
    cout << "Location: " << (location + 1) << endl;
    return 0;
}
