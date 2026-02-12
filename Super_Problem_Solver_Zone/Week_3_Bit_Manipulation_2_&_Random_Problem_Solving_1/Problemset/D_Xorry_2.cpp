#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;cin >> n;
    int one = __builtin_popcount(n);

    ll ans = 0;

    while(one > 1){
        if(n & 1) {
            one--;
        } else {
            ans++;
        }
        n >>= 1;
    }
    ans = (1LL << ans);
    cout << ans nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}