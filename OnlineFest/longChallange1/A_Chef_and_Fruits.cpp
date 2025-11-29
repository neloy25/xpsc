#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;

        int diff = abs(n - m);

        if(diff > k) cout << diff - k << endl;
        else cout << 0 << endl;
    }
    return 0;
}

