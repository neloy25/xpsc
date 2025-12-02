#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes "YES\n"
#define no "NO\n"

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    if(sum % n) {
        cout << "Impossible\n";
    } else {
        ll need = sum / n;
        for(int i = 0; i < n; i++) {
            if(v[i] == need) {
                cout << i + 1 << endl;
                return;
            }
        }
        cout << "Impossible\n";
    }
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

