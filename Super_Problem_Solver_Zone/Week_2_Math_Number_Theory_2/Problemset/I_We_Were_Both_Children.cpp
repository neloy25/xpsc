#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

// const ll N = 2 * 1e5 + 5;
void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> feq(n + 1, 0);
    for(int i = 0; i < n; i++)
        if(v[i] <= n) feq[v[i]]++;

    vector<int> res(n + 1, feq[1]);
    for(int i = 2; i <= n; i++) {
        if(feq[i] != 0) {
            for(int j = i; j <= n; j+=i) {
                res[j]+= feq[i];
            }
        }
    }

    cout << *max_element(res.begin(), res.end()) nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}