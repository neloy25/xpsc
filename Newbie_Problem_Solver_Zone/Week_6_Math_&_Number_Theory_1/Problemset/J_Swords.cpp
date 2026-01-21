#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<ll> v(n);
    ll mx = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mx = max(mx, v[i]);
    }

    ll sum = 0,g = 0;
    for(int i = 0; i < n; i++) {
        ll diff = mx - v[i];
        sum += diff;
        g = gcd(g,diff);
    }

    cout << (sum / g) << " " << g << endl;

    return 0;
}

