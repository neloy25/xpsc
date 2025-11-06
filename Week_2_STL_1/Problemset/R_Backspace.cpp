#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    int n = s.size();
    string res;
    res.reserve(n);

    for(int i = 0; i < n; i++) {
        if(s[i] == '<') {
            if(!res.empty()) res.pop_back();
        } else {
            res.push_back(s[i]);
        }
    }

    cout << res << endl;
    return 0;
}

