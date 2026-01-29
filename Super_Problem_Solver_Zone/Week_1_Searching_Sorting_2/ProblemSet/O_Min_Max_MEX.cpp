#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    for(auto &x : v) cin >> x;

    auto ok = [&](int x) {
        vector<int> feq(x + 1, 0);
        vector<int> vis(x + 1, 0);

        int cnt = 0;
        int cur = 1;
        int ans = 0;

        for(int val : v) {
            if(val < x) {
                if(feq[val] != cur) {
                    feq[val] = cur;
                    cnt++;
                }
            }

            if(cnt == x) {
                ans++;
                cnt = 0;
                cur++;
            }
            if(ans >= k) return true;
        }
        return false;
    };

    int l = 0, r = n + 2, ans = 0, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (!ok(mid))
        {
            r = mid - 1;
        }
        else{
            ans = mid;
            l = mid + 1;
        }       
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}