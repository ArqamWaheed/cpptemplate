#include <iostream>
using namespace std;

int main() {
    int number, factorial;
    factorial = 1;
    cout << "Enter a number you want to factorial: ";
    cin >> number;
    
    for (int i = number; i > 0; i--) {
        factorial *= i;
    }
    cout << factorial;
}