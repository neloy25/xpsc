#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    string res;
    res.push_back(s[0]);
    for(int i = 1; i < s.size() - 1; i++) {
        if(s[i] == '-') res.push_back(s[i + 1]);
    }

    cout << res << endl;
    return 0;
}

