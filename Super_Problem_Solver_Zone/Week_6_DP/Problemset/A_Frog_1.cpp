#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<ll> dp(n);
    dp[0] = 0;
    dp[1] = abs(v[1] - v[0]);
    for(int i = 2; i < n; i++) {
        ll opt1 = dp[i - 1] + abs(v[i] - v[i-1]);
        ll opt2 = dp[i - 2] + abs(v[i] - v[i-2]);
        dp[i] = min(opt1, opt2);
    }

    cout << dp[n - 1] nl;
    return 0;
}