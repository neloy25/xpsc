#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    vector<pair<int,int>> v(n);

    for(int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        v[i] = {a,b};
    }

    sort(v.begin(),v.end());

    int tv1 = -1, tv2 = -1;

    for(int i = 0; i < n; i++) {
        if(v[i].first > tv1) tv1 = v[i].second;
        else if(v[i].first > tv2) tv2 = v[i].second;
        else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}