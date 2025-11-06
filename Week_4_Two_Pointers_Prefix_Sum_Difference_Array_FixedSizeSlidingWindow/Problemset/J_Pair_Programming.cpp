#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    int i = 0, j = 0;
    vector<int> res;

    while (i < n || j < m) {
        bool moved = false;

        if (i < n && a[i] == 0) {
            res.push_back(0);
            k++;
            i++;
            moved = true;
        } else if (j < m && b[j] == 0) {
            res.push_back(0);
            k++;
            j++;
            moved = true;
        } else if (i < n && a[i] <= k) {
            res.push_back(a[i]);
            i++;
            moved = true;
        } else if (j < m && b[j] <= k) {
            res.push_back(b[j]);
            j++;
            moved = true;
        }

        if (!moved) {
            cout << -1 << '\n';
            return;
        }
    }

    for (int x : res) cout << x << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
}
