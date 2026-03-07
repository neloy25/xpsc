#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;
const int N = 2100, MOD = 1e9 + 7;
ll fact[N], inv_fact[N];

ll bin_expo(ll a, ll b) {
    if(b == 0) return 1;

    ll x = bin_expo(a, b / 2);
    x = (x * x) % MOD;

    if(b & 1) x = (x * a) % MOD;

    return x;
}

void precompute() {
    fact[0] = 1;

    for(int i = 1; i < N; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    inv_fact[N-1] = bin_expo(fact[N-1], MOD - 2);

    for(int i = N-2; i >= 0; i--) {
        inv_fact[i] = inv_fact[i+1] * (i+1) % MOD;
    }
}

ll ncr(int n, int r) {
    if(r > n) return 0;

    return fact[n] * inv_fact[r] % MOD * inv_fact[n-r] % MOD;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();
    int n;
    cin >> n;

    ll res = 0;
    ll x = n - 3;
    int i = 1;
    while(x >= 0) {
        res = (res + ncr(x + i - 1, i - 1)) % MOD;
        x-=3;
        i++;
    }
    cout << res nl;
}