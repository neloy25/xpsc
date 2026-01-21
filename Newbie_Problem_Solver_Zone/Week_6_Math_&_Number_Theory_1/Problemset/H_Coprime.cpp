#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}


void solve() {
    int n;
    cin >> n;
    vector<int> idx(1005,0);
    for(int i = 1; i <= n; i++) {
        int val;
        cin >> val;
        idx[val] = i;
    }

    int res = -1;
    for(int i = 1;i <= 1000; i++) {
        for(int j = 1; j <= 1000; j++) {
            if(gcd(i,j) == 1 && idx[i] && idx[j]) {
                res = max(res, idx[i] + idx[j]);
                // cout << i << " " << j << " " << res << endl;
            }
        }
    }

    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

