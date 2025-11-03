#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mx = 0;
    for(int i = 0; i < m;i++) {
        int val;
        cin >> val;
        mx = max(val,mx);
    }

    int s = n - mx;

    sort(a.begin() + s,a.end());

    for(int val : a) {
        cout << val << " ";
    }

    cout << endl;
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

