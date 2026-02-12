#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl

ll kth_bit_on(ll n, ll k) {
    return ((n >> k) & 1);
}

ll turn_on_kth_bit(ll n, ll k) {
    return (n | (1LL << k));
}

ll turn_off_kth_bit(ll n, ll k) {
    return (n & (~(1LL << k)));
}

void solve() {
    ll a, b, c, d;
    cin >> b >> c >> d;
    a = b;

    for(int k = 0; k <= 62; k++) {
        if(!kth_bit_on(b,k) && kth_bit_on(d,k)) {
            a = turn_on_kth_bit(a,k);
        }
        if(kth_bit_on(c,k) && kth_bit_on(d,k)) {
            a = turn_off_kth_bit(a,k);
        }
    }

    if((a | b) - (a & c) == d) {
        cout << a nl;
    } else {
        cout << -1 nl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}