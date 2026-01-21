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
        vector<int> v(n);
        for(auto &x : v) cin >> x;

        vector<bool> fq(n + 1,false);
        int i = 0;
        for(; i < n; i++) {
            if(fq[v[n - i - 1]]) break;
            fq[v[n - i - 1]] = true;
        }

        cout << n - i << endl;
    }
    return 0;
}

