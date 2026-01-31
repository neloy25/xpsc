#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<pair<ll,ll>> v(n);
    
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;

        int mx = 0;
        for(int j = 0; j < m; j++) {
            int a; cin >> a;
            mx = max(mx, a + 1 - j);
        }
        v[i] = {mx, m};
    }
    sort(v.begin(),v.end());
    
    auto ok = [&](ll h)
    {
        for(auto [health, regen] : v) {
            if(h < health) return false;
            h+= regen;
        }
        return true;
    };

    ll l = 0, r = v[n - 1].first + 5, ans = 0, mid;
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