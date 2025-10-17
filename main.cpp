#include <iostream>
using namespace std;

int main() {
    for (int i; i <= 300000000; i++) {
        if (i%100000000 == 0) {
            cout << "Multiple is " << i/100000000 << endl;
        }
    }
}