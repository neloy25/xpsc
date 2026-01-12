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
    vector<ll> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    ll mn = 0, mx = 0;
    ll res = 1;

    for(int i = 0; i < n; i++) {
        if(mn + v[i] > res) break;
        mx = mx + v[i];
        res = mx + 1;
    }
    cout << res << endl;
    return 0;
}

