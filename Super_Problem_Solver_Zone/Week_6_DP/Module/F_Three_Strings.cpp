#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int N = 1e3 + 7, inf = 1e9;
int dp[N][N];
string a,b,c;
int n,m,l;

int f(int i,int j) {
    int k = i + j;

    if(k >= l) return 0;

    if(dp[i][j] != -1) return dp[i][j];

    int ans = inf;

    if(i < n) {
        if(a[i] == c[k]) ans = min(ans, f(i+1,j));
        else ans = min(ans, 1 + f(i+1,j));
    }

    if(j < m) {
        if(b[j] == c[k]) ans = min(ans, f(i,j+1));
        else ans = min(ans, 1 + f(i,j+1));
    }

    return dp[i][j] = ans;
}

void solve() {
    cin >> a >> b >> c;

    n = a.size();
    m = b.size();
    l = c.size();

    memset(dp,-1,sizeof(dp));

    cout << f(0,0) nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) solve();
}