#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin >> n >> m;

    vector<int> v(n);
    map<int,int> mp;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]] = i;
    }

    vector<int> res(n);
    int cnt = mp.size();
    for(int i = 0; i < n; i++) {
        res[i] = cnt;
        if(mp[v[i]] == i) cnt--;
    }

    for(int i = 0; i < m; i++) {
        int val;
        cin >> val;
        val--;


        cout << res[val] << endl;
    }
    return 0;
}

