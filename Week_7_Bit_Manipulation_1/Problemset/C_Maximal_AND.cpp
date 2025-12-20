#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,k;
    cin >> n >> k;
    vector<int> bits(31,0);
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        for(int i = 0; i <= 30; i++) {
            if((x & 1) == 0) {
                bits[i]++;
            }

            x = x >> 1;
        }
    }

    ll res = 0;
    for(int i = 30; i >= 0; i--) {
        if(bits[i] <= k) {
            k-=bits[i];
            res+= (1 << i);
        }
    }

    cout << res << endl;
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

