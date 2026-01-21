#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        set<int> idx;
        stack<int> up,low;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'B') {
                if(!up.empty()) {
                    int rmv = up.top();
                    up.pop();
                    if(idx.find(rmv) != idx.end()) idx.erase(rmv);
                }
            } else if(s[i] == 'b') {
                if(!low.empty()) {
                    int rmv = low.top();
                    low.pop();
                    if(idx.find(rmv) != idx.end()) idx.erase(rmv);
                }
            } else {
                if(s[i] >= 'A' && s[i] <= 'Z') {
                    up.push(i);
                    idx.insert(i);
                } else {
                    low.push(i);
                    idx.insert(i);
                }
            }
        }

        for(int i: idx) {
            cout << s[i];
        }

        cout << endl;
    }
    return 0;
}

