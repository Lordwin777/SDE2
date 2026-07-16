#include <iostream>
using namespace std;

int main() {
    int hours;
    int pay;
    cout << "Enter hours worked by the employee : ";
    cin>> hours;
    
    for (int i =0; i <=10; i++){
        if(hours>40){
        pay = (hours-40)*12;
        cout << "Overtime pay : " << pay << endl;
    }
    else{
        cout << "Overtime pay is 0" << endl;
    }
    return 0;
}
}
