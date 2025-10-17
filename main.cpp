#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Input: ";
    cin >> num;
    
    int reversed = 0;
    for (int temp = num; temp != 0; temp /= 10) {
        reversed = reversed * 10 + temp % 10;
    }
    
    cout << "Output: ";
    
    for (; reversed != 0; reversed /= 10) {
        int digit = reversed % 10;
        switch (digit) {
            case 0: cout << "Zero "; break;
            case 1: cout << "One "; break;
            case 2: cout << "Two "; break;
            case 3: cout << "Three "; break;
            case 4: cout << "Four "; break;
            case 5: cout << "Five "; break;
            case 6: cout << "Six "; break;
            case 7: cout << "Seven "; break;
            case 8: cout << "Eight "; break;
            case 9: cout << "Nine "; break;
        }
    }
    
    cout << endl;
}

