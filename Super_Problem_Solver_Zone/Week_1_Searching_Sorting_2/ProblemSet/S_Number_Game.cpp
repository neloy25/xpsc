#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;

    multiset<int> ms;

    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        ms.insert(val);
    }


    auto ok = [&](int k) {
        multiset<int> s = ms;

        for (int i = 0; i < k; i++) {
            int add = k - i; 

            if (s.empty()) return false;

            auto it = s.upper_bound(add);
            if (it == s.begin()) return false;
            --it;
            s.erase(it);

            if (!s.empty()) {
                auto it2 = s.begin();
                int v = *it2;
                s.erase(it2);
                s.insert(v + add);
            }
        }
        return true;
    };



    int l = 0, r = n, ans = 0, mid;
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
    cout << ans <<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}