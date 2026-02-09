#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

const ll MOD = 1e9 + 7;

void solve() {
    ll a,b;
    cin >> a >> b;
    vector<bool> bn(34, false);
    for(int i = 0; i <= 33; i++) {
        if(b & 1) bn[i] = true;
        b = b >> 1;
    }

    ll res = 1;
    for(int i = 0; i < 33;i++) {
        if(bn[i]) res = (res * a)% MOD; 
        a = ((a % MOD) * (a % MOD)) % MOD;
    }
    cout << res nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}