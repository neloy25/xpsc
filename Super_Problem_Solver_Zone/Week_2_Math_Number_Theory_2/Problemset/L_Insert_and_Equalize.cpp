#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll mx = *max_element(a.begin(), a.end());

    ll g = 0;
    for (int i = 0; i < n; i++) {
        g = __gcd(g, mx - a[i]);  
    }

    if(g == 0) {
        cout << 1 nl;
        return;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (mx - a[i]) / g;
    }

    set<ll> s(a.begin(),a.end());
    ll x = mx - g;
    while(s.count(x)) {
        x-=g;
    }

    ans += (mx - x) / g;
    cout << ans nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
