#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll n,a,b,c,d;
    cin >> n >> a >> b >> c >> d;

    ll res = 0;
    for(ll one = 0; one <= n; one++) {
        ll zero = n - one;

        ll res1 = one*b + zero*a;
        ll res2 = max(c, d) * one * zero;

        res = max(res, res1 + res2);
    }
    cout << res << "\n";
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

