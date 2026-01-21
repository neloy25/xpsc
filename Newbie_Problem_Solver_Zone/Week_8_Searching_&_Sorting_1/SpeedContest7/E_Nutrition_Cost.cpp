#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,c;
    cin >> n >> c;
    vector<ll> a(n),b(n);
    map<ll,ll> mp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for(int i = 0; i < n; i++) {
        if(mp.count(a[i])) mp[a[i]] = min(mp[a[i]],b[i]);
        else mp[a[i]] = b[i];
    }

    ll res = 0;
    for(auto [key, val] : mp) {
        if(c > val) res+= (c - val); 
    }

    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

