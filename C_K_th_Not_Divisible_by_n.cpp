#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

ll calcVal(ll x, ll a) {
    ll res = x / a;
    return x - res;
}

ll binarySearch(ll a,ll b) {
    ll l = a, r = b * 2 + 15;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (calcVal(mid,a) == b && mid % a != 0) return mid;
        else if (calcVal(mid,a) < b) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        ll x = binarySearch(a,b);
        if(x == -1) cout << b << endl;
        else cout << x << endl;
    }
    return 0;
}

