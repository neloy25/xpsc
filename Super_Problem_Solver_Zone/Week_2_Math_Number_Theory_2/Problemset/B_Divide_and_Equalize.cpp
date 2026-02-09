#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<ll,ll> factors;

    for(ll value : v) {
        ll k = value;
        while(k > 1) {
            bool flag = false;
            for(int i = 2; i * i <= k; i++) {
                if(k % i == 0) {
                    factors[i]++;
                    k /= i;
                    flag = true;
                    break;
                }
            }

            if(!flag) {
                factors[k]++;
                break;
            }
        }
    }

    for(auto [key, val] : factors) {
        if(val % n != 0) {
            no;
            return;
        }
    }
    yes;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
}