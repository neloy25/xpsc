#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    bool even = false;
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;

        if(val % 2 == 0) even = true;
    }

    if(even) cout << "NO\n";
    else cout << "YES\n";
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

