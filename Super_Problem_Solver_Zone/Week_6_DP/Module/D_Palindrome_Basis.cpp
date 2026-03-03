#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int maxN = 4 * 1e4, N = 500, M = 4e4+ 9, MOD = 1e9 + 7;
ll dp[N][M];
vector<int> palin;
void prec() {
    for(int i = 1; i <= maxN; i++) {
        string s = to_string(i), t = s;
        reverse(s.begin(), s.end());
        if(s == t) palin.push_back(i);
    }
}
ll f(int i, int sum) {
    if(sum == 0) return 1;         
    if(i >= palin.size()) return 0; 

    if(dp[i][sum] != -1) return dp[i][sum];

    ll ans = 0;

    if(palin[i] <= sum) {
        ans = (ans + f(i, sum - palin[i])) % MOD;   
    }
    ans = (ans + f(i + 1, sum)) % MOD;              

    return dp[i][sum] = ans;
}

void solve() {
    int targetSum;
    cin >> targetSum;
    cout << f(0,targetSum) nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    prec();
    memset(dp,-1, sizeof(dp));
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}