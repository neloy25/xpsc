#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n;
    cin >> n;
    ll ans = 0;
    vector<pair<ll,map<char,ll>>> fst(11);
    vector<pair<ll,map<char,ll>>> last(11);
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        fst[s[0] - 'a'].first++;
        last[s[1] - 'a'].first++;
        fst[s[0] - 'a'].second[s[1]]++;
        last[s[1] - 'a'].second[s[0]]++;
        int f = fst[s[0] - 'a'].first - fst[s[0] - 'a'].second[s[1]];
        int b = last[s[1] - 'a'].first - last[s[1] - 'a'].second[s[0]];
        ans += (f + b);
    }
    cout << ans << endl;
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

