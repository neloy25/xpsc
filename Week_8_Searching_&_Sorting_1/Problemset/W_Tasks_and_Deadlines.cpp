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
    ll sum = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        ll val;
        cin >> val;
        sum+=val;
    }

    sort(v.begin(),v.end());
    ll fact = n;
    ll neg = 0;

    for(int i = 0; i < n; i++) {
        neg += v[i] * fact;
        fact--;
    }

    cout << sum - neg << endl;
    return 0;
}

