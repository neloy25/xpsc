#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,q;
    cin >> n >> q;
    vector<ll> v(n);
    vector<int> pre(n + 1);
    pre[0] = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(),v.end(),greater<int>());

    for(int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + v[i - 1];
    }

    for(int i = 0; i < q;i++) {
        int x;
        cin >> x;
        auto it = lower_bound(pre.begin(),pre.end(),x);
        if(it == pre.end()) cout << -1 << endl;
        else cout << (it - pre.begin()) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

