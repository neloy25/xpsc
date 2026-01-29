#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,k;
    cin >> n >> k;

    auto sum = [&](ll i) {
        return k * i + (i * ( i - 1)) / 2;
    };

    ll total = sum(n);
    ll l = 0, r = 3 * 1e9, ans = 0, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (sum(mid) * 2 >= total)
        {
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }       
    }

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (sum(mid) * 2 > total)
        {
            r = mid - 1;
        }
        else{
            ans = mid;
            l = mid + 1;
        }       
    }

    // cout << total << endl;
    // cout << sum(13) << endl;
    // cout << 2 * sum(ans) - total << " ";
    // cout << (total - 2 * sum(ans - 1))  << endl;
    ll res = min(abs(2 * sum(ans) - total), abs(total - 2 * sum(ans - 1)));
    cout << res << endl;

    // ll used = (ans * (ans - 1)) / 2;
    // ll rem = n - used;
    // cout << ans + rem << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}