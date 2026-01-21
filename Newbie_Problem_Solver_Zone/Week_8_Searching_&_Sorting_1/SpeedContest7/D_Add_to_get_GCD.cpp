#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void solve() {
    int a,b;
    cin >> a >> b;
    
    if(gcd(a,b) >= 2) cout << 0 << endl;
    else if(a % 2 == 0 || b % 2 == 0) cout << 1 << endl;
    else if(gcd(a + 1, b) >= 2 || gcd(a, b + 1) >= 2) cout << 1 << endl;
    else cout << 2 << endl; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

