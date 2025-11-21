#include <iostream>
using namespace std;

int main() {
    int numbers[20];
    int count = 0;
    
    cout << "Enter 20 integers between 10 and 100:" << endl;
    for (int i = 0; i < 20; i++) {
        int num;
        cin >> num;
        
        bool isDuplicate = false;
        for (int j = 0; j < count; j++) {
            if (numbers[j] == num) {
                isDuplicate = true;
                break;
            }
        }
        
        if (!isDuplicate) {
            numbers[count] = num;
            count++;
        }
    }
    
    cout << endl;
    cout << "The nonduplicate values are:" << endl;
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    return 0;
}
