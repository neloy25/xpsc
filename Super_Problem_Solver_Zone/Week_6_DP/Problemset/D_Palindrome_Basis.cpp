#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
const int maxN = 4e4, MOD = 1e9 + 7;
vector<int> palindromes;
void prec() {
    for(int i = 1; i <= maxN; i++) {
        string s = to_string(i), t = s;
        reverse(s.begin(), s.end());
        if(s == t) palindromes.push_back(i);
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    prec();
    vector<int> dp(maxN + 1, 0);
    dp[0] = 1;
    for(int p : palindromes) {
        for(int sum = p; sum <= maxN; sum++) {
            dp[sum] = (dp[sum] + dp[sum - p]) % MOD;
        }
    }
    int t;
    cin >> t;
    while(t--) {
       int n;
       cin >> n;
       cout << dp[n] nl; 
    }

    return 0;
}