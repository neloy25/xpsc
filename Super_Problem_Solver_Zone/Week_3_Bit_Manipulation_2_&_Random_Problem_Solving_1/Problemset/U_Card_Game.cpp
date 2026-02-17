#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    if(n == 2) {
        if(s[0] == 'A') cout << "Alice\n";
        else cout << "Bob\n";
        return;
    }

    int bob = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'B') bob++;
    }

    if(bob == 1) cout << "Alice\n";
    else if(s[0] == 'A' && s[n - 1] == 'A') cout << "Alice\n";
    else if(s[n - 1] == 'A' && s[n - 2] == 'A') cout << "Alice\n";
    else cout << "Bob\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}