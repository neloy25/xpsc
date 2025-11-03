#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> v(3, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        int val;
        cin >> val;
        val--;
        for (int j = 0; j < 3; j++) v[j][i] = v[j][i - 1];
        v[val][i]++;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        int len = r - l + 1;
        if (len % 2 == 1) {
            cout << "No\n";
            continue;
        }

        int c1 = v[0][r] - v[0][l - 1];
        int c2 = v[1][r] - v[1][l - 1];
        int c3 = v[2][r] - v[2][l - 1];

        int mx = max({c1, c2, c3});
        if (mx > len / 2) cout << "No\n";
        else if(c1 == c2 && c2 == c3) cout << "No\n";
        else cout << "Yes\n";
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
