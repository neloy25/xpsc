#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    map<string,int> mp;
    for(int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        mp[s] = i;
    }

    vector<pair<string,int>> vec(mp.begin(),mp.end());

    sort(vec.begin(),vec.end(), [](auto &a, auto &b) {
        return a.second > b.second;
    });
    for(auto &p : vec) {
        cout << p.first << endl;
    }
    return 0;
}

