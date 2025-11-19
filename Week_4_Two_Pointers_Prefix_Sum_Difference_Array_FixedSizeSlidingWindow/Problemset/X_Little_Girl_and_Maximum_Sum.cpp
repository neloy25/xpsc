#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin >> n >> k;

    vector<ll> arr(n + 1);
    vector<ll> diff(n + 2,0);

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < k; i++) {
        int l,r;
        cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }

    for(int i = 1; i <= n; i++) {
        diff[i] = diff[i - 1] + diff[i];
    }

    ll res = 0;
    sort(diff.begin() + 1,diff.end(),greater<int>());
    sort(arr.begin() + 1,arr.end(),greater<int>());

    for(int i = 1; i <= n; i++) {
        res+= diff[i] * arr[i];
    }

    cout << res << endl;
    return 0;
}

