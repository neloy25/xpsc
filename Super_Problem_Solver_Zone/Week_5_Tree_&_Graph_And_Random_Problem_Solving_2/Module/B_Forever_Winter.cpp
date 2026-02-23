#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n, m;
    cin >> n >> m;
    map<int, set<int>> g;
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        g[u].insert(v);
        g[v].insert(u);
    }

    int leaf = -1;
    for(int i = 1; i <= n; i++) {
        if(g[i].size() == 1) {
            leaf = i;
            break;
        }
    }

    // cout << leaf << endl;
    int tmp = *g[leaf].begin();
    int y = g[tmp].size() - 1;
    int x = 1;
    for(int val : g[tmp]) {
        x = max(x, (int)g[val].size());
    }
    cout << x << " " << y << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}