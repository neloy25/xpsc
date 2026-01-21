#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    
    int res = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        res = res ^ v[i];
    }

    int tmp = res;
    for(int i = 0; i < n; i++) {
        int a = (tmp ^ v[i]);
        res = min(res, a);
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

