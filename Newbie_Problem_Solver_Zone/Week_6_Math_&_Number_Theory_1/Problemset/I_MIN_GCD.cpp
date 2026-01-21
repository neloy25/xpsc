#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void solve() {
    ll n;
    cin >> n;

    vector<ll> v(n);
    ll mn = LLONG_MAX;
    for(ll i = 0; i < n; i++) {
        cin >> v[i];
        mn = min(mn,v[i]);
    }

    ll g = 0, cnt = 0;
    for(ll i = 0; i < n;i++) {
        if(v[i] != mn && v[i] % mn == 0) g = gcd(g,v[i]);
        if(v[i] == mn) cnt++;
    }

    // cout << cnt << " " << g << endl;
    if(cnt >= 2) cout << "Yes\n";
    else if(g == mn) cout << "Yes\n";
    else cout << "No\n";

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

