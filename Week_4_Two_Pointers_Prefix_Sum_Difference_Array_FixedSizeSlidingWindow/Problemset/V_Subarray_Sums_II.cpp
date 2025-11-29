#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin >> n >> x;

    ll arr[n];
    ll pre[n + 1];
    pre[0] = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + arr[i - 1];
    }

    map<ll, ll> sums;
    sums[0] = 1;

    ll res = 0;
    for(int i = 1; i<= n;i++) {
        ll need = pre[i] - x;

        res+= sums[need];

        sums[pre[i]]++;
    }

    cout << res << endl;
    return 0;
}

