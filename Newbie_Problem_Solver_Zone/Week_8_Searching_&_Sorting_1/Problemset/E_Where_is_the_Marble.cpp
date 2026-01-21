#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve(int n, int q, int tc) {
    vector<ll> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << "CASE# " << tc << ":\n";

    while(q--) {
        ll x;
        cin >> x;

        auto it = lower_bound(v.begin(), v.end(), x);

        if(it != v.end() && *it == x)
            cout << x << " found at " << (it - v.begin() + 1) << "\n";
        else
            cout << x << " not found\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    int tc = 1;

    while(cin >> n >> q) {
        if(n == 0 && q == 0) break;
        solve(n, q, tc++);
    }

    return 0;
}
