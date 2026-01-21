#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,x;
    cin >> n >> x;
    vector<ll> v(n);
    iota(v.begin(),v.end(),1);
    if(x <= n) reverse(v.begin(),v.begin() + x - 1);
    else reverse(v.begin() + (x % n) - 1,v.end());
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
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

