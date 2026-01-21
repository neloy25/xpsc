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

    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;

        cout << upper_bound(v.begin(),v.end(),r) - lower_bound(v.begin(),v.end(),l) << " ";
    }
    return 0;
}

