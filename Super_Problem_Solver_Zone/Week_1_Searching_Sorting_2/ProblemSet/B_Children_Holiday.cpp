#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool calcRes(ll m, const vector<array<ll, 3>> &v, ll x) {
    ll balloon = 0;
    for (auto [t, z, y] : v) {
        ll cycle = t * z + y;
        ll full = x / cycle;
        ll rem = x % cycle;
        ll b = full * z + min(z, rem / t);
        balloon += b;
        if (balloon >= m) return true;
    }
    return false;
}

ll binarySearch(ll m, const vector<array<ll, 3>> &v) {
    ll l = 0, r = 1e10;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (!calcRes(m, v, mid)) l = mid + 1;
        else r = mid - 1;
    }
    return r + 1;
}

void solve() {
    ll m, n;
    cin >> m >> n;

    vector<array<ll, 3>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }

    ll x = binarySearch(m, v);
    cout << x << "\n";

    ll balloon = 0;
    int j = 0;

    for (auto [t, z, y] : v) {
        ll cycle = t * z + y;
        ll full = x / cycle;
        ll rem = x % cycle;
        ll b = full * z + min(z, rem / t);

        if (balloon + b >= m) {
            cout << (m - balloon) << " ";
            j++;
            break;
        }

        balloon += b;
        cout << b << " ";
        j++;
    }

    while (j < n) {
        cout << 0 << " ";
        j++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
