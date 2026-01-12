#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define MAX (ll)INT_MAX

bool calcRes(const vector<ll>& v,ll n,ll k,ll x) {
    ll cnt = n - n / 2;
    ll res = 0;
    for(int i = n - 1; i >= n / 2; i--) {
        if(x > v[i]) {
            res+=(x - v[i]);
        }
        if(res > k) {
            return false;
        }
    }
    return true;
}

ll binarySearch(const vector<ll>& v, ll n, ll k) {
    ll l = 1, r = (ll)MAX;
    ll res;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (calcRes(v,n,k,mid)) {
            l = mid + 1;
            res = mid;
        }
        else r = mid - 1;
    }
    return res;
}

void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    cout << binarySearch(v,n,k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // cout << MAX << endl;
    
    solve();
    return 0;
}

