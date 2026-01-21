#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    int x = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        x ^= v[i];
    }

    if(x != 0 && n % 2 == 0) {
        cout << - 1<< endl;
    }
    else cout << x << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

