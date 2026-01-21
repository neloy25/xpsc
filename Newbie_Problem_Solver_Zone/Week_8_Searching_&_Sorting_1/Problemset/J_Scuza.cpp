#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,q;
    cin >> n >> q;
    vector<ll> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    

    vector<ll> pre(n + 1);
    for(int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + v[i - 1];
    }

    for(int i = 1; i < n; i++) {
        v[i] = max(v[i],v[i - 1]);
    }

    
    while(q--) {
        ll x;
        cin >> x;
        ll idx = upper_bound(v.begin(),v.end(),x) - v.begin();
        cout << pre[idx] << " ";
    }
    cout << endl;

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

