#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;
    cin >> n;
    string s; cin >> s;

    int cnt = 0;
    int l = 0, r = n - 1;
    while(l < r) {
        if(s[l] != s[r]) cnt++;
        l++;
        r--;
    }

    l = cnt, r = n - cnt;

    string t(n + 1, '0');
    if(n & 1) {
        for(int i = l; i <= r; i++) {
            t[i] = '1';
        }
    } else {
        for(int i = l; i <= r; i+=2) {
            t[i] = '1';
        }
    }

    cout << t nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}