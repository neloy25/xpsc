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

        string s;
        cin >> s;


        map<char,char> mp;

        for(char c : s) {
            mp[c] = c;
        }

        string p;
        for (auto [key, val] : mp) {
            p += key;
        }

        int l = 0,r = p.size() - 1;

        while(l < r) {
            mp[p[l]] = p[r];
            mp[p[r]] = p[l];
            l++;
            r--;
        }

        for(int i = 0; i < n; i++) {
            s[i] = mp[s[i]];
        }

        cout << s << endl;
    }
    return 0;
}

