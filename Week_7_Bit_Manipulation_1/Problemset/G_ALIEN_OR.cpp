#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,k;
    cin >> n >> k;

    vector<string> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<bool> feq(k,0);
    for(int i = 0; i < n; i++) {
        int one = -1;
        for(int j = 0; j < k; j++) {
            if(v[i][j] == '1') {
                if(one == -1) one = j;
                else {
                    one = -1;
                    break;
                }
            }
        }
        if(one != -1) feq[one] = true;
    }

    for(int i = 0; i < k; i++) {
        if(!feq[i]) {
            no;
            return;
        }
    }
    yes;
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

