#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> feq(31,0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 31; j++) {
            if(v[i] & 1) feq[j]++;
            v[i] = v[i] >> 1;
        }
    }

    ll ans = 0;
    for(ll i = 0; i < 31; i++) {
        if(feq[i] == n) ans += (1 << i);
    }

    cout<< ans << endl;
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

