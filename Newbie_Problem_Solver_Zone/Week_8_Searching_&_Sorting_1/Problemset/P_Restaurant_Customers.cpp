#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n; cin >> n;
    vector<ll> arr(n),leave(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i] >> leave[i];
    }

    sort(arr.begin(),arr.end());
    sort(leave.begin(),leave.end());

    ll res = 0;
    for(int i = 0; i < n; i++) {
        ll num = upper_bound(arr.begin(),arr.end(),leave[i]) - arr.begin();
        res = max(res, num - i);
    }
    cout << res << endl;
    return 0;
}

