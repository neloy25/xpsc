#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    int x,y,k;
    cin >> x >> y >> k;

    while(k > 0) {
        // cout << "K ==== " << k nl;
        if(x == 1) break;
        int need = y - (x % y);
        // cout << need nl;
        if(k < need) {
            x += k;
            cout << x nl;
            return;
        }
        x+=need;
        k-=need;
        while(x % y == 0) {
            // cout << x nl;
            x /= y;
        }
    }

    k = k % (y - 1);
    x += k;
    if(x % y == 0) x /= y;
    cout << x nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}