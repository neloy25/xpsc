#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int res = 1;
        for(int i = 2; i <= n;i++) {
            res = (res * i) % 10;
        }
        cout << res << endl;
    }
    return 0;
}

