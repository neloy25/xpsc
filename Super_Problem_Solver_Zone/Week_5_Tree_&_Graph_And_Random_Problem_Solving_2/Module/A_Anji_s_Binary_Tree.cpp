#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int maxN = 3e5 + 9;
vector<int> g[maxN], cost(maxN);
string s;

void dfs(int u) {
    if(g[u][0] != 0) {
        int v = g[u][0];

        if(s[u - 1] == 'L')
            cost[v] = cost[u];
        else
            cost[v] = cost[u] + 1;

        dfs(v);
    }

    if(g[u][1] != 0) {
        int v = g[u][1];

        if(s[u - 1] == 'R')
            cost[v] = cost[u];
        else
            cost[v] = cost[u] + 1;

        dfs(v);
    }
}

void solve() {
    int n;
    cin >> n >> s;

    for(int i = 0; i <= n; i++) {
        g[i].clear();
        cost[i] = 0;
    }

    for(int i = 1; i <= n; i++) {
        int l, r;
        cin >> l >> r;
        g[i].push_back(l);
        g[i].push_back(r);
    }

    dfs(1);

    int ans = INT_MAX;
    for(int i = 1; i <= n; i++) {
        if(g[i][0] == 0 && g[i][1] == 0) {
            ans = min(ans, cost[i]);
        }
    }

    cout << ans nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}