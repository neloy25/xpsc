#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n,k,q;
    cin >> n >> k >> q;

    ll arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll res = 0;

    ll cnt = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= q) {
            cnt++;
        } else {
            cnt = 0;
        }

        if(cnt >= k) {
            res+=(cnt - k + 1);
        }
    }

    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}