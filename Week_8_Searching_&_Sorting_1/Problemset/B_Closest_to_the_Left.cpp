#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

ll binarySearch(const vector<ll>& v, ll target) {
    ll l = 0, r = (ll)v.size() - 1;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (v[mid] <= target) {
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return l;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,q;
    cin >> n >> q;
    vector<ll> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    while(q--) {
        int x;
        cin >> x;
        cout << binarySearch(v,x) << endl;
    }
    return 0;
}

