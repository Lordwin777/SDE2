#include <bits/stdc++.h>
using namespace std;

// string winner() {
//     // 
// }

void solve() {
    string name;
    int val;
    int total, end; // 1 -> end
    cout<<"Enter your name.\n";
    cin>>name;
    cout<<"Enter the max value and total: ";
    cin>>end>>total;
    
    bool computer_wins = false;
    while(total > 1) {
        cout<<name<<", enter your number: ";
        cin>>val;
        total -= val;
        cout<<name<<" decreased "<<val<<", Total: "<<total<<"\n";
        // computer turn
        if(total==1){
            break;
        }
        int rem = total % (1 + end), dec;
        if (rem > 1) { dec = (rem - 1); }
        else if (rem == 0) { dec = end; }
        else { dec = (1 + end)/2; }
        total -= dec;
        cout<<"Computer decreased "<<dec<<", Total: "<<total<<"\n";
        
        if(total==1){
            computer_wins = true;
        }
    }
    // winning condition
    // if computer is the second last and other person can only have 1 as number
    
    if (computer_wins){
        cout << name << ", Check Mate!" << endl;
    } else {
        cout << "You win!" << endl;
    }
    

}

int main()
{
    solve();
    return 0;
}
