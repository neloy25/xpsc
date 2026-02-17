#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n, k, res = 1;
    cin >> n >> k;
    vector<ll> l(n), r(n);
    for(auto &x : l) cin >> x;
    for(auto &x : r) cin >> x;

    vector<ll> left;
    for(int i = 0; i < n; i++) {
        res+= max(l[i], r[i]);
        left.push_back(min(l[i], r[i]));
    }

    sort(left.begin(), left.end(), greater<int>());

    for(int i = 0; i < k - 1; i++) {
        res+=left[i];
    }

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