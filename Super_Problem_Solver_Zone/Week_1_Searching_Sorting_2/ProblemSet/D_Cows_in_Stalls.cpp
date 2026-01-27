#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for(auto &x : v) cin >> x;

    auto ok = [&](ll dist)
    {
        ll tmp = k - 1;
        ll st = v[0];
        
        while(true) {
            // cout << st + dist << endl;
            auto it = lower_bound( v.begin(),v.end(),st + dist);
            if(it == v.end()) break;
            st = *it;
            tmp--;
            if(tmp <= 0) return true;
        }
        if(tmp <= 0) return true;
        else return false;
    };

    ll l = 0, r = v[n - 1] + 1, ans = 0, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (!ok(mid))
        {
            r = mid - 1;
        }
        else{
            ans = mid;
            l = mid + 1;
        }       
    }
    cout << ans << endl;

    // cout << ok(9);

    return 0;
}