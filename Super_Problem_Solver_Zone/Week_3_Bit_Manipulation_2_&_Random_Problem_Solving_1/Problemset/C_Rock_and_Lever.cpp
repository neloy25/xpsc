#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

int msb(int x) {
    int msb_pos = 31 - __builtin_clz(x);
    return msb_pos;
}

ll sum(ll x) {
    return (x * (x - 1)) / 2;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> bits(33);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        bits[msb(v[i])]++;
    }

    ll ans = 0;
    for(int i = 0; i < 33; i++) {
        ans += sum(bits[i]);
    }

    cout << ans nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}