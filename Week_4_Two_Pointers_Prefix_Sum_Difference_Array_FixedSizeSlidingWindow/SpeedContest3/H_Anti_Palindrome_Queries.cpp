#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> pref1(n + 1, 0);
    vector<int> pref2(n + 1, 0);
    vector<int> pref3(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pref1[i] = pref1[i - 1];
        pref2[i] = pref2[i - 1];
        pref3[i] = pref3[i - 1];

        if (x == 1) pref1[i]++;
        else if (x == 2) pref2[i]++;
        else pref3[i]++;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        int len = r - l + 1;

        if (len % 2 == 1) {
            cout << "No\n";
            continue;
        }

        int k = len / 2;
        int c1 = pref1[r] - pref1[l - 1];
        int c2 = pref2[r] - pref2[l - 1];
        int c3 = pref3[r] - pref3[l - 1];

        int mx = max({c1, c2, c3});

        if (mx > k) {
            cout << "No\n";
            continue;
        }


        if (c1 == k || c2 == k || c3 == k || c1 == 0 || c2 == 0 || c3 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
