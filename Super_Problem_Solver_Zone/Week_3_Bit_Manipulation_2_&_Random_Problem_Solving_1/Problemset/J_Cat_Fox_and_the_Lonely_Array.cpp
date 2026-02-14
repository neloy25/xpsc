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

    auto ok = [&] (int k) {
        vector<ll> bits(20, n);
        int check = 0;
        for(int i = 0; i < k; i++) {
            for(int j = 0; j < 20; j++){
                if(kth_bit_on(v[i], j)) bits[j] = i;
            }
            check |= v[i];
        }
        // cout << check nl;
        int a = check;
        for(int i = k; i < n; i++) {
            for(int j = 0; j < 20; j++){
                if(bits[j] <= (i - k)) a = turn_off_kth_bit(a, j);
            }

            a |= v[i];
            // cout << a nl;
            if(a != check) return false;

            for(int j = 0; j < 20; j++){
                if(kth_bit_on(v[i], j)) bits[j] = i;
            }
        }
        return true;
    };

    int ans = n;
    int l = 1, r = n;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(ok(mid)) {
            r = mid - 1;
            ans = mid;
        } else {
            l = mid + 1;
        }
    }

    cout << ans nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}