#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int maxN = 1e5 + 7;
ll n, v[maxN][4], dp[maxN][4];

ll f(int i, int j) {
    if(i > n) {
        return 0;
    }

    if(dp[i][j] != -1) return dp[i][j];

    ll ans = 0;
    for(int k = 1; k <= 3; k++) {
        if(k == j) continue;
        ans = max(ans, v[i][k] + f(i + 1, k));
    }
    return dp[i][j] = ans;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; i++) {
        dp[i][0] = -1;
        for(int j = 1; j <= 3; j++) {
            cin >> v[i][j];
            dp[i][j] = -1;
        }
    }

    cout << f(1,0) nl;
    return 0;
}