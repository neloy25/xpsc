#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
const int inf = 1e9;

void solve() {
    string a, b, c;
    cin >> a >> b >> c;

    int n= a.size(), m = b.size();
    int dp[n + 1][m + 1];
    fill(&dp[0][0], &dp[0][0] + (n + 1) * (m + 1), inf);
    dp[0][0] = 0;

    for (int i = 0; i < n; i++) {
        dp[i + 1][0] = dp[i][0] + (a[i] != c[i]);
    }
    for (int j = 0; j < m; j++) {
        dp[0][j + 1] = dp[0][j] + (b[j] != c[j]);
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = min(dp[i - 1][j] + (a[i - 1] != c[i + j - 1]),
                                dp[i][j - 1] + (b[j - 1] != c[i + j - 1]));
        }
    }
    cout << dp[n][m] nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}