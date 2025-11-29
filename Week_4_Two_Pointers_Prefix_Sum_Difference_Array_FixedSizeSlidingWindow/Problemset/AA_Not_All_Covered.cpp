#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin >> n >> m;

    vector<int> diff(n + 2,0);

    for(int i = 0; i < m; i++) {
        int a,b;
        cin >> a >> b;
        diff[a]++;
        diff[b + 1]--;
    }

    int res = INT_MAX;
    for(int i = 1; i <= n; i++) {
        diff[i] = diff[i - 1] + diff[i];
        res = min(res,diff[i]);
    }

    cout << res << endl;
    return 0;
}

