#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    ll arr[n];
    ll pre[n + 1];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    pre[0] = 0;
    for(int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + arr[i - 1];
    }

    int l = 0, r = n - 1;

    ll res = 0;
    while(l < r) {
        if(s[l] == 'L' && s[r] == 'R') {
            res+= (pre[r + 1] - pre[l]);
            l++;
            r--;
        } else if(s[l] == 'L') {
            r--;
        } else if(s[r] == 'R') {
            l++;
        } else {
            l++;
            r--;
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

