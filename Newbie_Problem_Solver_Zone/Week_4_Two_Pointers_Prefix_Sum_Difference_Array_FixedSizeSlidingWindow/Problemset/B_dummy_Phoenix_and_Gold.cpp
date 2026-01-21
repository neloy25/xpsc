#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        sort(v.begin(),v.end());
        int rem = 0;
        int w = 0;

        vector<int> res;
        for(int i = 0; i < n; i++) {
            w+= v[i];
            if(w == x) rem = v[i];
            else res.push_back(v[i]);
        }

        if(w == x) cout << "NO\n";
        else {
            cout << "YES\n";
            if(rem != 0) res.push_back(rem);

            for(int val : res) {
                cout << val << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

