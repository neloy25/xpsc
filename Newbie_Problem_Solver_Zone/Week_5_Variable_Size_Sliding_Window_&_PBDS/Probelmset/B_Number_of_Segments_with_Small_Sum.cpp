#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,x;
    cin >> n >> x;

    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll sum = 0, res = 0, l = 0;
    for(ll r = 0; r < n; r++) {
        sum+= v[r];

        while(sum > x) {
            sum-=v[l];
            l++;
        }

        res+= (r - l + 1);
    }

    cout << res << endl;
    return 0;
}

