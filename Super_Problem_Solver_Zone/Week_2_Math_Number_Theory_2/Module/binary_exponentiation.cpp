#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n';

const ll MOD = 1e9 + 7;

ll power(ll x, ll n) {
    ll ans = 1;
    while(n) {
        if(n & 1) {
            ans = (ans * x) % MOD;
        }

        n >>= 1;
        x = (x * x) % MOD;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n;
    cin >> x >> n;

    cout << power(x, n) nl;
}