#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
const int inf = 1e6 + 7;
int dp[inf];
int f(int n) {
    if(n <= 0) return 0;
    if(dp[n] != -1) return dp[n];

    string s = to_string(n);
    int ans = inf;
    for(int i = 0; i < s.size(); i++) {
        int d = s[i] - '0';
        if(d == 0) continue;
        ans = min(ans, 1 + f(n - d));
    }
    return dp[n] = ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    memset(dp,-1, sizeof(dp));
    cout << f(n);

    return 0;
}