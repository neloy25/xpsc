#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl << endl;
#define MAX 1000000

bool canKill(const vector<ll>& a, const vector<ll>& c, ll n, ll h, ll x) {
    long long total = 0;

    for(int i = 0; i < n; i++) {
        ll turn = (x - 1) / c[i] + 1; 
        total += turn * a[i];

        if(total >= h) return true;
    }
    return false;
}


ll binSearch(const vector<ll>& a, const vector<ll>& c, ll n, ll h) {
    ll l = 1, r =1LL * MAX * MAX;
    ll ans = r;

    while(l <= r) {
        ll mid = l + (r - l) / 2;
        if(canKill(a, c, n, h, mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}


void solve() {
    ll h, n;
    cin >> h >> n;

    vector<ll> a(n);
    vector<ll> c(n);

    for(auto &x : a) cin >> x;
    for(auto &x : c) cin >> x;

    cout << binSearch(a,c,n,h) nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}