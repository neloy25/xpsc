#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
const ll maxN = 1e5 + 2;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<int> v(n);
    vector<bool> dp(maxN, false);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int mx = 0;
    dp[0] = true;
    int ans = 0;
    
    for(int i = 0; i < n; i++) {
        int mx1 = mx;
        vector<int> tmp;
        for(int j = 0; j <= mx; j++) {
            if(dp[j]) {
                tmp.push_back(j + v[i]);
                mx1 = max(mx1, j + v[i]);
            }
        }

        for(int val : tmp) {
            if(!dp[val]) ans++;
            dp[val] = true;
        }
        mx = mx1;
    }

    cout << ans nl;
    for(int i = 1; i<= mx; i++) {
        if(dp[i]) cout << i << " ";
    }
    return 0;
}