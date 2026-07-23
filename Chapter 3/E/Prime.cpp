#include <iostream>
using namespace std;

bool is_Prime(int n){
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void solve(){
    int i;
    int count = 0;
    for(i = 2; i < 300; i++){
        if(is_Prime(i)){
            count++;
        }
    }
    cout << "Total count : " << count << endl;
}

int main(){
    solve();
    return 0;
}
