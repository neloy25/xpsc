#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,q;
    cin >> n >> q;

    map<int,set<int>> mp;
    set<int> s;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.insert(val);
        mp[val] = s;
    }

    while(q--) {
        int a,b;
        cin >> a >> b;

        if(mp[b].count(a)) cout << "YES\n";
        else cout << "NO\n";
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

