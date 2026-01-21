#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;

    vector<int> v(n);
    int total = 0;
    for(int &x : v){
        cin >> x;
        total += x;
    }

    if(total < s){
        cout << -1 << "\n";
        return;
    }
    if(total == s){
        cout << 0 << "\n";
        return;
    }

    int l = 0, sum = 0, res = 0;

    for(int r = 0; r < n; r++){
        sum += v[r];
        while(sum > s){
            sum -= v[l];
            l++;
        }
        if(sum == s){
            res = max(res, r - l + 1);
        }
    }

    cout << (n - res) << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}
