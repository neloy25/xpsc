#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k, n;
    cin >> k >> n;

    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    ll sum = 0;
    for (ll v : a) sum += v;

    auto ok = [&](ll x)
    {
        ll stu = 0;
        for (int i = 0; i < n; i++) {
            stu += min(x, a[i]);
            if (stu >= x * k) return true;
        }
        return false;
    };

    ll l = 0, r = sum / k, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << '\n';
    return 0;
}
