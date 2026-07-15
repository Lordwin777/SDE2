#include <iostream>
using namespace std;

int main() {
    int code;
    cout << "Enter a code: ";
    cin >> code;
    (code>1)? cout << "Jerusalem" : (code<1)? cout << "Eddie" : cout << "Eddie";
    return 0;
}
