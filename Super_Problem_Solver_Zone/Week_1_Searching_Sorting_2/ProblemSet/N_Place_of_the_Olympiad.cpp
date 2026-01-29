#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,m, k;
    cin >> n >> m >> k;
    
    auto ok = [&](ll x)
    {
        ll res = ((m / (x + 1)) * x + m % (x + 1)) * n;
        return (res >= k);
    };

    ll l = 1, r = m, ans = 0, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }       
    }
    cout << ans << endl;
    // cout << ok(2) << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}