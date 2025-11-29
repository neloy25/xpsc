#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    vector<int> q(m);
    for(auto &x : q) cin >> x;

    sort(v.begin(),v.end());
    map<int,int> mp;
    int tmp = 1;
    for(int i = n - 1; i >= 0; i--) {
        mp[v[i]] = tmp;
        tmp++;
    }
    for(int i = 0; i < m; i++) {
        auto it = upper_bound(v.begin(),v.end(),q[i]);
        if(it != v.end()) {
            cout << n - mp[*it]<< " ";
        }
        else cout << n << " ";
    }
    return 0;
}