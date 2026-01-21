#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &x : v) cin >> x;


    if(n < 4){
        cout << -1 << endl;
        return;
    }

    int l = 0, r = n - 1;
    int mn = 1,mx = n;

    while(l < r) {
        if(v[l] == mn) {
            mn++;
            l++;
        } else if(v[l] == mx) {
            mx--;
            l++;
        } else if(v[r] == mn) {
            mn++;
            r--;
        } else if(v[r] == mx) {
            mx--;
            r--;
        } else {
            cout << l + 1 << " " << r + 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

