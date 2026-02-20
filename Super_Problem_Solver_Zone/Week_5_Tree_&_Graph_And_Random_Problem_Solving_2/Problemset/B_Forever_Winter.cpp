#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << endl;

void solve() {
    int u, v;
    cin >> u >> v;

    vector<int> feq(u+1, 0);
    for(int i = 0; i < v; i++) {
        int a, b;
        cin >> a >> b;

        feq[a]++,feq[b]++;
    }

    int c = -1,d = -1,cntC = 0, cntD = 0;
    for(int i = 1; i <= u; i++) {
        if(feq[i] > 1) {
            if(c == -1 || feq[i] == c) {
                c = feq[i];
                cntC++;
            }
            else {
                d = feq[i];
                cntD++;}
        }
    }

    // cout << c << " " << d << endl;
    // return;
    if(c == -1) {
        cout << v << " " << 0 << endl;
    } else if(d == -1) {
        if(cntC == 1) cout << c << " " << 0 << endl;
        else cout << c << " " << c-1 << endl;
    } else if(cntC > 1) {
        cout << d << " " << c - 1 << endl;
    } else {
        cout << c << " " << d - 1 << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}