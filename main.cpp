#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char arr[10];
    int lowercase = 0;
    int uppercase = 0;
    int digit = 0;
    int special = 0;
    
    cout << "Enter 10 characters (mix of lower, upper, digit, special):" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < 10; i++) {
        if (islower(arr[i])) {
            lowercase++;
        }
        else if (isupper(arr[i])) {
            uppercase++;
        }
        else if (isdigit(arr[i])) {
            digit++;
        }
        else {
            special++;
        }
    }
    
    cout << "Lower case = " << lowercase << endl;
    cout << "Upper case = " << uppercase << endl;
    cout << "Digit = " << digit << endl;
    cout << "Special characters = " << special << endl;
    
    return 0;
}
