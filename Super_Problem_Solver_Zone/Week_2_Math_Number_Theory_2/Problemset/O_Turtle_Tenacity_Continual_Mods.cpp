#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    if(v[0] != v[1]) {
        yes; return;
    }

    for(int i = 1; i < n; i++) {
        if(v[i] % v[0] != 0) {
            yes;
            return;
        }
    }
    no;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}