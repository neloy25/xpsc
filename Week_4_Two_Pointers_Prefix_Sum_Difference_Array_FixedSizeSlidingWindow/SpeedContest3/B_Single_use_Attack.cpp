#include<bits/stdc++.h>
using namespace std;

void solve() {
    int h,x,y ;
    cin >> h >> x >> y;

    if(x >= y) {
        cout << (h + x - 1) / x;
    } else {
        cout << ((h + x - y - 1) / x) + 1;
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

