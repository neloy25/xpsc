#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
const int N = 2 * 1e5 + 7, inf = 1e6;
int dp[N], v[N];
int n;
int f(int i) {
    if(i >= n) return 0;
    if(dp[i] != -1) return dp[i];
    int ans = inf;
    ans = min(ans,v[i] + f(i + 2));
    ans = min(ans,v[i] + f(i + 3));
    if(i + 1 < n) {
        ans = min(ans, v[i] + v[i + 1] + f(i + 3));
        ans = min(ans, v[i] + v[i + 1] + f(i + 4));
    }

    return dp[i] = ans;
}

void solve() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        dp[i] = -1;
    }

    cout << f(0) nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}