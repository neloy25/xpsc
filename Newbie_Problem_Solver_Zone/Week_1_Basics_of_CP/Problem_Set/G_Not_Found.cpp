#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    int n = s.size();
    int feq[26] = {0};

    for(int i = 0; i < n; i++) {
        feq[s[i] - 'a']++;
    }

    bool found = false;
    for(int i = 0; i < 26; i++) {
        if(feq[i] == 0) {
            cout << char(i + 97) << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "None\n";
    }

    return 0;
}

