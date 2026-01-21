#include<bits/stdc++.h>
using namespace std;

void solve() {
    map<string,set<int>> mp;
    int n;
    cin >> n;
    for(int i = 0; i < 3;i++) {
        for(int j = 0; j < n; j++) {
            string s;
            cin >> s;
            mp[s].insert(i);
        }
    }

    int res[3] = {0};
    for(auto [key,val]: mp) {
        if(val.size() > 2) continue;

        if(val.size() == 1) res[*val.begin()]+=3;
        if(val.size() == 2) {
            res[*val.begin()]++;
            res[*val.rbegin()]++;
        }

    }

    cout << res[0] << " " << res[1] << " " << res[2] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

