#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] == 0) cnt++;
    }

    cout << max(cnt, n - cnt) << endl;
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

