#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin >> n >> x;

    vector<pair<int,int>> v(n);

    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        v[i] = {val,i + 1};
    }

    sort(v.begin(),v.end());

    int l = 0;
    int r = n - 1;
    while(l < r) {
        int sum = v[l].first + v[r].first;

        if(sum == x) {
            cout << v[l].second << " " << v[r].second << endl;
            return 0;
        } 
        if(sum > x) {
            r--;
        } else{
            l++;
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}

