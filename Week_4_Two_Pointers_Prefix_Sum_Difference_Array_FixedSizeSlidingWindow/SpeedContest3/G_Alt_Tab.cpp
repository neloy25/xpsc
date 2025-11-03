#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    map<string,int> mp;
    for(int i = n; i >= 1;i--){
        string s;
        cin >> s;
        
        mp[s] = i;
    }

    vector<pair<int,string>> v;
    for(auto [key,val] : mp) {
        v.push_back({val,key});
    }

    sort(v.begin(),v.end());

    for(auto [x,y] : v) {
        cout << y[y.size() - 2]<< y[y.size() - 1];
    }
    return 0;
}

