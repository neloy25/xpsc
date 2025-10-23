#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    map<string,bool> mp;
    while(t--){
        string s;
        cin >> s;

        if(mp.count(s)) cout << "YES" << endl;
        else {
            cout << "NO\n";
        }
        mp[s] = true;
    }
    return 0;
}

