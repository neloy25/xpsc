#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
    ll n, c ,d;
    cin >> n >> c >> d;

    vector<ll> v(n);
    for(auto &x : v) cin >> x;

    sort(v.begin(),v.end(),greater<int>());

    ll sm = 0;
    for(int i = 0; i < d; i++) {
        if(i < n) sm+=v[i];
    }
    ll mx = v[0];
    if(sm >= c) {
        cout << "Infinity\n";
        return;
    }
    if(mx * d < c) {
        cout << "Impossible\n";
        return;
    }
    // cout << 1 << endl;
    auto ok = [&](ll k) {
        vector<ll> feq(d, 0);
        for(int i = 0; i < d; i++) {
            int idx = i % (k + 1);
            // cout << idx << " ";
            if(idx >= n) continue;
            feq[i] = v[idx];
        }
        ll sum = 0;
        for(int i = 0; i < d; i++) {
            // cout << feq[i] << " ";
            sum += feq[i];
            if(sum >= c) return true;
        }   
        // if(sum >= c) return true;
        return false;
    };
    // cout << ok(2);
    ll l = 0, r = d + 2, ans = 0, mid;
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
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}