#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int maxN = 1e5+7;
vector<int> g[maxN];
int len[maxN];
bool vis[maxN];


void dfs(int root) {
    vis[root] = true;
    for(int val : g[root]) {
        if(!vis[val]) {
            dfs(val);
            len[root] += len[val];
        }
    }
    len[root]++;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i <= n; i++) {
        g[i].clear();
        len[i] = 0;
        vis[i] = false;
    }


    for(int i = 1; i < n; i++) {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    if(n & 1) {
        cout << -1 nl;
        return 0;
    }

    dfs(1);

    int res = 0;
    for(int i = 1; i <= n; i++) {
        if(len[i] != 0 && len[i] % 2 == 0) res++;
    }
    cout << res - 1 nl;
    return 0;
}