#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;
    cout << "Enter 10 numbers: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    float average = sum / 10;
    cout << "Average is: " << average;   
}

