#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'
const int N = 2*1e5 + 5;
ll n;
int dp[N], v[N];

int f(ll i, ll h, int g, int b) {
    if(i == n) return 0;

    int ans = 0;
    if(v[i] < h) {
        ans = 1 + f(i + 1, h + (v[i] / 2), g, b);
    } else {
        if(g != 0) ans = max(ans,f(i, h * 2, g - 1, b));
        if(b != 0) ans = max(ans,f(i, h * 3, g , b - 1));
    }
    return ans;
}

void solve() {
    ll h;
    cin >> n >> h;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v, v+ n);
    cout << f(0, h, 2, 1) nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}