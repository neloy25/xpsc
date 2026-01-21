#include<bits/stdc++.h>
using namespace std;

map<string,string> par;
map<string,string> child;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s,t;
        cin >> s >> t;

        if(par.count(s)) {
            child[par[s]] = t;
            par[t] = par[s];
        } else {
            child[s] = t;
            par[t] = s;
        }
    }

    cout << child.size() << endl;
    for(auto [key,val] : child) {
        cout << key << " " << val << endl;
    }
    return 0;
}

