#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;

    int cpy = n,k = 0;
    while(n != 0) {
        n = n >> 1;
        k++;
    }

    int val = 1 << (k - 1);
    // cout << val << " ";
    cout << max((int)(val >> 1), cpy - val + 1) << endl;
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

