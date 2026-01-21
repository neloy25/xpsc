#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,k;
    cin >> n >> k;

    vector<ll> f;
    vector<ll> b;
    for(ll i = 1; i * i <= n;i++) {
        if(n % i == 0) {
            f.push_back(i);
            if(i != (n / i)) b.push_back(n / i);
        }
    }

    if(k > f.size() + b.size()) {
        cout << -1 << endl;
    } else if(k > f.size()) {
        cout << b[b.size() + f.size() - k] << endl;
    } else {
        cout << f[k - 1] << endl;
    }
    return 0;
}

