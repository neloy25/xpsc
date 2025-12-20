#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,l,r;
    cin >> n >> l >> r;
    vector<ll> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    ll res = 0;

    for(int i = 0; i < n - 1; i++) {
        res+= upper_bound(v.begin() + i + 1, v.end(),r - v[i]) - lower_bound(v.begin() + i + 1, v.end(),l - v[i]);
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

