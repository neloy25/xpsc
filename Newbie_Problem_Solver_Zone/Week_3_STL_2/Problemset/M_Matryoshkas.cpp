#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    map<ll,ll> mp;
    ll n;
    cin >> n;

    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    sort(v.begin(),v.end());

    ll res = 0;
    for(int i = 0; i < n; i++) {
        if(mp.count(v[i] + 1)) {
            mp[v[i] + 1]--;
            if(mp[v[i] + 1] == 0) mp.erase(v[i] + 1);
        } else {
            res++;
        }
    }
    cout << res << endl;
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

