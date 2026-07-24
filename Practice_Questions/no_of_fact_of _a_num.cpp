#include <iostream>
using namespace std;

int main() {
    int val;
    
    cout << "Enter a number: ";
    cin >> val;

    cout << "The factors of " << val << " are:\n";
    
    for (int i = 1; i <= val; i++) {
        if (val % i == 0) {
            cout << i << "\n";
        }
    }

    return 0;
}
