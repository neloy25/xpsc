#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

const int maxN = 1e5 + 7;
vector<int> adj[maxN];
vector<pair<int,int>> cost(maxN);
string s;

void dfs(int root) {
    for(int val : adj[root]) {
        dfs(val);
        cost[root].first += cost[val].first;
        cost[root].second += cost[val].second;
    }
    cost[root].first+= (s[root -1] == 'W');
    cost[root].second+= (s[root -1] == 'B');
}

void solve() {
    ll n;
    cin >> n;
    for(int i = 0; i <= n; i++) {
        adj[i].clear();
        cost[i] = {0,0};
    }
    vector<ll> v(n + 3);
    for(int i = 2; i <= n; i++) {
        cin >> v[i];
        adj[v[i]].push_back(i);
    }
    cin >> s;

    dfs(1);
    int res = 0;
    for(int i = 1; i <= n; i++) {
        if(cost[i].first == cost[i].second) res++;
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