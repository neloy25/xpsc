#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;

    string s;
    cin >> s;

    set<int> ind;
    for(int i = 0; i < m; i++) {
        int val;
        cin >> val;
        ind.insert(val);
    }

    string c;
    cin >> c;

    sort(c.begin(), c.end());
    int i = 0;
    for(int val : ind) {
        // cout << val << " ";
        s[val - 1] = c[i++];
    }

    cout << s << endl;
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

