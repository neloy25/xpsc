#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int maxN = 1e5 + 9, inf = 2 * 1e9;
int n, h[maxN], dp[maxN];

int f(int i) {
    if(i == n) return 0;
    if(dp[i] != -1) return dp[i];

    int ans = inf;
    if(i + 1 <= n) ans = min(ans, abs(h[i] - h[i + 1]) + f(i + 1));
    if(i + 2 <= n) ans = min(ans,abs(h[i] - h[i + 2]) + f(i + 2));

    dp[i] = ans;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 1; i<= n; i++) {
        dp[i] = -1;
        cin >> h[i];
    }
    cout << f(1) nl;
    return 0;
}