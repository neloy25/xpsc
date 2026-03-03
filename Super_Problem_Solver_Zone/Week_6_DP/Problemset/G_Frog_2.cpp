#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<ll> dp(n , LLONG_MAX);
    dp[0] = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= k; j++) {
            if(i - j >= 0) {
                ll opt = dp[i - j] + abs(v[i] - v[i - j]);
                dp[i] = min(dp[i], opt);
            } else {
                break;
            }
        }
    }
    cout << dp[n - 1] nl;
    return 0;
}