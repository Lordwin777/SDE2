#include <iostream>
using namespace std;

string winner(){
    
}

void solve(){
    int yash;
    //int start;
    int total; end;
    cin>> start>>end>>total;
    
    while(total > 1){
        cout << "Enter your number : ";
        cin >> yash;
        total -= yash;
        int rem = total%(1+end);
        if(rem>1){
            total -= (rem-1);
        }
        
        if(rem == 0){
            total -= end;
        }
        
        if()
        
    }
    
}



int main(){
    solve();
    return 0;
}
