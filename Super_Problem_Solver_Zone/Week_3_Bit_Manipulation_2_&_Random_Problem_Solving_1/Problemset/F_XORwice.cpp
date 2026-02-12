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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        ll a, b;
        ll res = 0;
        cin >> a >> b;

        for(int i = 0; i< 32; i++) {
            if(kth_bit_on(a,i) && kth_bit_on(b,i)) {
                res = turn_on_kth_bit(res,i);
            }
        }

        cout << (a ^ res) + ( b ^ res) nl;
    }
    return 0;
}
