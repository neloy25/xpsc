#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
const int maxN = 2 * 1e5 + 7;
vector<int> g[maxN];
ll len[maxN];
bool vis[maxN];

ll dfs(int root) {
    vis[root] = true;
    // cout << root << " " << g[root].size() nl;
    ll sum = (g[root].size() == 1 && root != 1);
    for(int val : g[root]) {
        if(!vis[val]) {
            sum += dfs(val);
        }
    }
    len[root] = sum;
    return sum;
}

void solve() {
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++) {
        g[i].clear();
        vis[i] = false;
        len[i] = 0;
    }

    for(int i =1 ; i < n; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    

    int q;
    cin >> q;
    while(q--) {
        int x, y;
        cin >> x >> y;
        cout << len[x] * len[y] nl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}