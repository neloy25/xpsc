#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<ll,ll> mp;
    ll cnt = 0;

    ll res = 0;
    ll n;
    cin >> n;
    for(ll i = 1; i <= n; i++) {
        ll val;
        cin >> val;
        if(mp.count(val) && mp[val] > cnt) {
            res = max(res,i - cnt - 1);
            cnt = mp[val];
        } 
        mp[val] = i;
    }
    res = max(res,n - cnt);
    cout << res << endl;
    return 0;
}

