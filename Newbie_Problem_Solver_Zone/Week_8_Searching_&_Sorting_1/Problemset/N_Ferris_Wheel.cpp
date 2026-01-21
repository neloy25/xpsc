#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x;
    cin >> n >> x;
    vector<ll> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    ll l = 0, r = n - 1;
    ll ans = 0;
    while(l <= r) {
        ans++;
        if(v[l] + v[r] > x) {
            r--;
        } else {
            l++;
            r--;
        }
    }

    cout << ans << endl;
    return 0;
}

