#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        int val;
        cin >> a[i];
    }
    if(n == 2 && (a[0] % 2) == (a[1] % 2)) cout << "YES\n";
    else if(n > 2) cout << "YES\n";
    else cout << "NO\n"; 
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

