#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<int,int>> v(n);
    vector<vector<int>> equals;
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        v[i] = {val,i};
    }

    sort(v.begin(),v.end());
    for(int i = 0; i < n - 1;i++) {
        vector<int> eq;
        while(v[i].first == v[i + 1].first) {
            if(eq.empty()) eq.push_back(v[i].second);
            eq.push_back(v[i + 1].second);
            i++;
            if(i == n - 1) break;
        }
        if(!eq.empty()) equals.push_back(eq);
    }

    sort(equals.begin(),equals.end());

    int m;
    cin >> m;

    while(m--) {
        string s;
        cin >> s;

        if(s.length() != n) {
            cout << "NO\n";
            continue;
        }

        vector<pair<char,int>> vs(n);
        vector<vector<int>> equalstr;
        for(int i = 0; i < n; i++) {
            vs[i] = {s[i],i};
        }
        sort(vs.begin(),vs.end());

        for(int i = 0; i < n - 1;i++) {
            vector<int> eq;
            while(vs[i].first == vs[i + 1].first) {
                if(eq.empty()) eq.push_back(vs[i].second);
                eq.push_back(vs[i + 1].second);
                i++;
                if(i == n - 1) break;
            }
            if(!eq.empty()) equalstr.push_back(eq);
        }

        sort(equalstr.begin(),equalstr.end());

        if(equals != equalstr) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
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

