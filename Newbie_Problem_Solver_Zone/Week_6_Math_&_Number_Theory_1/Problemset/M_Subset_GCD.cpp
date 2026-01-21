#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;

        int div = n / k;
        
        for(int i = 1; i <= k;i++) {
            cout << div * i << " ";
        }

        cout << endl;
    }
    return 0;
}

