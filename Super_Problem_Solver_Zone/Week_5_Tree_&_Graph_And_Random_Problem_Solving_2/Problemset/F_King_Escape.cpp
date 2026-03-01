#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"

const int maxN = 1007;
vector<bool> vis[maxN];
int qx,  qy, n;

vector<pair<int,int>> dxy = {{1,0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1,-1}, {-1, 1}};
bool isSafe(int x,int y) {
    if(x <= 0 || x > n || y <= 0 || y > n) return false;

    if(x == qx || y == qy) return false;

    if(abs(x - qx) == abs(y - qy)) return false;
    return true;
}

void dfs(int bx, int by) {
    if(!vis[bx][by]) {
        vis[bx][by] = true;
        for(auto[x,y] : dxy) {
            int dx = bx + x;
            int dy = by + y;
            if(isSafe(dx,dy) && !vis[dx][dy]) {
                dfs(dx,dy);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for(int i = 0; i <= n; i++) {
        vis[i].assign(n + 1, false);
    }

    int bx,by, cx,cy;
    cin >> qx >> qy >> bx >> by >> cx >> cy;

    dfs(bx, by);

    
    if(vis[cx][cy]) yes;
    else no;

    return 0;
}