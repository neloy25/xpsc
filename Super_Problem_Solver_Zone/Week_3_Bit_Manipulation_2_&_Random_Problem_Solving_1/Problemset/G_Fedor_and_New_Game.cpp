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

    ll n,m,k;
    cin >> n >> m >> k;

    vector<ll> army(m + 1);
    for(int i = 0; i <= m; i++) {
        cin >> army[i];
    }

    ll chk = army[m],res = 0;

    for(int i = 0; i < m; i++) {
        ll dif = k;
        for(int j = 0; j < n; j++) {
            if(kth_bit_on(army[i],j) != kth_bit_on(chk,j)) dif--;
        }

        if(dif >= 0) res++;
    }
    cout <<res nl;
    return 0;
}