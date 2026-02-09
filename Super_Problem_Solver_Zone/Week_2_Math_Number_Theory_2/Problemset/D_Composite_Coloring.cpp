#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31};
void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<ll,ll> mp;
    int idx = 1;
    int ans = 1;
    for(int i = 0; i < 11; i++) {
        bool flag = false;
        for(int val : v) {
            if(val % primes[i] == 0) {
                if(!mp.count(val)) {
                    flag = true;
                    mp[val] = idx;
                    ans = max(ans,idx);
                }
            }
        }

        if(flag) idx++;
    }

    cout << ans nl;
    for(int val : v) {
        cout << mp[val] << " ";
    }
    cout nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}