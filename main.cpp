#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int numToPrint = 1;
    for (int i = 0; i < rows; i++) {
        int spaces = rows - i - 1;
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        int centreNum = (numToPrint / 2) + 1;
        for (int k = 1; k <= centreNum; k++) {
            cout << k;
        }
        for (int k = centreNum - 1; k > 0; k--) {
            cout << k;
        }
        cout << "\n";
        numToPrint += 2;
    }
}

