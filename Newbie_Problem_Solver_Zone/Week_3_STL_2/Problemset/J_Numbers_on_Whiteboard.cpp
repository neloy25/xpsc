#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    cout << 2 << endl;

    cout << n << " " << n - 1 << endl;
    int l = n - 2;
    while(l >= 1) {
        cout << l << " " << l + 2 << endl;
        l--;
    }
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

