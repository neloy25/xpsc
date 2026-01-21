#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,k;
    cin >> n >> k;
    vector<ll> v(k);
    
    for(int i = 0; i < k; i++) {
        cin >> v[i];
    }

    sort(v.begin(),v.end(),greater<int>());

    ll sum = 0;
    ll res = 0;
    for(int i = 0; i < k; i++) {
        sum+=(n - v[i]);
        if(sum >= n) break;
        res++;
    }
    cout << res << endl;
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