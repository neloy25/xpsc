#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    vector<int> ON(11, n + 1);
    vector<int> OFF(11, 0);

    for(int i = 0; i < n; i++) {
        for(int k = 0; k < 11; k++) {
            if(kth_bit_on(v[i], k)) ON[k] = min(ON[k], i);
            else OFF[k] = max(OFF[k], i);
        }
    }

    for(int k = 0; k < 11; k++) {
        if(ON[k] < OFF[k]) {
            v[ON[k]] = turn_off_kth_bit(v[ON[k]],k);
            v[OFF[k]] = turn_on_kth_bit(v[OFF[k]],k);
        }
    }

    int res = *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());
    cout << res nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}