#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int q;
    cin >> q;
    while(q--) {
        ll m;
        cin >> m;

        cout << *upper_bound(v.begin(), v.end(), m) << " ";
        cout << upper_bound(v.begin(), v.end(), m) - v.begin() << '\n';
    }

    return 0;
}
