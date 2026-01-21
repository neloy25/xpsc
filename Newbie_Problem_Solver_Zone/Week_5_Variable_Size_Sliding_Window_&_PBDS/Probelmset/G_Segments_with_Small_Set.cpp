#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,k;
    cin >> n >> k;

    ll arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<ll,ll> mp;

    ll r = 0,l = 0;

    ll res = 0;
    for(; r < n;r++) {
        mp[arr[r]]++;

        while(mp.size() > k) {
            mp[arr[l]]--;
            if(mp.count(arr[l]) && mp[arr[l]] == 0) {
                mp.erase(arr[l]);
            }
            l++;
        }
        res+= (r - l + 1);
    }
    cout << res << endl;
    return 0;
}

