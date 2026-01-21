#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    int n = s.size();

    bool flag = false;
    for(int i = 0; i < n - 1; i++) {
        if(s[i] == s[i + 1] && s[i] == 's') flag = true;
    }

    if(flag) cout << "hiss\n";
    else cout << "no hiss\n";
    return 0;
}

