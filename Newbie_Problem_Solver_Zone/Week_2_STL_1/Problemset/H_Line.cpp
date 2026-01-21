#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll ans = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'L') ans+=i;
        else ans+= (n - 1 - i);
    }

    vector<ll> res(n + 1,ans);
    res[0] = ans;

    for(ll l = 0,r = 0,i = 1; l < n / 2 && r < n / 2 && i <= n;l++,r++) {
        ll prev = l;
        ll curr = n - l - 1;
        ll diff = curr - prev;
        if(s[l] == 'L' && s[n - 1 - r] == 'R') {
            res[i++] = res[i - 1] + diff;
            res[i++] = res[i - 1] + diff;
        } else if(s[l] == 'L') {
            res[i++] = res[i - 1] + diff;
        } else if(s[n - 1 - r] == 'R') {
            res[i++] = res[i - 1] + diff;
        }
    }
    
    for(ll i = 1; i <=n;i++) {
        if(res[i] == ans) res[i] = res[i - 1];
    }

    for(ll i = 1; i <=n;i++) {
        cout << res[i] << " ";
    }
    cout << endl;
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

