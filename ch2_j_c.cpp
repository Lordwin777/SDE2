#include <iostream>
using namespace std;

int main() {
    float sal;
    cout << "Enter the salary : ";
    cin>> sal;
    (sal>40000 && sal>25000)? cout << "Manager \n" : (sal<25000 && sal>15000)? cout << "Accountant \n" : cout << "Clerk \n";
}
