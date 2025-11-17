#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;

    int a = 1,b = 0;

    int chk = v[0];
    if(v[1] != chk) {
        if(v[2] == chk) cout << 2 << endl;
        else cout << 1<< endl;

        return;
    }

    for(int i = 2; i < n; i++) {
        if(v[i] != chk) cout << i + 1 << endl;
    }
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

