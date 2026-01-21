#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    map<ll,ll> mp;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    if(mp.size() >= 2) cout << 2 << endl;
    else cout << - 1 << endl;
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

