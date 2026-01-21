#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for(auto &x : a) cin >> x;
    vector<ll> h(n);
    for(auto &x : h) cin >> x;
    vector<pair<ll,ll>> sub;

    ll l = 0,r = 0;
    while(l < n) {
        r = l;
        while(r < n - 1 && h[r] % h[r + 1] == 0) {
            r++;
        }

        // cout << l << " " << r << endl;
        sub.push_back({l,r});
        l = r + 1;
    }

    ll res = 0;
    for(auto [x,y] : sub) {
        ll sum = 0;
        ll tmp = 0;
        l = x;
        for(r = x; r <= y; r++) {
            sum+= a[r];
            while(sum > k) {
                sum-=a[l];
                l++;
            }
            tmp = max(tmp,r - l + 1);
        }
        res = max(res,tmp);
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

