#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string,int> mp;
    for(int i = 1; i < n;i++) {
        string tmp;
        tmp+=s[i - 1];
        tmp+= s[i];

        mp[tmp]++;
    }

    string res;
    int mx = -1;

    for(auto [key, val] : mp) {
        if(val > mx) {
            res = key;
            mx = val;
        }
    }

    cout << res << endl;
    return 0;
}

