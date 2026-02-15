#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x;
    cin >> x;
    
    vector<int> bits(32, 0);

    int i = 0;
    while(x != 0) {
        if(x & 1) bits[i] = 1;
        i++;
        x>>= 1;
    }

    vector<int> res(32, 0);
    i = 0;
    while(i < 32) {
        int start = i;
        while(bits[i] == 1) {
            i++;
        }
        
        if(i > start + 1) {
            res[i] = 1;
            res[start] = -1;
            bits[i] = 1;
        } else {
            if(start == i - 1) res[start] = 1;
            i++;
        }
        
        // cout << start << " " << i << endl;
    }
    
    int n = 0;
    for(int i = 0; i < 32; i++) {
        if(res[i] == 1) n = i;
    }
    
    cout << n + 1 << endl;
    
    for(int i = 0; i <= n; i++) {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}