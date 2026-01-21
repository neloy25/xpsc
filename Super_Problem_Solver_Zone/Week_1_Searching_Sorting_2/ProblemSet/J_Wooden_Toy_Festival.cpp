#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

bool calcRes(const vector<ll> &v,int n,ll x) {
    ll a = -1, b = -1, c = -1;
    for(int i = 0; i < n; i++) {
        if(a == -1) a = v[i] + x;
        else if(b == -1) {
            if(abs(v[i] - a) > x) b = v[i] + x;
        } else if(c == -1) {
            if(abs(v[i] - b) > x) c = v[i] + x;
        } else {
            if(abs(v[i] - c) > x) return false;
        }
    }
    return true;
}

ll binarySearch(const vector<ll>& v, ll n) {
    ll l = 0, r = v.back() + 15;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (!calcRes(v,n,mid)) l = mid + 1;
        else r = mid - 1;
    }
    return r + 1;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    cout << binarySearch(v,n) << endl;
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

