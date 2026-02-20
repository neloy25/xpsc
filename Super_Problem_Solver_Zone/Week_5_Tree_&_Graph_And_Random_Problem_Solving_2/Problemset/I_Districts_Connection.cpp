#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n), a;
    int b = -1;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] != v[0]) b = i;
        else {
            a.push_back(i);
        }
    }

    if(b == -1) {
        no; return;
    }
    yes;
    for(int i = 1; i < n; i++) {
        if(v[i] != v[0]) {
            cout << 1 << " " << i + 1 << endl;
        }
    }

    for(int val : a) {
        if(val == 0) continue;
        cout << b + 1 << " " << val + 1 << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}