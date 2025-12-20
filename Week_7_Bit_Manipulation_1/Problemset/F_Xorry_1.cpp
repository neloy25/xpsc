#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    int cpy = n;
    // cout << a << " " << b << endl;
    int k = 0;
    while(n != 0) {
        n = n >> 1;
        k++;
    }
    int b = (1 << (k - 1));
    int a = cpy ^ b;
    cout << a << " " << b << endl;
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

