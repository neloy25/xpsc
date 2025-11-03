#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, m, q;
        cin >> n >> m >> q;

        vector<ll> teachers(m);
        for (ll i = 0; i < m; i++) cin >> teachers[i];
        sort(teachers.begin(), teachers.end());

        while (q--) {
            ll val;
            cin >> val;

            if (binary_search(teachers.begin(), teachers.end(), val)) {
                cout << 0 << "\n";
                continue;
            }

            auto it = lower_bound(teachers.begin(), teachers.end(), val);
            ll right = (it == teachers.end() ? -1 : *it);
            ll left  = (it == teachers.begin() ? -1 : *(--it));

            if (left == -1) {
                cout << right - 1 << "\n";
            } else if (right == -1) {
                cout << n - left << "\n";
            } else {
                ll mid = (left + right) / 2;
                cout << mid - left << "\n";
            }
        }
    }
    return 0;
}
