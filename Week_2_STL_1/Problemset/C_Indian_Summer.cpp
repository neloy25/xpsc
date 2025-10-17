#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    set<pair<string,string>> leaf;
    for(int i = 0;  i < n; i++) {
        string s1,s2;
        cin >> s1 >> s2;

        leaf.insert({s1,s2});
    }

    cout << leaf.size() << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}

