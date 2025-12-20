#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;
    n--;
    vector<ll> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<ll> b(n + 1,0);

    for(int i = 0; i < n; i++) {
        b[i] = b[i] | v[i];
        b[i + 1] = b[i + 1] | v[i];
        // cout << b[i] << " " << b[i + 1] << endl;
    }

    for(int i = 0; i < n; i++) {
        if((b[i] & b[i + 1]) != v[i]) {
            cout << -1 << endl;
            return;
        }
    }

    for(int i = 0; i <= n; i++) {
        cout << b[i] << " ";
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

