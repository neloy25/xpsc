#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

ll kth_bit_on(ll n, ll k) {
    return ((n >> k) & 1);
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> bits(31, 0);
    for(int i = 0; i < n; i++) {
        for(int k = 0; k < 31; k++) {
            if(kth_bit_on(v[i], k)) bits[k]++;
        }
    }

    vector<int> res;
    for(int k = 1; k <= n; k++) {
        bool flag = true;
        for(int i = 0; i < 31; i++) {
            if(bits[i] % k != 0) {
                flag = false;
            }
        }

        if(flag) res.push_back(k);
    }

    for(int val : res) {
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

    return 0;
}