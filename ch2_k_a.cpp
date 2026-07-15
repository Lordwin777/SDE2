#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character : " << endl;
    cin>>ch;
    (ch>=91&&ch<=122)? cout << "character is lower case" : cout << "Character is not lower case";
}
