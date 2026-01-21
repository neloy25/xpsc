#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, n;
    cin >> a >> b >> n;

    if (a % b == 0) {
        cout << -1 << endl;
        return;
    }

    long long d = ((n + a - 1) / a) * a;

    while (d % b == 0) d += a;

    cout << d << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
