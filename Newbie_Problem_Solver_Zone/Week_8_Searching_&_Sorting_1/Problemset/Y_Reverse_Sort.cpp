#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    ll n,k = 0, one = 0, zero = 0;
    cin >> n ;
    string s;cin >> s;

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') zero++;
        else one++;
    }

    vector<ll> res;
    for(ll i = 0; i < zero; i++) {
        if(s[i] == '1') res.push_back(i + 1);
    }

    for(ll i = 0; i < one; i++) {
        if(s[n - i - 1] == '0') res.push_back(n - i);
    }

    sort(res.begin(),res.end());
    if(res.size() == 0) {
        cout << 0 << endl;
        return;
    }
    cout << 1 << endl;
    cout << res.size() << " ";
    for(int i = 0; i < res.size(); i++) {
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
    while(t--) solve();
    return 0;
}

