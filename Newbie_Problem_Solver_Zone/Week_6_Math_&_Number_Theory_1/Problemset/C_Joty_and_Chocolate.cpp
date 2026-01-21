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

ll lcm(ll a, ll b) {
    return (a * b) / gcd(a,b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,a,b,p,q;
    cin >> n >> a >> b >> p >> q;

    ll ca = (n / a) * p;
    ll cb = (n / b) * q;
    ll cl = (n / lcm(a,b)) * min(p,q);

    cout << ca + cb - cl << endl;
    return 0;
}

