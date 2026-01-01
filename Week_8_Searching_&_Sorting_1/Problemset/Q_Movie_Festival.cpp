#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<pair<ll,ll>> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(),v.end());

    ll res = 0,a = 0;
    for(int i = 0; i < n; i++) {
        auto [f,l] = v[i];
        if(f >= a) {
            res++;
            a = l;
        } else {
            a = min(a,l);
        }
    }

    cout << res << endl;
    return 0;
}

