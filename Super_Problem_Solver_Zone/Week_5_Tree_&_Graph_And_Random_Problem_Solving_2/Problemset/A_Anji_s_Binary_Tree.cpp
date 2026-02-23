#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define vll vector<ll>
#define vvl vector<vll>

void bfs(string &s, vvl &adj, vll &par,vll &val, int n) {
    queue<ll> q;
    q.push(1);
    val[1] = 0;

    while(!q.empty()) {
        ll src = q.front();
        // cout << src << " ";
        q.pop();

        ll left = adj[src][0], right = adj[src][1];
        // cout << s[src - 1] nl;
        if(left != 0) {
            val[left] = val[src] + (s[src - 1] != 'L');
            q.push(left);
        }

        if(right != 0) {
            val[right] = val[src] + (s[src - 1] != 'R');
            q.push(right);
        }
    }
}

void solve() {
    int n; string s;
    cin >> n >> s;

    vvl adj(n + 1, vll(2));
    vll par(n + 1);
    vll val(n + 1);
    for(int i = 1; i <= n; i++) {
        int u, v;
        cin >> u >> v;

        adj[i][0] = u;
        adj[i][1] = v;
    }

    bfs(s,adj,par,val, n);
    ll res = LLONG_MAX;
    for(int i = 1; i <= n; i++) {
        // cout << val[i] << " ";
        if(!adj[i][0] && !adj[i][1]) {
            res = min(res, val[i]);
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