#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl

void solve() {
    ll a,b,l;
    cin >> a >> b >> l;

    set<int> k;
    ll x = 1;
    while(x <= l && l % x == 0) {
        ll val = l / x;
        ll y = 1;
        // cout << "1: " <<x << " " << val nl;
        while(y <= l && val % y == 0) {
            // cout << x << " " << y nl;
            k.insert(val / y);
            y *= b;
        }
        // cout << x nl;

        x *= a;
    }

    cout << k.size() nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}