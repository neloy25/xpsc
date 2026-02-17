#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    map<ll, ll> mp;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }

    vector<int> feq;
    for(auto [key, val] : mp) {
        feq.push_back(val);
    }
    sort(feq.begin(), feq.end());

    int i = 0;
    int res = mp.size();
    while(i < n && feq[i] <= k) {
        res--;
        k-=feq[i];
        i++;
    }

    res = max(1, res);
    cout << res nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}