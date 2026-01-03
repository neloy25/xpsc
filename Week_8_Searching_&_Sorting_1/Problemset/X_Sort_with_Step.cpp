#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,k;
    cin >> n >> k;
    vector<ll> v(n + 1);
    
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    ll cng = 0;
    for(int i = 1; i <= n; i++) {
        if((v[i] - i) % k != 0) {
            cng++;
        }
    }

    if(cng == 0) cout << 0 << endl;
    else if(cng <= 2) cout << 1 << endl;
    else cout << -1 << endl;
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

