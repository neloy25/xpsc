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

        for(int i = 0; i < n; i++) {
            int val;
            cin >> val;
            cout << n - val + 1 << " ";
        }

        cout << endl;
    }


    return 0;
}

