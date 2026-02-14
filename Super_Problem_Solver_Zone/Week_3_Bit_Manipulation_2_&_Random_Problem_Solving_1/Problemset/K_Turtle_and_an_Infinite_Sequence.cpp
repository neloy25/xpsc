#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    int l = max(0, n - m), r = n + m;

    int ans = 0;
    for (int i = 0; i < 31; i++) {
        if ((l & (1LL << i)) || (r & (1LL << i)) || (l >> (i + 1)) != (r >> (i + 1))) {
            ans |= (1LL << i);
        }
    }

    cout << ans nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}