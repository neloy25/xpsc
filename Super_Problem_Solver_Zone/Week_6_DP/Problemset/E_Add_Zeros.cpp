#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<ll, vector<ll>> adj;
    for(ll i = 0; i < n; i++) {
        ll u = v[i] + i;
        ll v= u + i;
        adj[u].push_back(v);
    }

    set<ll> vis;
    function<void(ll)> dfs = [&](ll u) {
        if(vis.count(u)) return;
        vis.insert(u);
        for(ll val : adj[u]) dfs(val);
    };
    dfs(n);
    cout << *vis.rbegin() nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}