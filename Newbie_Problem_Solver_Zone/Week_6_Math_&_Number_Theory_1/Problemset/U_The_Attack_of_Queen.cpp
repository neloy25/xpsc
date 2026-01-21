#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes "YES\n"
#define no "NO\n"

void solve() {
    ll n,x,y;
    cin >> n >> x >> y;

    if(x > (n/ 2)) {
        x = n - x + 1;
    }

    if(y > (n / 2)) {
        y = n - y + 1;
    }

    cout << (n - 1) * 3 + (min(x,y) - 1)* 2 << endl;
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

