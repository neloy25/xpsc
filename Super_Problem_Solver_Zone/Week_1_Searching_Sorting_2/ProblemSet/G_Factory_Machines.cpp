#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const ll MAX = LLONG_MAX - 5;

ll search(vector<ll> &v,ll x,int t) {
    // cout << v.size();
    ll sum = 0;
    for(int i = 0; i < v.size(); i++) {
        sum+= (x / v[i]);
        if(sum >= t) return sum;
        // cout << v[i] << endl;
    }

    return sum;
}

void solve() {
    ll n,t;
    cin >> n >> t;

    vector<ll> v(n);
    for(auto &x : v) cin >> x;

    ll l = 1, r = MAX;
    ll res = 0;
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        // cout << search(v,mid) << endl;
        if(search(v,mid,t) >= t) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }

        // cout << l << " " << r << endl;
    }

    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}