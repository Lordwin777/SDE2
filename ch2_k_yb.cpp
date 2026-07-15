#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter the year : ";
    cin>>year;
    (year%4==0 && year%100!=0)? cout << "It is a leap year" : (year%400==0)? cout << "It is a leap year" : cout << "Not a leap year";
}
