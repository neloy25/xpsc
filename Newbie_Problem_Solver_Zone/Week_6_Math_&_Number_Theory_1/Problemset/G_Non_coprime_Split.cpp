#include<bits/stdc++.h>
using namespace std;

int isPrime(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return i;
    }
    return -1;
}

void solve() {
    int a,b;
    cin >> a >> b;
    if(a <= 3 && b <= 3) {
        cout << -1 << endl;
        return;
    }
    if(a <= 3) {
        if(b % 2) cout << 2 << " " << b - 3 << endl;
        else cout << 2 << " " << b - 2 << endl;
        return;
    }
    if(a != b) {
        if(a % 2 == 0) {
            cout << 2 << " " << a - 2 << endl;
        } else {
            cout << 2 << " " << a - 1 << endl;
        }
    } else {
        int val = isPrime(a);
        if(val == -1) cout << -1 << endl;
        else cout << a - val << " " << val << endl;
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

