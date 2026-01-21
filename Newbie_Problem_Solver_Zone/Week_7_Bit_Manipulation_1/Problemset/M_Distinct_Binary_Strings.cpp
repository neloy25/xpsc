#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int chk = -1;
    int res = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] != chk) {
            res++;
            chk = s[i];
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

