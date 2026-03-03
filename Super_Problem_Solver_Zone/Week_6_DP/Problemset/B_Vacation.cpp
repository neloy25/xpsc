#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<array<int, 3>> v(n); 
    vector<array<int, 3>> dp(n); 

    for(int i = 0; i < n; i++) {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }

    dp[0] = v[0];
    for(int i = 1; i < n; i++) {
        dp[i][0] = v[i][0] + max(dp[i- 1][1], dp[i - 1][2]);
        dp[i][1] = v[i][1] + max(dp[i- 1][0], dp[i - 1][2]);
        dp[i][2] = v[i][2] + max(dp[i- 1][0], dp[i - 1][1]);
    }

    cout << max({dp[n - 1][0],  dp[n -1][1] ,dp[n - 1][2]}) nl;
    return 0;
}