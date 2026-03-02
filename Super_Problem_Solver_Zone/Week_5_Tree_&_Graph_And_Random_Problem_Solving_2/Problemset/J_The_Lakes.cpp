#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
const ll maxN = 1007;

int n, m;
ll grid[maxN][maxN];
bool vis[maxN][maxN];
vector<pair<int,int>> dxy = {{1,0}, {-1,0}, {0, 1}, {0, -1}};

bool isVald(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

ll dfs(int i, int j) {
    // cout << i << " " << j nl;
    vis[i][j] = true;
    ll sum = grid[i][j];

    for(auto[dx,dy] : dxy) {
        int cx = i + dx, cy = j + dy;
        if(isVald(cx, cy) && !vis[cx][cy] && grid[cx][cy] != 0) {
            sum+= dfs(cx,cy);
        }
    }
    return sum;
}

void solve() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
            vis[i][j] = false;
        }
    }

    ll res = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] != 0) {
                res = max(res, dfs(i,j));
            }
        }
    }
    cout << res nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}