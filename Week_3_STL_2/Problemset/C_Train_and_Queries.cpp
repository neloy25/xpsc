#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,q;
    cin >> n >> q;
    vector<int> v (n);
    for(auto &x : v) cin >> x;
    map<int,pair<int,int>> mp;


    for(int i = 0; i < n;i++) {
        if(mp.count(v[i])) {
            mp[v[i]] = {mp[v[i]].first,i + 1};
        } else {
            mp[v[i]] = {i + 1,i + 1};
        }
    }

    for(int i = 0; i < q; i++) {
        int a,b;
        cin >> a >> b;

        if(!mp.count(a) || !mp.count(b)) {
            cout << "NO\n";
        } else if(mp[a].first > mp[b].second) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

