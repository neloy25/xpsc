#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;

    auto ok = [&](ll x) {
        return x * (x - 1) / 2 <= n;
    };

    ll l = 0, r = 3 * 1e9, ans = 0, mid;
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

    ll used = (ans * (ans - 1)) / 2;
    ll rem = n - used;
    cout << ans + rem << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}