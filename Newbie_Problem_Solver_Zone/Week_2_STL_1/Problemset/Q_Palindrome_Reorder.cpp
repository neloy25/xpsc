#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    map<char, int> mp;

    for(int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }

    char odd = '#';
    for(auto [key,val] : mp) {
        if(val % 2) {
            if(odd != '#') {
                cout << "NO SOLUTION\n";
                return 0;
            }
            odd = key;
        }
    }

    deque<char> res;
    if(odd != '#') {
        for(int i = 0; i < mp[odd];i++) {
            res.push_back(odd);
        }
        mp.erase(odd);
    }


    for(auto [key,val] : mp) {
        for(int i = 0; i < val / 2;i++) {
            res.push_back(key);
            res.push_front(key);
        }
    }

    for(char c : res) {
        cout << c;
    }

    cout << endl;
    return 0;
}

