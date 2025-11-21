#include <iostream>
using namespace std;

int main() {
    int set1[10];
    cout << "Enter 10 numbers for set 1:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> set1[i];
    }

    int set2[10];
    cout << "Enter 10 numbers for set 2:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> set2[i];
    }

    cout << "Common elements: ";
    for (int i = 0; i < 10; i++) {
        bool found = false;
        for (int j = 0; j < 10; j++) {
            if (set1[i] == set2[j]) {
                found = true;
                break;
            }
        }
        if (found) {
            bool already = false;
            for (int k = 0; k < i; k++) {
                if (set1[k] == set1[i]) {
                    already = true;
                    break;
                }
            }
            if (!already) {
                cout << set1[i] << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
