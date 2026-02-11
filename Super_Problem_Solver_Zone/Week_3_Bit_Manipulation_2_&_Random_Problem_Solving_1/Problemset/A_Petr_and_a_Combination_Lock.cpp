#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i = 0; i < (1 << n); i++) {
        int res = 0;
        for(int k = 0; k < n; k++) {
            if((i >> k) & 1) {
                res+= v[k];
            } else {
                res-=v[k];
            }
        }

        if(res % 360 == 0) {
            yes;
            return 0;
        }
    }
    no;
    return 0;
}