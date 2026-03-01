#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int maxN = 1e5 + 7;
vector<int> g[maxN];
int col[maxN];
ll blue = 0, red = 0;

void dfs(int root) {
    for(int val : g[root]) {
        if(col[val] == -1) {
            if(col[root] == 1) {
                col[val] = 0;
                red++;
            }
            else {
                col[val] = 1;
                blue++;
            }
            dfs(val);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int n;
    cin >> n;

    for(int i = 0; i<= n; i++) {
        g[i].clear();
        col[i] = -1;
    }

    for(int i = 1; i < n; i++) {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    blue++;
    col[1] = 1;
    dfs(1);

    ll res = 0;
    for(int i = 1; i <= n; i++) {
        if(col[i] == 1) {
            res+= (red - (ll)g[i].size());
        }
    }
    cout << res;
    return 0;
}