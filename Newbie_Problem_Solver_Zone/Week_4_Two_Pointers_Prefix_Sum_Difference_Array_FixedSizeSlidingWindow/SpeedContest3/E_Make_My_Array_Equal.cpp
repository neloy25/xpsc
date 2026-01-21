#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool all_equal = true;
    sort(a.begin(),a.end());
    int tmp = a[n - 1];

    for(int i = 0; i < n; i++) {
        if(a[i] != tmp && a[i] != 0) all_equal = false;
    }
    if (all_equal)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
