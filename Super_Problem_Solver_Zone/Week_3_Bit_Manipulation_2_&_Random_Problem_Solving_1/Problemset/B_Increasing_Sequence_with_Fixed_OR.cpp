#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl

void solve() {
    ll n;
    cin >> n;

    vector<ll> res;
    res.push_back(n);
    for(ll k = 0; k < 63; k++) {
        if((1LL << k) > n) break;
        if(n & (ll)(1LL << k)) {
            ll val = (n ^ (1LL << k));
            if(val != 0) res.push_back(val);
            // cout << k << " " << (n ^ (1 << k)) nl;
        }
    }
    cout << res.size() nl;
    reverse(res.begin(), res.end());
    for(ll val : res) {
        cout << val << " ";
    }
    cout nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}