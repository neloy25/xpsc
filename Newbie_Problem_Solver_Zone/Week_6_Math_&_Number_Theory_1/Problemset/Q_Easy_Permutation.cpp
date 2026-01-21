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
        vector<int> v(n);
        iota(v.begin(),v.end(),1);
        reverse(v.begin(),v.end());

        for(int val : v) {
            cout << val << " ";
        }

        cout << endl;
    }
    return 0;
}

