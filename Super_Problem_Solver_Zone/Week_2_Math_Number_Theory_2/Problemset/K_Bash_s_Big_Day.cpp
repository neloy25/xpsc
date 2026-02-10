#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

const ll N = 1e5 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> feq(N + 1, 0);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        feq[v[i]]++;
    }

    vector<ll> res(N + 1,0);

    res[1] = 1;
    for(int i = 2; i < N; i++) {
        if(res[i] == 0) {
            ll val = 0;
            for(int j = i; j < N;j+=i) {
                val+= feq[j];
                res[j] = max(res[j], val);
            }
        }
    }

    cout << *max_element(res.begin(), res.end());
}