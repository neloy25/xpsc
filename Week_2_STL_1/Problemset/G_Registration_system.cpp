#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    map<string,int> mp;

    for(int i = 0; i < n;i++) {
        string s;
        cin >> s;
        if(mp.count(s)) {
            cout << s << mp[s] << endl;
            mp[s]++;
        } else {
            cout << "OK\n";
            mp[s] = 1;
        }
    }
    return 0;
}

