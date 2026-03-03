#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
const int maxN = 2 * 1e5 + 7;
vector<int> g[maxN];
int cat[maxN];
bool vis[maxN];
pair<int, int> cats[maxN];

void bfs(int root) {
    queue<int> q;
    q.push(root);
    vis[root] = true;

    cats[root] = {cat[root], cat[root]};
    while(!q.empty()) {
        int par = q.front();
        q.pop();

        for(int child : g[par]) {
            if(!vis[child]) {
                q.push(child);
                vis[child] = true;
                if(cat[child] == 0) {
                    cats[child].second = 0;
                }
                else cats[child].second = cats[par].second + cat[child];
                cats[child].first = max(cats[par].first, cats[child].second);
            }
        }
    }
}


void solve() {
    int n,k;
    cin >> n >> k;
    for(int i = 0; i <= n; i++) {
        g[i].clear();
        vis[i] = false;
    }

    for(int i = 1; i <= n; i++) {
        cin >> cat[i];
    }

    for(int i =1 ; i < n; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(1);

    int ans = 0;
    for(int i = 2; i <= n; i++) {
        auto [x,y] = cats[i];
        // cout << x << " " << y nl;
        if(x <= k && g[i].size() == 1) ans++;
    }
    cout << ans nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}