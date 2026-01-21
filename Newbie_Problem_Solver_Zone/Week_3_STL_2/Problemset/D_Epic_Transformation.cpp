#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        map<int,int> mp;

        for(int i = 0; i < n; i++) {
            int val;
            cin >> val;
            mp[val]++;
        }

        int mx = 0;
        for(auto [key,val] : mp) {
            mx = max(mx,val);
        }

        if(2 * mx > n) {
            cout << 2 * mx - n << endl;
        } else if(n % 2) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}

