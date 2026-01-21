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
    ll odd = 0, even = 0;
    for(ll i = 0; i < n; i++) {
        cin >> v[i];
        if(i % 2) odd = gcd(odd,v[i]);
        else even = gcd(even,v[i]);
    }

    if(odd != 0) {
        for(ll i = 0; i < n; i+=2) {
            if(v[i] % odd == 0) {
                odd = 0;
                break;
            }
        }
    }

    if(even != 0) {
        for(ll i = 1; i < n; i+=2) {
            if(v[i] % even == 0) {
                even = 0;
                break;
            }
        }
    }

    cout << max(odd,even) << endl;
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

