#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char characters[10];
    int lowerCount = 0;
    int upperCount = 0;
    int digitCount = 0;
    int specialCount = 0;
    
    cout << "Enter 10 characters (mix of lower, upper, digit, special):" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> characters[i];
        
        if (characters[i] >= 'a' && characters[i] <= 'z') {
            lowerCount++;
        }
        else if (characters[i] >= 'A' && characters[i] <= 'Z') {
            upperCount++;
        }
        else if (characters[i] >= '0' && characters[i] <= '9') {
            digitCount++;
        }
        else {
            specialCount++;
        }
    }
    
    cout << "Lower case = " << lowerCount << endl;
    cout << "Upper case = " << upperCount << endl;
    cout << "Digit = " << digitCount << endl;
    cout << "Special characters = " << specialCount << endl;
    
    return 0;
}
