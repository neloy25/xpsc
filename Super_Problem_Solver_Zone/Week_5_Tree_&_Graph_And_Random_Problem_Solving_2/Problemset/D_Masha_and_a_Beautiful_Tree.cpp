#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ops = 0;
    int diff = 1;
    while(v.size() > 1) {
        vector<ll> tmp;
        for(int i = 0; i < v.size(); i+=2) {
            if(abs(v[i] - v[i + 1]) != diff) {
                cout << -1 nl;
                return;
            }
            if(v[i] > v[i + 1]) ops++;
            tmp.push_back(min(v[i], v[i + 1]));
        }
        v = tmp;
        diff *= 2;
    }
    cout << ops nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}