#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,k;
    cin >> n >> m >> k;
    multiset<ll> a;
    vector<ll> b(m);
    
    for(int i = 0; i < n; i++) {
        int val;cin >> val;
        a.insert(val);
    }

    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(b.begin(),b.end());

    ll res = 0;
    for(int i = 0; i < m; i++) {
        auto it = a.lower_bound(b[i] - k);
        if(it != a.end() && *it <= b[i] + k) {
            res++;
            a.erase(it);
        }
    }

    cout << res << endl;
    return 0;
}

